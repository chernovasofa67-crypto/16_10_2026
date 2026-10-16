//
// Created by Евгения on 16.10.2026.
//

#include "Shop.h"
#include <algorithm>


void Shop::addOvercoat(const Overcoat &item) {
    goods.push_back(item);
}

void Shop::removeOvercoat(int id) {
    for (auto it = goods.begin(); it != goods.end(); ++it) {
        if (it->getId() == id) {
            goods.erase(it);
            break;
        }
    }

}

void Shop::increaseSize(int id) {
    for (auto& item : goods) {
        if (item.getId() == id) {
            ++item;
            break;
        }
}

void Shop::decreaseSize(int id) {
        for (auto& item : goods) {
            if (item.getId() == id) {
                --item;
                break;
            }

        }
    }
    void Shop::searchByTupe(std::string type) const {
        for (const auto& item : goods) {
            if (item.getType() == type) {
                std::cout << item << std::endl;
            }
    }
}

void Shop::sortByPrice() {
    std::sort(goods.begin(),goods.end());
}

void Shop::displayAll() const {
    for (const auto& item : goods) {
        std:: cout<< item<< std::endl;
    }
}
