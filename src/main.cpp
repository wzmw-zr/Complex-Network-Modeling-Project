#include <QApplication>
#include "mainwindow.h"

int main(int argc, char **argv) {
    // std::string path = "/home/zr/Desktop/Complex-Network-Project/ca-GrQc.txt";
    // NetWork net(path);
    // std::cout << net.num_nodes() << std::endl;
    Py_Initialize();
    PyRun_SimpleString("import matplotlib.pyplot as plt");
    QApplication app(argc, argv);
    // MainWindow window;
    // Ui::Form ui;
    mainwindow window;
    //ui.setupUi(&widget);
    //widget.show();
    window.show();
    return app.exec();
}
