#pragma once
#include <string>
#include <vector>

class Session
{
private:
    std::string date;
    std::vector<std::string> positions;
    std::string position_description;
    std::string insights;
    int rolls, passes, defences;
    
public:
    Session(std::string date, std::vector<std::string> positions, std::string insights, int rolls, int passes, int defences);
    void get_positions() const;
    std::string get_date() const;
    std::string get_description() const;
    std::string get_insights() const ;
    int get_rolls() const;
    int get_passes() const ;
    int get_defences() const ;
};