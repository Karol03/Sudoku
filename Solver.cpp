/**
 * Created by Karol Dudzic @ 2020
 */
#include "Solver.hpp"

#include <algorithm>
#include <sstream>

void Solver::flip_row_square(std::string& numbers)
{
    auto group = std::vector<std::string>(9);
    for (auto i{0}; i < 9; i++)
    {
        for (auto j{0}; j < 9; j++)
        {
            group[(i/3)*3+j/3] += numbers[i*9 + j];
        }
    }
    numbers.clear();
    for (const auto row : group)
    {
        numbers += row;
    }
}

Solver& Solver::unconvert()
{
    flip_row_square(m_result);
    return *this;
}

Solver& Solver::convert()
{
    flip_row_square(m_area);
    return *this;
}

bool Solver::is_unique(std::string str) const
{
    std::sort(str.begin(), str.end());
    str.erase(std::unique(str.begin(), str.end()), str.end());
    return str.size() == 9;
}

bool Solver::is_unique_column_row_square() const
{
    for (auto i{0}; i < 9; i++)
    {
        std::stringstream perColumn;
        std::stringstream perRow;
        std::stringstream perSquare;
        for (auto j{0}; j < 9; j++)
        {
            perRow << m_area[i*9 + j];
            perColumn << m_area[j*9 + i];
            perSquare << m_area[(i%3)*3+(i/3)*27+(j%3)+(j/3)*9];
        }

        if (not is_unique(perColumn.str()) or
            not is_unique(perRow.str()) or
            not is_unique(perSquare.str()))
        {
            return false;
        }
    }
    return true;
}

bool Solver::check()
{
    return is_unique_column_row_square();
}

std::string Solver::result() const
{
    if (m_result.size() == 81)
    {
        return m_result;
    }
    return {};
}

Solver& Solver::solve(std::string area)
{
    std::swap(area, m_area);
    solve();
    return *this;
}

Solver& Solver::solve()
{
    m_result.clear();
    check_solvable();
    try {
        m_timeout = std::chrono::system_clock::now();
        solve_recursively();
    }
    catch (std::runtime_error e)
    {
        throw;
    }
    catch (...) {}
    return *this;
}

bool Solver::is_timeout() const
{
    const auto TIMEOUT = std::chrono::seconds(3);
    const auto end = std::chrono::system_clock::now();
    return std::chrono::duration_cast<std::chrono::seconds>(end - m_timeout) >= TIMEOUT;
}

void Solver::solve_recursively()
{
    if (is_timeout())
    {
        throw std::runtime_error{"The puzzle is not solvable!"};
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (m_area[i*9+j] == '0')
            {
                for (const auto number : possibilities(i, j))
                {
                    m_area[i*9+j] = '0' + number;
                    solve_recursively();
                    m_area[i*9+j] = '0';
                }
                return;
            }
        }
    }
    m_result = m_area;
    throw std::exception{};
}

std::vector<int> Solver::possibilities(int i, int j)
{
    auto result = std::set<int>{1,2,3,4,5,6,7,8,9};
    erase_appeared_in_row(result, i);
    erase_appeared_in_column(result, j);
    erase_appeared_in_square(result, i, j);
    return std::vector<int>(result.begin(), result.end());
}

void Solver::erase_appeared_in_row(std::set<int>& numbers, int row)
{
    for (int i = 0; i < 9; i++)
    {
        const auto number{m_area[row*9 + i] - '0'};
        numbers.erase(number);
    }
}

void Solver::erase_appeared_in_column(std::set<int>& numbers, int column)
{
    for (int i = 0; i < 9; i++)
    {
        const auto number{m_area[i*9 + column] - '0'};
        numbers.erase(number);
    }
}

void Solver::erase_appeared_in_square(std::set<int>& numbers, int row, int column)
{
    const auto rowBeg = (row/3) * 3;
    const auto rowEnd = rowBeg + 3;
    const auto colBeg = (column/3) * 3;
    const auto colEnd = colBeg + 3;
    for (int i = rowBeg; i < rowEnd; i++)
    {
        for (int j = colBeg; j < colEnd; j++)
        {
            numbers.erase(m_area[i*9+j] - '0');
        }
    }

}

void Solver::check_solvable() const
{
    if (not is_suitable_size())
    {
        std::stringstream stream;
        stream << "Invalid number of numbers entered " << m_area.size()
            << ". Sudoku is not solvable";
        throw std::invalid_argument(stream.str());
    }
    if (auto pos = is_digits())
    {
        std::stringstream stream;
        stream << "Invalid character entered in string of characters at position " << pos
            << ". Sudoku is not solvable";
        throw std::invalid_argument(stream.str());
    }
}

bool Solver::is_suitable_size() const
{
    const auto SUDOKU_AREA_SIZE = 81;
    return m_area.size() == SUDOKU_AREA_SIZE;
}

int Solver::is_digits() const
{
    const auto IsNotAcceptable = [](const char c) { return not (std::isdigit(c) or c == '*'); };
    auto pos = std::find_if(m_area.begin(), m_area.end(), IsNotAcceptable);
    return (pos == m_area.end() ? 0 : pos - m_area.begin());
}
