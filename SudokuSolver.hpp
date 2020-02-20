/**
 * Created by Karol Dudzic @ 2020
 */
#pragma once

#include <QMainWindow>
#include <QTextEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class SudokuSolver; }
QT_END_NAMESPACE

class SudokuSolver : public QMainWindow
{
    Q_OBJECT

public:
    SudokuSolver(QWidget *parent = nullptr);
    ~SudokuSolver();

private:
    void set_last_digit_only(QTextEdit* textEdit);
    std::string getNumbers();

private slots:
    void on_firstNumberTextEdit_textChanged();
    void on_firstNumberTextEdit_2_textChanged();
    void on_firstNumberTextEdit_3_textChanged();
    void on_firstNumberTextEdit_4_textChanged();
    void on_firstNumberTextEdit_5_textChanged();
    void on_firstNumberTextEdit_6_textChanged();
    void on_firstNumberTextEdit_7_textChanged();
    void on_firstNumberTextEdit_8_textChanged();
    void on_firstNumberTextEdit_9_textChanged();

    void on_firstNumberTextEdit_28_textChanged();
    void on_firstNumberTextEdit_29_textChanged();
    void on_firstNumberTextEdit_30_textChanged();
    void on_firstNumberTextEdit_31_textChanged();
    void on_firstNumberTextEdit_32_textChanged();
    void on_firstNumberTextEdit_33_textChanged();
    void on_firstNumberTextEdit_34_textChanged();
    void on_firstNumberTextEdit_35_textChanged();
    void on_firstNumberTextEdit_36_textChanged();

    void on_firstNumberTextEdit_37_textChanged();
    void on_firstNumberTextEdit_38_textChanged();
    void on_firstNumberTextEdit_39_textChanged();
    void on_firstNumberTextEdit_40_textChanged();
    void on_firstNumberTextEdit_41_textChanged();
    void on_firstNumberTextEdit_42_textChanged();
    void on_firstNumberTextEdit_43_textChanged();
    void on_firstNumberTextEdit_44_textChanged();
    void on_firstNumberTextEdit_45_textChanged();

    void on_firstNumberTextEdit_55_textChanged();
    void on_firstNumberTextEdit_56_textChanged();
    void on_firstNumberTextEdit_57_textChanged();
    void on_firstNumberTextEdit_58_textChanged();
    void on_firstNumberTextEdit_59_textChanged();
    void on_firstNumberTextEdit_60_textChanged();
    void on_firstNumberTextEdit_61_textChanged();
    void on_firstNumberTextEdit_62_textChanged();
    void on_firstNumberTextEdit_63_textChanged();

    void on_firstNumberTextEdit_64_textChanged();
    void on_firstNumberTextEdit_65_textChanged();
    void on_firstNumberTextEdit_66_textChanged();
    void on_firstNumberTextEdit_67_textChanged();
    void on_firstNumberTextEdit_68_textChanged();
    void on_firstNumberTextEdit_69_textChanged();
    void on_firstNumberTextEdit_70_textChanged();
    void on_firstNumberTextEdit_71_textChanged();
    void on_firstNumberTextEdit_72_textChanged();

    void on_firstNumberTextEdit_82_textChanged();
    void on_firstNumberTextEdit_83_textChanged();
    void on_firstNumberTextEdit_84_textChanged();
    void on_firstNumberTextEdit_85_textChanged();
    void on_firstNumberTextEdit_86_textChanged();
    void on_firstNumberTextEdit_87_textChanged();
    void on_firstNumberTextEdit_88_textChanged();
    void on_firstNumberTextEdit_89_textChanged();
    void on_firstNumberTextEdit_90_textChanged();

    void on_firstNumberTextEdit_91_textChanged();
    void on_firstNumberTextEdit_92_textChanged();
    void on_firstNumberTextEdit_93_textChanged();
    void on_firstNumberTextEdit_94_textChanged();
    void on_firstNumberTextEdit_95_textChanged();
    void on_firstNumberTextEdit_96_textChanged();
    void on_firstNumberTextEdit_97_textChanged();
    void on_firstNumberTextEdit_98_textChanged();
    void on_firstNumberTextEdit_99_textChanged();

    void on_firstNumberTextEdit_109_textChanged();
    void on_firstNumberTextEdit_110_textChanged();
    void on_firstNumberTextEdit_111_textChanged();
    void on_firstNumberTextEdit_112_textChanged();
    void on_firstNumberTextEdit_113_textChanged();
    void on_firstNumberTextEdit_114_textChanged();
    void on_firstNumberTextEdit_115_textChanged();
    void on_firstNumberTextEdit_116_textChanged();
    void on_firstNumberTextEdit_117_textChanged();

    void on_firstNumberTextEdit_127_textChanged();
    void on_firstNumberTextEdit_128_textChanged();
    void on_firstNumberTextEdit_129_textChanged();
    void on_firstNumberTextEdit_130_textChanged();
    void on_firstNumberTextEdit_131_textChanged();
    void on_firstNumberTextEdit_132_textChanged();
    void on_firstNumberTextEdit_133_textChanged();
    void on_firstNumberTextEdit_134_textChanged();
    void on_firstNumberTextEdit_135_textChanged();

    void on_pushButton_2_released();

private:
    Ui::SudokuSolver *ui;
};
