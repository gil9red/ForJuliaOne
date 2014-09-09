#include "ShareWare.h"
#include "User.h"
#include "Manufacturer.h"
#include "common.h"

ShareWare::ShareWare()
    : u(qrand() % 2000 + 500), // от 500 до 2000 $
      price(u / 100), // цена
      copies_purchased(0),
      type(Unknown),
      name("???"),
      manufacturer(0)
{

}

void ShareWare::wasPurchased(User * user) { // было куплено
    user->purse -= price * one_usd; // снимаем деньги из кошелька юзера
    copies_purchased++; // плюс к счетчеку покупок
    manufacturer->earned += price;
}
