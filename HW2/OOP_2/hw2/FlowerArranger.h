#ifndef FLOWERARRANGER_H
#define FLOWERARRANGER_H

#include "FlowersBouquet.h"
#include "Person.h"
using namespace std;
class FlowersBouquet;

class FlowerArranger : public Person{
public:
    FlowerArranger(std::string name);
    void arrangeFlowers(FlowersBouquet* flowers);
    string getName() override;
private:
    string name;

};
#endif // FLOWERARRANGER_H
