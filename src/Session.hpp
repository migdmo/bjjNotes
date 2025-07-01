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
    void set_date(std::string session_date);
    void set_position(std::string position);
    void set_description(std::string description);
    void set_insights(std::string session_insights);
    void set_rolls(int session_rolls);
    void set_passes(int session_passes);
    void set_defences(int session_defences);

    void get_positions();
};