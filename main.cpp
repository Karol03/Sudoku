/**
 * Created by Karol Dudzic @ 2020
 */
#include "SudokuSolver.hpp"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SudokuSolver w;
    w.show();
    return a.exec();
}
