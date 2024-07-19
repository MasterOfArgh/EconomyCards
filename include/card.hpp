#pragma once 
#include <string>




namespace Game {

/**@brief holds card type */
struct Type {
public:
    std::string name;
    std::string message;

    Type(const std::string& name, const std::string& message) : name(name), message(message) {}
};

class Card {
public:
    /** @brief Constructor*/
    Card(const std::string& name, double cost, const std::string& message, const Type& type);

    /** @brief gets name */
    std::string get_name() const;

    /** @brief gets cost */
    double get_cost() const;

    /** @brief gets message */
    std::string get_message() const;

    /** @brief gets type */
    Type get_type() const;

private:
    std::string name;
    
    double cost;
    
    std::string message;

    Type type;
};

}