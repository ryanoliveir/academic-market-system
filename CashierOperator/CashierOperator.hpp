#pragma once
#include <string>

class CashierOperator {
    private: 
        std::string name;
        int id;
    
    public:
        CashierOperator();
        CashierOperator(std::string name, int id);
        std::string getName() const;
        int getId() const;
};

