#include "Grower.h"
#include "Gardener.h"
#include "FlowersBouquet.h"
#include <iostream>
Grower::Grower(std::string name, Gardener* gardener) : Person(name), gardener(gardener)
{
}

FlowersBouquet* Grower::prepareOrder(std::vector<std::string> vec)
{
    string out = this->getName() + " forwards the request to " + this->getGardener()->getName() + ".";
    std::cout << out << std::endl;
    FlowersBouquet* flowers = this->getGardener()->prepareBouquet(vec);
    string final = this->getGardener()->getName() + " returns flowers to " + this->getName() + ".";
    std::cout << final << std::endl;
    return flowers;

}

Gardener* Grower::getGardener()
{
    return this->gardener;
}

string Grower::getName()
{
    return "Grower " + Person::getName();
}
