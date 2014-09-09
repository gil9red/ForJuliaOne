#ifndef MANUFACTURER_H
#define MANUFACTURER_H

#include <QList>
#include <QString>
#include <QTime>
#include <QDebug>

#include "ShareWare.h"

// Производитель -- создает ПО
class Manufacturer
{
public:
    Manufacturer();

    // Создаем ПО определенного типа
    ShareWare * create(ShareWare::Type type = ShareWare::Unknown);

public:
    QList <ShareWare * > sharewares; // список созданных производителем ПО
    int earned; // заработано в $
    QString name;
};

#endif // MANUFACTURER_H
