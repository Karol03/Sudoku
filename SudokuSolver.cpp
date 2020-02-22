/**
 * Created by Karol Dudzic @ 2020
 */
#include "SudokuSolver.hpp"
#include "ui_SudokuSolver.h"

#include <sstream>

#include "Solver.hpp"

SudokuSolver::SudokuSolver(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SudokuSolver)
{
    ui->setupUi(this);
}

SudokuSolver::~SudokuSolver()
{
    delete ui;
}

void SudokuSolver::set_last_digit_only(QTextEdit* textEdit)
{
    if (textEdit->alignment() != Qt::AlignCenter)
    {
        textEdit->setAlignment(Qt::AlignCenter);
    }
    bool isOk{false};
    const auto text = textEdit->toPlainText();
    const auto length = text.length();
    text.toInt(&isOk);
    if (length < 1 or (length == 1 and isOk and text.back() != QChar('0')))
    {
        ui->textEdit->clear();
        return;
    }
    else if (not isOk or text.back() == QChar('0'))
    {
        textEdit->clear();
    }
    else
    {
        auto cursor = new QTextCursor(textEdit->document());
        cursor->movePosition(QTextCursor::End);
        textEdit->setText(QString(text.back()));
        textEdit->setTextCursor(*cursor);
    }
}


void SudokuSolver::on_firstNumberTextEdit_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit);
}

void SudokuSolver::on_firstNumberTextEdit_2_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_2);
}

void SudokuSolver::on_firstNumberTextEdit_3_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_3);
}

void SudokuSolver::on_firstNumberTextEdit_4_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_4);
}

void SudokuSolver::on_firstNumberTextEdit_5_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_5);
}

void SudokuSolver::on_firstNumberTextEdit_6_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_6);
}

void SudokuSolver::on_firstNumberTextEdit_7_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_7);
}

void SudokuSolver::on_firstNumberTextEdit_8_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_8);
}

void SudokuSolver::on_firstNumberTextEdit_9_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_9);
}

void SudokuSolver::on_firstNumberTextEdit_28_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_28);
}

void SudokuSolver::on_firstNumberTextEdit_29_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_29);
}

void SudokuSolver::on_firstNumberTextEdit_30_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_30);
}

void SudokuSolver::on_firstNumberTextEdit_31_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_31);
}

void SudokuSolver::on_firstNumberTextEdit_32_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_32);
}

void SudokuSolver::on_firstNumberTextEdit_33_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_33);
}

void SudokuSolver::on_firstNumberTextEdit_34_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_34);
}

void SudokuSolver::on_firstNumberTextEdit_35_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_35);
}

void SudokuSolver::on_firstNumberTextEdit_36_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_36);
}

void SudokuSolver::on_firstNumberTextEdit_37_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_37);
}

void SudokuSolver::on_firstNumberTextEdit_38_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_38);
}

void SudokuSolver::on_firstNumberTextEdit_39_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_39);
}

void SudokuSolver::on_firstNumberTextEdit_40_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_40);
}

void SudokuSolver::on_firstNumberTextEdit_41_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_41);
}

void SudokuSolver::on_firstNumberTextEdit_42_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_42);
}

void SudokuSolver::on_firstNumberTextEdit_43_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_43);
}

void SudokuSolver::on_firstNumberTextEdit_44_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_44);
}

void SudokuSolver::on_firstNumberTextEdit_45_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_45);
}

void SudokuSolver::on_firstNumberTextEdit_55_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_55);
}

void SudokuSolver::on_firstNumberTextEdit_56_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_56);
}

void SudokuSolver::on_firstNumberTextEdit_57_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_57);
}

void SudokuSolver::on_firstNumberTextEdit_58_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_58);
}

void SudokuSolver::on_firstNumberTextEdit_59_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_59);
}

void SudokuSolver::on_firstNumberTextEdit_60_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_60);
}

void SudokuSolver::on_firstNumberTextEdit_61_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_61);
}

void SudokuSolver::on_firstNumberTextEdit_62_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_62);
}

void SudokuSolver::on_firstNumberTextEdit_63_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_63);
}

