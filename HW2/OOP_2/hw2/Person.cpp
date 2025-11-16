#include "Person.h"
#include "Florist.h"
#include "FlowersBouquet.h"

#include <iostream>

Person::Person(std::string name) : name(name){}

void Person::orderFlowers(Florist* florist, Person* p, std::vector<std::string> vec)
{
    string out = this->name + " orders flowers to " + p->name + " from " + florist->getName() + ":";
    for (int i = 0; i < vec.size() - 1;i++) {
        out += " " + vec[i] + ",";
    }
    out += " " + vec[vec.size() - 1] + ".";
    std::cout << out << std::endl;
    florist->acceptOrder(p, vec);

}

void Person::acceptFlowers(FlowersBouquet* flowers)
{
    string out = this->name + " accepts the flowers:";
    vector<string> flower = flowers->getFlowers();
    for (int i = 0; i < flower.size() - 1;i++) {
        out += " " + flower[i] + ",";
    }
    out += " " + flower[flower.size() - 1] + ".";
    std::cout << out << std::endl;
    delete flowers;

}

string Person::getName()
{
    return this -> name;
}
