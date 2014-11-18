#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Probando las maravillas de GitHUB";
    qDebug() << "Estos son cosas de mis brances chulos";

    return a.exec();
}
