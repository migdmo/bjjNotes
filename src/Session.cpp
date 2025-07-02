#include <iostream>

#include "Session.hpp"

Session::Session(std::string date,Positions positions, std::string insights, Rolls rolls):
    date(date),
    positions(positions),
    insights(insights),
    rolls(rolls)
{
}


std::string Session::get_date() const {
    return date;
}

std::string Session::get_insights() const {
    return insights;
}
