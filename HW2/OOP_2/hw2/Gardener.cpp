#include "Gardener.h"
#include "FlowersBouquet.h"
#include <iostream>

Gardener::Gardener(std::string name) : Person(name)
{
}

FlowersBouquet* Gardener::prepareBouquet(std::vector<std::string> vec)
{
    string out = this->getName() + " prepares flowers.";
    std::cout << out << std::endl;
    return new FlowersBouquet(vec);
}

string Gardener::getName()
{
    return "Gardener " + Person::getName();
}
