#include <iostream>
#include <fstream>
#include <iterator>
#include "Session.hpp"
#include "File_header.hpp"

Session::Session(std::string date, std::vector<Position> positions, std::string insights, Rolls rolls):
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

    std::ofstream (filename)
    << File_header() << std::endl 
    <<"Date: " << Session::get_date() << std::endl 
    <<"Insights: "<< Session::get_insights() << std::endl
    <<"Rolls: "<< rolls.get_defences() << std::endl;

    // std::ofstream output_file("./positions.txt");
    // std::ostream_iterator<std::string> output_iterator(output_file, "\n");
    // std::copy(positions.get_positions().begin(), positions.get_positions().end(), output_iterator);

}