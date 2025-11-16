#pragma once

#ifndef PERSON_H
#define PERSON_H
#include <iostream>

#include "FlowersBouquet.h"
using namespace std;
class Florist;

class Person {

public:

    Person(std::string name);
    void orderFlowers(Florist* florist, Person* p, std::vector<std::string> vec);
    void acceptFlowers(FlowersBouquet* flowers);
    virtual string getName();

private:

    std::string name;

}
;
#endif /* PERSON_H */
