#pragma once
#include "card.hpp"
#include <vector>




namespace Game {

class Hand{
public:
    Hand();

    std::vector<Card> get_cards() const;
    
    void draw(const Card& card);

    Card play(const Card& card);

private:
    std::vector<Card> cards;
};

}