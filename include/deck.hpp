#pragma once
#include "card.hpp"
#include <vector>
#include <algorithm>
#include <random>




namespace Game {

class Deck {
public:
    /** @brief Constructor */
    Deck();

    /** @brief gets cards */
    std::vector<Card> get_cards() const;

    /** @brief shuffles deck */
    void shuffle_deck();

    /** @brief draws card from deck and erases it */
    Card draw_card();

    /** @brief inserts Card into deck */
    void insert_card(const Card& card);

private:
    std::vector<Card> cards;
    std::mt19937 gen;
};

}