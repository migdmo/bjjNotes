#pragma once
#include <string>
#include <vector>
#include "Position.hpp"
#include "Rolls.hpp"

class Session
{
private:
    std::string date;
    std::string insights;
    std::vector<Position> positions;
    Rolls rolls;


public:
    Session(std::string date, std::vector<Position> positions, std::string insights, Rolls rolls);
    std::string get_date() const;
    std::string get_insights() const;
    void create_file();
};