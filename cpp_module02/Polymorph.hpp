#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP


#include <string>
#include <iostream>
#include "ASpell.hpp"

class ASpell;
class Polymorph : public ASpell
{
    public:
        virtual ~Polymorph();
        Polymorph();
        virtual ASpell * clone() const;
};
#endif