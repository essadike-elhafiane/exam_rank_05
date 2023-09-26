#ifndef FWOOSH_HPP
#define FWOOSH_HPP


#include <string>
#include <iostream>
#include "ASpell.hpp"

class ASpell;
class Fwoosh : public ASpell
{
    public:
        virtual ~Fwoosh();
        Fwoosh();
        virtual Fwoosh * clone() const;
};
#endif