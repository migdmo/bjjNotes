#include "Positions.hpp"
#include <iostream>
Positions::Positions(std::vector<std::string> positions, std::string position_description):
positions(positions),
position_description(position_description)
{}

void Positions::get_positions() const
{
    for (int i = 0; i < positions.size(); i++)
    {
        std::cout << positions[i] << std::endl;
    }
}
std::string Positions::get_description() const
{
    return position_description;
}