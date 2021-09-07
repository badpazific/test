#include <QCoreApplication>

#include "mallardduck.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MallardDuck *duck1 = new MallardDuck();
    duck1->display();
    duck1->quack();

    return a.exec();
}
