#include <iostream>
#include "Shop.h"

int main() {
    Shop myShop;

    myShop.addOvercoat(Overcoat("пальто класичне" ,"",50,3500));
    myShop.addOvercoat(Overcoat("куртка зимня","жіноча",44, 4200));
    myShop.addOvercoat(Overcoat("плащ весна","жіноча",46,2800));

    std::cout <<"всі товари  в магазині:"<<std::endl;
    myShop.displayAll();

    std::cout <<"\nПошук жіночого одягу:"<<std::endl;
    myShop.searchByTupe("");

    std::cout <<"збільшення за ціною:"<<std::endl;
    myShop.increaseSize(1);
    myShop.displayAll();
    std::cout <<"\nсортування за ціною:"<<std::endl;
    myShop.sortByPrice();
    myShop.displayAll();

    std::cout <<"\nвидалення  ID 2:"<<std::endl;
    myShop.removeOvercoat(2);
    myShop.displayAll();

    return 0;


}
