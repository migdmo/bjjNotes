#include <iostream>

#include "Session.hpp"

Session::Session(std::string date,Positions positions, std::string insights, int rolls, int passes, int defences):
    date(date),
    positions(positions),
    insights(insights),
    rolls(rolls),
    passes(passes),
    defences(defences)
{
}


std::string Session::get_date() const {
    return date;
}

std::string Session::get_insights() const {
    return insights;
}