void SudokuSolver::on_firstNumberTextEdit_64_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_64);
}

void SudokuSolver::on_firstNumberTextEdit_65_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_65);
}

void SudokuSolver::on_firstNumberTextEdit_66_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_66);
}

void SudokuSolver::on_firstNumberTextEdit_67_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_67);
}

void SudokuSolver::on_firstNumberTextEdit_68_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_68);
}

void SudokuSolver::on_firstNumberTextEdit_69_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_69);
}

void SudokuSolver::on_firstNumberTextEdit_70_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_70);
}

void SudokuSolver::on_firstNumberTextEdit_71_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_71);
}

void SudokuSolver::on_firstNumberTextEdit_72_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_72);
}

void SudokuSolver::on_firstNumberTextEdit_82_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_82);
}

void SudokuSolver::on_firstNumberTextEdit_83_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_83);
}

void SudokuSolver::on_firstNumberTextEdit_84_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_84);
}

void SudokuSolver::on_firstNumberTextEdit_85_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_85);
}

void SudokuSolver::on_firstNumberTextEdit_86_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_86);
}

void SudokuSolver::on_firstNumberTextEdit_87_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_87);
}

void SudokuSolver::on_firstNumberTextEdit_88_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_88);
}

void SudokuSolver::on_firstNumberTextEdit_89_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_89);
}

void SudokuSolver::on_firstNumberTextEdit_90_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_90);
}

void SudokuSolver::on_firstNumberTextEdit_91_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_91);
}

void SudokuSolver::on_firstNumberTextEdit_92_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_92);
}

void SudokuSolver::on_firstNumberTextEdit_93_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_93);
}

void SudokuSolver::on_firstNumberTextEdit_94_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_94);
}

void SudokuSolver::on_firstNumberTextEdit_95_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_95);
}

void SudokuSolver::on_firstNumberTextEdit_96_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_96);
}

void SudokuSolver::on_firstNumberTextEdit_97_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_97);
}

void SudokuSolver::on_firstNumberTextEdit_98_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_98);
}

void SudokuSolver::on_firstNumberTextEdit_99_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_99);
}

void SudokuSolver::on_firstNumberTextEdit_109_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_109);
}

void SudokuSolver::on_firstNumberTextEdit_110_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_110);
}

void SudokuSolver::on_firstNumberTextEdit_111_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_111);
}

void SudokuSolver::on_firstNumberTextEdit_112_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_112);
}

void SudokuSolver::on_firstNumberTextEdit_113_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_113);
}

void SudokuSolver::on_firstNumberTextEdit_114_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_114);
}

void SudokuSolver::on_firstNumberTextEdit_115_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_115);
}

void SudokuSolver::on_firstNumberTextEdit_116_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_116);
}

void SudokuSolver::on_firstNumberTextEdit_117_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_117);
}

void SudokuSolver::on_firstNumberTextEdit_127_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_127);
}

void SudokuSolver::on_firstNumberTextEdit_128_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_128);
}

void SudokuSolver::on_firstNumberTextEdit_129_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_129);
}

void SudokuSolver::on_firstNumberTextEdit_130_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_130);
}

void SudokuSolver::on_firstNumberTextEdit_131_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_131);
}

void SudokuSolver::on_firstNumberTextEdit_132_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_132);
}

void SudokuSolver::on_firstNumberTextEdit_133_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_133);
}

void SudokuSolver::on_firstNumberTextEdit_134_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_134);
}

void SudokuSolver::on_firstNumberTextEdit_135_textChanged()
{
    set_last_digit_only(ui->firstNumberTextEdit_135);
}

std::string SudokuSolver::getNumbers()
{
    auto result = std::string{};
    auto frames = ui->sudokuWidget->children();
    for (const auto frame : frames)
    {
        auto texts = frame->children();
        for (const auto text : texts)
        {
            if (const auto qtextedit = dynamic_cast<QTextEdit*>(text))
            {
                auto value{qtextedit->toPlainText().toStdString()};
                result += (value.empty() ? "0" : value);
            }
        }
    }
    return result;
}

