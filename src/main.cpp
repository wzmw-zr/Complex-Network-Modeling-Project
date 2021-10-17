#include <QApplication>
#include <QFile>
#include <QTextStream>
#include "mainwindow.h"

int main(int argc, char **argv) {
    // std::string path = "/home/zr/Desktop/Complex-Network-Project/ca-GrQc.txt";
    // NetWork net(path);
    // std::cout << net.num_nodes() << std::endl;
    Py_Initialize();
    PyRun_SimpleString("import matplotlib.pyplot as plt");
    QApplication app(argc, argv);
    QFile f("../qdarkstyle/light/style.qss");
    if (!f.exists()) printf("unable to find file!\n");
    else printf("Find file\n");
    f.open(QFile::ReadOnly | QFile::Text);
    QTextStream ts(&f);
    srand(time(0));
    app.setStyleSheet(ts.readAll());
    // MainWindow window;
    // Ui::Form ui;
    mainwindow window;
    //ui.setupUi(&widget);
    //widget.show();
    window.show();
    return app.exec();
}
