#include "deck.hpp"
#include <stdexcept>



namespace Game {

Deck::Deck() : gen(std::random_device{}()) {}

std::vector<Card> Deck::get_cards() const {
    return cards;
}

void Deck::shuffle_deck() {
    std::shuffle(cards.begin(), cards.end(), gen);
}
Card Deck::draw_card() {
    /** @brief throws error if deck is empty */
    if (cards.empty()) {
        throw std::out_of_range("No cards left in deck");
    }
    Card card = cards.front();
    cards.erase(cards.begin());
    return card;
}

void Deck::insert_card(const Card& card) {
    cards.emplace_back(card);
} 

}