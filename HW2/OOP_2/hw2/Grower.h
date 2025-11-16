#ifndef GROWER_H
#define GROWER_H

#include "Person.h"
#include <vector>
#include <string>

class FlowersBouquet;
class Gardener;


using namespace std;

class Grower : public Person {
private:
    Gardener* gardener;
    std::string name;

public:
    Grower(std::string name, Gardener* gardener);
    FlowersBouquet* prepareOrder(std::vector<std::string> vec);
    Gardener* getGardener();
    string getName() override;
};
#endif // GROWER_H
