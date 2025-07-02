#pragma once
#include <string>
#include <vector>
#include "Positions.hpp"
#include "Rolls.hpp"
class Session
{
private:
    std::string date;
    Positions positions;
    std::string insights;
    Rolls rolls;

public:
    Session(std::string date, Positions positions, std::string insights, int rolls, int passes, int defences);
    std::string get_date() const;
    std::string get_insights() const;
};