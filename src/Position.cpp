#include "Position.hpp"
#include <iostream>

Position::Position(std::string position, std::string position_description):
position(position),
position_description(position_description)
{

}

// std::vector<std::string> Positions::get_positions() const
// {
//     return positions;
// }
// std::string Positions::get_description() const
// {
//     return position_description;
// }

std::string Position::get_position() const {
    return position;
}

std::string Position::get_description() const{
    return position_description;
};