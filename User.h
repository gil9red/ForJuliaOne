#ifndef USER_H
#define USER_H

#include <QList>
#include <QString>
#include <QTime>
#include <QDebug>

#include "ShareWare.h"

class Manufacturer;

// Пользователь -- покупает ПО
class User
{
public:
    User();

    // покупка у определенного проивзодителя
    void buy(Manufacturer * manufacturer);

public:
    int purse; // кошелек: хранит в рублях
    QString name;
    QList <ShareWare::Type> listOfInterests; // Список интересов пользователя, т.е. какое ПО ему интересно
};

#endif // USER_H
