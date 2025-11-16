#include "Wholesaler.h"
#include "Grower.h"
#include "FlowersBouquet.h"
#include <iostream>


Wholesaler::Wholesaler(std::string name, Grower* grower) : Person(name), grower(grower)
{
}

FlowersBouquet* Wholesaler::acceptOrder(std::vector<std::string> vec)
{
    string out = this->getName() + " forwards request to " + grower->getName() + ".";
    std::cout << out << std::endl;
    FlowersBouquet* flowers = grower->prepareOrder(vec);
    string final = grower->getName() + " returns flowers to " + this->getName() + ".";
    std::cout << final << std::endl;
    return flowers;

}

string Wholesaler::getName()
{
    return "Wholesaler " + Person::getName();
}
