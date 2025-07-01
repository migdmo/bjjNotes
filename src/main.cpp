#include <iostream>
#include "Session.hpp"

int main(){
    Session session;
    session.set_position("half guard pass");
    
    session.get_positions();
    return 0;
}