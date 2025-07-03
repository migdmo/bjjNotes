#include <iostream>
#include <fstream>

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

void Session::create_file(){
    std::string filename;
    std::cout << "file name: " << std::endl;
    std::cin >> filename;

    std::ofstream(filename) 
    <<"Date: " << Session::get_date() << std::endl 
    <<"Postions: " << positions.get_description() << std::endl
    <<"Insights: "<< Session::get_insights() << std::endl
    <<"Rolls: "<< rolls.get_defences() << std::endl;
}