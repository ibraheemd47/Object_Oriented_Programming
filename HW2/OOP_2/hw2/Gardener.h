#ifndef GARDENER_H
#define GARDENER_H

#include "Person.h"
#include <vector>
#include <string>
using namespace std;
class FlowersBouquet;

class Gardener : public Person {
public:
    Gardener(std::string name);
    FlowersBouquet* prepareBouquet(std::vector <std::string> vec);
     string getName() override;
private:
    std::string name;
};
#endif // GARDENER_H
