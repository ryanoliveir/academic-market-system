#include "CashierOperator.hpp"


CashierOperator::CashierOperator(std::string name, int id):
    name(name), id(id)
{}

CashierOperator::CashierOperator(){};





std::string CashierOperator::getName() const {
    return name;
}

int CashierOperator::getId() const {
    return id;
}


