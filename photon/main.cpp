#include "photon_main.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    photon_main w;
    w.show();
    return a.exec();
}
