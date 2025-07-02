#pragma once
#include <string>
#include <vector>

class Positions
{
private:
    std::vector<std::string> positions;
    std::string position_description;

public:
    Positions(std::vector<std::string> positions, std::string position_description);
    void get_positions() const;
    std::string get_description() const;
};