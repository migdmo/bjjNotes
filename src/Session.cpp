#include <iostream>

#include "Session.hpp"

Session::Session(std::string date, std::vector<std::string> positions, std::string insights, int rolls, int passes, int defences):
    date(date),
    positions(positions),
    insights(insights),
    rolls(rolls),
    passes(passes),
    defences(defences)
{
}

void Session::get_positions() const
{
    for (int i = 0; i < positions.size(); i++)
    {
        std::cout << positions[i] << std::endl;
    }
}

std::string Session::get_date() const {
    return date;
}
std::string Session::get_description() const {
    return position_description;
}
std::string Session::get_insights() const {
    return insights;
}
int Session::get_rolls() const {
    return rolls;
}
int Session::get_passes() const {
    return passes;
}
int Session::get_defences() const{
    return defences;
}