#include "card.hpp"
#include <gtest/gtest.h>




namespace Game {

TEST(cardTest, cardInit) {
    Type type("test", "test")
    Card card("test", 1, "test", type);

    EXPECT_EQ(card.get_name(), "test");
    EXPECT_EQ(card.get_cost(), 1);
    EXPECT_EQ(card.get_message(), "test");
    EXPECT_EQ(card.get_type().name, "test");
    EXPECT_EQ(card.get_type().message, "test");
}

TEST(deckTest, deckInit) {
    Deck deck;
    Card card1("test", 1, "test", type);
    Card card2("test", 1, "test", type);
    Card card3("test", 1, "test", type);
    
    deck.insert_card(card1);
    deck.insert_card(card2);
    deck.insert_card(card3);    
    
    EXPECT_EQ(deck.get_cards().size(), 3);
    
    auto before = deck.get_cards();
    deck.shuffle_deck();
    auto after = deck.get_cards();

    EXPECT_NE(before, after);
}

}