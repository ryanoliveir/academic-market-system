#pragma once
#include <string>

class Product {
    private: 
        std::string name;
        float price;
        int id;
    
    public:
        Product();
        Product(std::string name, float price, int id);

        std::string getName() const;
        float getPrice() const;
        int getId() const;
};

