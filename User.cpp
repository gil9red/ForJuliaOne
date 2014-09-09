#include "User.h"
#include "Manufacturer.h"
#include "common.h"

User::User()
    : purse(10000), // у каждого в кошельке 10000 рублей
      name("???")
{

}

// покупка у определенного проивзодителя
void User::buy(Manufacturer * manufacturer)
{
    QList <ShareWare * > listInterestsSharewares; // список понравившихся ПО

    // найдем ПО, которое совпадает по интересам и кошельку
    foreach (ShareWare * sw, manufacturer->sharewares) {
        int sw_price_rub = sw->price * one_usd;
        if (listOfInterests.indexOf(sw->type) != -1 && sw_price_rub < purse)
            listInterestsSharewares.append(sw);
    }

    if (listInterestsSharewares.isEmpty()) {
        qDebug() << name << "Никакое ПО не заинтересовало";
    } else {
        // Выбирается случайное ПО из списка
        ShareWare * sw = listInterestsSharewares.at(qrand() % listInterestsSharewares.count());
        sw->wasPurchased(this);
        qDebug() << name << "купил" << sw->name;
    }
}
