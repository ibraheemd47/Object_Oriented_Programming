#ifndef WHOLESALER_H
#define WHOLESALER_H

#include "Person.h"
#include <vector>
#include <string>

class FlowersBouquet;
class Grower;

using namespace std;
class Wholesaler : public Person {
private:
    Grower* grower;
    std::string name;
public:
    Wholesaler(std::string name, Grower* grower);
    FlowersBouquet* acceptOrder(std::vector<std::string> vec); //return  grower.prepareOrder(vec);
    string getName() override;
};
#endif // WHOLESALER_H
