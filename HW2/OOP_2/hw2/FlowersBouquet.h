#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class FlowersBouquet {
private:
    std::vector<std::string> bouquet;
    bool isArranged;
public:
    FlowersBouquet(std::vector<std::string> vec);
    void arrange();
    std::string toString();
    std::vector<std::string> getFlowers();

};