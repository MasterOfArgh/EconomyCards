#pragma once
#include "hand.hpp"




namespace Game {

struct Effect {
    public:
    std::string name;
    int value;

    bool operator==(const Effect& other) const {
        return name == other.name;
    }
};

using Effects = std::vector<Effect>;

struct Resources {
    public:
    int money;
    int income;
    int stability;
    int expenses;
    std::vector<int> shares;

    Resources(int money = 0, int income = 0, int stability = 0, int expenses = 0) 
    : money(money), income(income), stability(stability), expenses(expenses) {}
};

class Player {
public:
    Player(const std::string& name);

    std::string get_name() const;

    Hand get_hand() const;

    Effects get_effects() const;

    Resources get_resources() const;

    void add_effect(const Effect& effect);

    void remove_effect(const Effect& effect);

    int set_money(int amount);

    int set_income(int amount);

    int set_stability(int amount);

    int set_expenses(int amount);
private:
    std::string name;
    Hand hand;
    Resources resources;
    Effects effects;
};

}