#include "Session.hpp"
#include "File_header.hpp"
#include <fstream>
#include <iostream>
using namespace std;
vector<string> func1(vector<string> foo)
{
    return vector<string>(foo.begin(), foo.end());
}

// std::string date;
// std::string insights;
// std::vector<Position> positions;
// Rolls rolls;
void add_position(vector<Position> &positions, string postion_name, string position_description)
{
    Position position(postion_name, position_description);
    positions.push_back(position);
}
int main()

{

    // string date, insights;
    // int rolls, passes, defences, op = 0;
    int op = 0;
    vector<Position> positions;

    // cout << "date: ";
    // cin >> date;

    // cout << "insights: ";
    // cin >> insights;

    // do-while to get positions
    while (op == 0)
    {

        string position_name;
        string position_description;

        cout << "Position name: ";
        cin >> position_name;

        cout << "Postion description: ";
        cin >> position_description;

        add_position(positions, position_name, position_description);

        cout << "[1] to stop, [0] to continue: ";
        cin >> op;
    }

    for (int i = 0; i < positions.size(); i++)
    {
        cout << positions[i].get_position() << endl
             << positions[i].get_position();
    }


    return 0;
}
