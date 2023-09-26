#include "Fireball.hpp"

Fireball::~Fireball(){};


Fireball::Fireball():ASpell("Fireball", "burnt to a crisp"){}


ASpell * Fireball::clone() const
{
    return new Fireball;
}