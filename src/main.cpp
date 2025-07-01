#include <iostream>
#include "Session.hpp"
#include <fstream>
int main(){
    Session session;
    session.set_date("01/07");
    session.set_rolls(2);

    session.set_insights("today i defended pretty good against a black belt");
    std::ofstream("sess.txt") << session.get_insights() << std::endl;
  
    return 0;
}