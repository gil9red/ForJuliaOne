#include "Manufacturer.h"

Manufacturer::Manufacturer()
    : earned(0),
      name("???")
{

}

// Создаем ПО определенного типа
ShareWare * Manufacturer::create(ShareWare::Type type/* = ShareWare::Unknown*/) {
    ShareWare * sw = new ShareWare();
    sw->name = QString("%1 : #%2").arg(name).arg(sharewares.size() + 1);
    sw->type = type;
    sw->manufacturer = this;
    sharewares.append(sw);
}
