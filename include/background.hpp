#pragma once
#include "market.hpp"
#include <string>
#include <vector>


namespace Game {

    class Background {
        public:
        
            Background();

            std::vector<std::string> get_news() const;

            std::vector<std::string> get_meta_news() const;

            Market get_market() const;

            std::vector<std::string> get_events() const;

            std::string show_news() const;

            std::string show_event() const;
        
        private:
        std::vector<std::string> news;

        std::vector<std::string> meta_news;
        
        Market market;
        
        std::vector<std::string> events;
    };

}