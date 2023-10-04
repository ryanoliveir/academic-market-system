#include "Product.hpp"


Product::Product(std::string name, float price, int id):
    name(name),
    price(price),
    id(id)
{};


Product::Product(){};


std::string  Product::getName() const {
    return name;
};

float Product::getPrice() const {
    return price;
};


int Product::getId() const {
    return id;
};


