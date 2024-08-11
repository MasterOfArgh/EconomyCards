#include "background.hpp"




namespace Game {

    Background::Background() {
        news = {
            ""
        };
    }

    std::vector<std::string> Background::get_news() const {
            return news;
    }

    std::vector<std::string> Background::get_meta_news() const {
            return meta_news;
    }

    Market Background::get_market() const {
        return market;
    }

    std::vector<std::string> Background::get_events() const {
        return events;
    }

    std::string Background::show_news() const {
        
    }

}