#include <iostream>

#include "Session.hpp"

void Session::set_date(std::string session_date)
{
    date = session_date;
}

void Session::set_position(std::string session_position)
{
    positions.push_back(session_position);
}

void Session::set_description(std::string description)
{
    position_description = description;
}

void Session::set_insights(std::string session_insights)
{
    insights = session_insights;
}
void Session::set_rolls(int session_rolls)
{
    rolls = session_rolls;
}
void Session::set_passes(int session_passes)
{
    passes = session_passes;
}
void Session::set_defences(int session_defences)
{
    defences = session_defences;
}

void Session::get_positions()
{
    for (int i = 0; i < positions.size(); i++)
    {
        std::cout << positions[i] << std::endl;
    }
}

std::string Session::get_date(){
    return date;
}
std::string Session::get_description(){
    return position_description;
}
std::string Session::get_insights(){
    return insights;
}
int Session::get_rolls(){
    return rolls;
}
int Session::get_passes(){
    return passes;
}
int Session::get_defences(){
    return defences;
}