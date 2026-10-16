//
// Created by Евгения on 16.10.2026.
//

#ifndef INC_16_10_2026_OVERCOAT_H
#define INC_16_10_2026_OVERCOAT_H

#include <iostream>
#include <string>
class Overcoat {
private:
    std::string name;
    std::string type;
    int size;
    double price;
    int id;
    static int counter;
public:
    Overcoat();
    Overcoat(std::string n, std::string t, int s, double p);
    std::string getName() const;
    std::string getType() const;
    int getSize() const;
    double getPrice() const;
    int getId();

    void setName(std::string n);
    void setType(std::string t);
    void setSize(int s);
    void setPrice(double p);

    bool operator ==(const Overcoat& other) const;
    bool operator !=(const Overcoat& other) const;
    bool operator <(const Overcoat& other) const;
    bool operator <=(const Overcoat& other) const;
    bool operator >(const Overcoat& other) const;
    bool operator >=(const Overcoat& other) const;

    Overcoat& operator++();
    Overcoat operator++(int);
    Overcoat& operator--();
    Overcoat  operator--(int);

    friend  std::ostream& operator<<(std::ostream& os, const Overcoat& obj);
    friend  std::ostream& operator<<(std::istream is,  Overcoat& obj);

};


#endif //INC_16_10_2026_OVERCOAT_H
