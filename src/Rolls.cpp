#include "Rolls.hpp"

Rolls::Rolls(int rolls, int passes, int defences) : rolls(rolls),
                                                    passes(passes),
                                                    defences(defences)
{
}

int Rolls::get_rolls() const
{
    return rolls;
}
int Rolls::get_passes() const
{
    return passes;
}
int Rolls::get_defences() const
{
    return defences;
}