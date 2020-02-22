/**
 * Created by Karol Dudzic @ 2020
 */
#pragma once

#include <chrono>
#include <set>
#include <string>
#include <vector>


struct Solver
{
    Solver() = default;
    Solver(std::string area) : m_area{std::move(area)} {}

    Solver& solve();
    Solver& solve(std::string area);
    Solver& convert();
    Solver& unconvert();
    std::string result() const;
    bool check();

private:
    void flip_row_square(std::string& numbers);
    void check_solvable() const;
    void erase_appeared_in_row(std::set<int>& numbers, int row);
    void erase_appeared_in_column(std::set<int>& numbers, int column);
    void erase_appeared_in_square(std::set<int>& numbers, int row, int column);
    void solve_recursively();
    bool is_timeout() const;
    bool is_suitable_size() const;
    bool is_unique(std::string str) const;
    bool is_unique_column_row_square() const;
    int is_digits() const;
    std::vector<int> possibilities(int i, int j);

private:
    std::string m_area;
    std::string m_result;
    std::chrono::system_clock::time_point m_timeout;

};
