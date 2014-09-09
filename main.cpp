#include <QList>
#include <QString>
#include <QTime>
#include <QDebug>


//1.Производитель ПО позиционирует свою продукцию в классе ShareWare. Затраты на выпуск ПО составляют $U.
//Получив его продукцию,пользователь заплатит $t с вероятностью p.
//Описать поля и методы классов,необходимых для моделирования ситуации:m производителей, n потребителей.
//Составить модель.Учесть влияние курса $ на платежеспособность пользователей.Пользователь зарабатывает в рублях,
//а расплачивается за ПО в соответствии с результатами торгов на ММВБ накануне дня совершения сделки.


#include "Manufacturer.h"
#include "User.h"

int main(int argc, char *argv[])
{
    // инициализация генератора случайных чисел
    qsrand(QTime(0, 0, 0).msecsTo(QTime::currentTime()));

    Manufacturer manufacturer;
    manufacturer.name = "Рога и копыта";
    manufacturer.create(ShareWare::Game);
    manufacturer.create(ShareWare::Game);
    manufacturer.create(ShareWare::Job);

    User user;
    user.name = "Вася";
    user.listOfInterests.append(ShareWare::Game); // ему нравятся игры
    user.buy(&manufacturer); // юзер пытается купить у производителя

    foreach (ShareWare * sw, manufacturer.sharewares) {
        qDebug() << sw->price << sw->type << sw->copies_purchased;
    }

    return 0;
}
