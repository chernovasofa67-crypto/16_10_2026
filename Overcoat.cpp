//
// Created by Евгения on 16.10.2026.
//

#include "Overcoat.h"

int Overcoat::counter = 0;

Overcoat::Overcoat() {
    name = "Unknown";
    type ="Unknown";
    size = 0;
    price = 0.0;
    id = ++counter;
}
Overcoat::Overcoat(std::string n, std::string t, int s, double p) {
    name = n;
    type = t;
    size = s;
    price = p;
    id = ++counter;
}

std::string Overcoat::getName() const {
    return name;
}

std::string Overcoat::getType() const {
    return  type;
}

int Overcoat::getSize() const {
    return  size;
}

double Overcoat::getPrice() const {
    return price;
}

int Overcoat::getId() {
    return id;
}


void Overcoat::setName(std::string n) {
    name = n;
}
void Overcoat::setType(std::string t) {
    type = t;
}

void Overcoat::setSize(int s) {
    size = s;
}
void Overcoat::setPrice(double p) {
    price = p;
}

}



bool Overcoat::operator==(const Overcoat &other) const {
    return  this->type == other.type ;
}

bool Overcoat::operator!=(const Overcoat &other) const {
    return  this->type != other.type ;
}

bool Overcoat::operator<(const Overcoat &other) const {
    return  this->type < other.type ;
}

bool Overcoat::operator<=(const Overcoat &other) const {
    return  this->type <= other.type ;
}

bool Overcoat::operator>(const Overcoat &other) const {
    return  this->type > other.type ;
}

bool Overcoat::operator>=(const Overcoat &other) const {
    return  this->type >= other.type ;
}

Overcoat & Overcoat::operator++() {
    this->size++;
    return *this;
}

Overcoat Overcoat::operator++(int) {
    Overcoat temp = *this;
    this->size++;
    return temp;
}

Overcoat & Overcoat::operator--() {
    if (this->size > 0) this->size--;
    return *this;
}

Overcoat Overcoat::operator--(int) {
    Overcoat temp = *this;
    if (this->size > 0) this->size--;
    return temp;
}

std::ostream & operator<<(std::ostream &os, const Overcoat &obj) {
    os << "ID: " << obj.id << " | " << obj.name << " (" << obj.type
      << ") | Розмір: " << obj.size << " | Ціна: " << obj.price << " грн";
    return os;
}

std::ostream & operator<<(std::istream is, Overcoat &obj) {
    std::cout << "Назва: ";
    is >> obj.name;
    std::cout << "Тип (чоловічий/жіночий/дитячий): ";
    is >> obj.type;
    std::cout << "Розмір: ";
    is >> obj.size;
    std::cout << "Ціна: ";
    is >> obj.price;
    return is;
}
