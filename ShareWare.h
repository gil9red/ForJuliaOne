#ifndef SHAREWARE_H
#define SHAREWARE_H

#include <QList>
#include <QString>
#include <QTime>
#include <QDebug>

class User;
class Manufacturer;

// Усло́вно-беспла́тное програ́ммное обеспече́ние (англ. Shareware)
class ShareWare
{
public:
    enum Type {
        Game, // Игра
        ForOffice, // Для офиса
        Job, // Работа
        Unknown // Не определенно
    };

public:
    ShareWare();
    void wasPurchased(User * user);

public:
    int u; // затраты на выпуск в $
    int price; // цена
    int copies_purchased; // копий купленно
    QString name;
    Type type; // тип ПО
    Manufacturer * manufacturer; // указатель на производителя
};

#endif // SHAREWARE_H
