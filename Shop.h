//
// Created by Евгения on 16.10.2026.
//

#ifndef INC_16_10_2026_SHOP_H
#define INC_16_10_2026_SHOP_H


#include <vector>
#include "Overcoat.h"
class Shop {
private:
    std::vector<Overcoat> goods;

public:
    void addOvercoat(const Overcoat& item);
    void removeOvercoat(int id);
    void increaseSize(int id);
    void decreaseSize(int id);
    void searchByTupe(std::string type) const;
    void sortByPrice();
    void displayAll() const;
};



#endif //INC_16_10_2026_SHOP_H
