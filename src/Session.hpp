#pragma once
#include <string>
#include <vector>
#include "Positions.hpp"
class Session
{
private:
    std::string date;
    Positions positions;
    std::string insights;
    int rolls, passes, defences;
    
public:
    Session(std::string date, Positions positions, std::string insights, int rolls, int passes, int defences);
    std::string get_date() const;
    std::string get_insights() const ;
    int get_rolls() const;
    int get_passes() const ;
    int get_defences() const ;
};