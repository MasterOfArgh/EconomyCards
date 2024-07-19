#include "card.hpp"




namespace Game {

Card::Card(const std::string& name, double cost, const std::string& message, const Type& type) : name(name), cost(cost), message(message), type(type) {}

std::string Card::get_name() const {
    return name;
}

double Card::get_cost() const {
    return cost;
}

std::string Card::get_message() const {
    return message;
} 

Type Card::get_type() const {
    return type;
}

}