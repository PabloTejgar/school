#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Probando las maravillas de GitHUB";
    qDebug() << "Estos son cosas de mis brances chulos";
    qDebug() << "Y esto también, aunque no se lo digas a nadie";

    return a.exec();
}
