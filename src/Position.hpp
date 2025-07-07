#pragma once
#include <string>
#include <vector>

class Position
{
private:
    std::string position;
    std::string position_description;

public:
    Position(std::string position, std::string position_description);
    std::string get_position() const;
    std::string get_description() const;
};