#pragma once

class Rolls
{
private:
    int rolls;
    int passes;
    int defences;
public:
    Rolls(int rolls, int passes, int defences);
    int get_rolls() const;
    int get_passes() const ;
    int get_defences() const ;
};
