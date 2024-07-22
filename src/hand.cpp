#include "hand.hpp"
#include <stdexcept>
#include <algorithm>
#include <iterator>

namespace Game {

Hand::Hand() {}

std::vector<Card> Hand::get_cards() const {
    return cards;
}

void Hand::draw(const Card& card) {
    cards.emplace_back(card);
}

Card Hand::play(const Card& card) {
    auto it = std::find(std::begin(cards), std::end(cards), card);
    if (it != std::end(cards)) {
        cards.erase(it);
        return card;
    } else {
        throw std::out_of_range("can't find card");
    }
}

}