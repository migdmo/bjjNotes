#pragma once
#include <string>
#include <vector>
#include "Positions.hpp"
#include "Rolls.hpp"

class Session
{
private:
    std::string date;
    std::string insights;
    Positions positions;
    Rolls rolls;

public:
    Session(std::string date, Positions positions, std::string insights, Rolls rolls);
    std::string get_date() const;
    std::string get_insights() const;
};