void SudokuSolver::on_pushButton_2_released()
{
    try {
        std::string numbers = getNumbers();
        if (Solver(numbers).convert().check())
        {
            ui->textEdit->setText(QString("Congratulation! You solve sudoku puzzle"));
        }
        else
        {
            ui->textEdit->setText(QString("Wrong! The puzzle has not been solved correctly"));
        }
    } catch (std::invalid_argument& e) {
        ui->textEdit->setText(QString("Error: ") + QString(e.what()));
    } catch (std::runtime_error e) {
        ui->textEdit->setText(QString("Error: ") + QString(e.what()));
    } catch (std::exception& e) {
        ui->textEdit->setText(QString("Unknown error: ") + QString(e.what()));
    }
}

void SudokuSolver::apply_on_board(std::string numbers)
{
    if (numbers.size() != 81)
    {
        std::stringstream stream;
        stream << "Solved size is not matching to board " << numbers.size();
        throw std::runtime_error{stream.str()};
    }
    auto i{0};
    auto frames = ui->sudokuWidget->children();
    for (auto& frame : frames)
    {
        auto texts = frame->children();
        for (auto& text : texts)
        {
            if (auto qtextedit = dynamic_cast<QTextEdit*>(text))
            {
                if (numbers[i] != '0')
                {
                    qtextedit->setTextColor(QColor(Qt::GlobalColor::darkCyan));
                    qtextedit->setReadOnly(true);
                }
                else
                {
                    qtextedit->setReadOnly(false);
                }
                qtextedit->setText(QString(numbers[i]));
                ++i;
                if (i > 81)
                {
                    throw std::runtime_error{"Number of available frames is bigger than 81!"};
                }
            }
        }
    }
}

void SudokuSolver::on_pushButton_released()
{
    try {
        auto sudoku = Solver{getNumbers()};
        sudoku.convert()
              .solve()
              .unconvert();
        apply_on_board(sudoku.result());
    } catch (std::exception& e) {
        ui->textEdit->setText(QString("Error: ") + QString(e.what()));
    }
}

std::string SudokuSolver::generate_randoms()
{
    std::srand ( unsigned ( std::time(0) ) );
    auto result = std::string(81, '0');
    int squares[]{0, 1, 2, 3, 4, 5, 6, 7, 8};
    std::random_shuffle(squares, squares + 9);
    int fields[]{1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::random_shuffle(fields, fields + 9);
    char numbres[]{'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    std::random_shuffle(numbres, numbres + 9);
    for (auto i{0}; i < 9; i++)
    {
        result[9*squares[i] + fields[i]] = numbres[i];
    }
    return result;
}

void SudokuSolver::set_diffictult(int visibleNumbers)
{
    const char* levels[]{"Easy", "Medium", "Hard", "Very hard"};
    if (visibleNumbers > 21)
    {
        ui->lineEdit->setText(levels[0]);
    }
    else if (visibleNumbers > 15)
    {
        ui->lineEdit->setText(levels[1]);
    }
    else if (visibleNumbers > 10)
    {
        ui->lineEdit->setText(levels[2]);
    }
    else
    {
        ui->lineEdit->setText(levels[3]);
    }
}


void SudokuSolver::new_board(std::string numbers)
{
    std::srand ( unsigned ( std::time(0) ) );
    int fields[]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
        11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
        21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
        31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
        41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
        51, 52, 53, 54, 55, 56, 57, 58, 59, 60,
        61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
        71, 72, 73, 74, 75, 76, 77, 78, 79, 80};
    std::random_shuffle(fields, fields + 81);
    const auto toErase{(std::rand() % 24) + 50};
    for (auto i{0}; i < toErase; i++)
    {
        numbers[fields[i]] = '0';
    }
    set_diffictult(81 - toErase);
    apply_on_board(numbers);
}

void SudokuSolver::on_pushButton_3_released()
{
    try {
        auto sudoku = Solver{generate_randoms()};
        sudoku.convert()
              .solve()
              .unconvert();
        new_board(sudoku.result());
    } catch (std::exception& e) {
        ui->textEdit->setText(QString("Error: ") + QString(e.what()));
    }
}
