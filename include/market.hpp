#pragma once
#include <string>
#include <vector>
#include <random>


namespace Game {

    struct Stock {
        public:
        std::string name;
        double price;
        double drift;
        double volatility;

        Stock(const std::string& name, double price, double drift, double volatility)
        : name(name), price(price), drift(drift), volatility(volatility) {}
    };
    
    class Market {
        public:
            Market();

            std::vector<Stock> get_market() const;
            
            void update_stock();

            void add_stock();
        private:
            std::vector<Stock> market;
            std::mt19937 gen;
            std::uniform_real_distribution<> dis;
    };

}