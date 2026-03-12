#pragma once
#include <string>
using namespace std;
class CompactSystem {
public:
    std::string getBIOSInfo();        // BIOS Name + Version
    std::string getMotherboardInfo(); // Motherboard Model
};
