#include "player.hpp"
#include <algorithm>



namespace Game {

    Player::Player() {}

    Hand Player::get_hand() const {
        return hand;
    }

    Effects Player::get_effects() const {
        return effects;
    }

    Resources Player::get_resources() const {
        return resources;
    }

    void Player::add_effect(const Effect& effect) {
        effects.emplace_back(effect);
    }

    void Player::remove_effect(const Effect& effect) {
        effects.erase(std::remove(effects.begin(), effects.end(), effect));
    }

    int Player::set_money(int amount) {
        resources.money += amount;
    }

    int Player::set_income(int amount) {
        resources.income += amount;
    }

    int Player::set_stability(int amount) {
        resources.stability += amount;
    }

    int Player::set_expenses(int amount) {
        resources.expenses += amount;
    }

}