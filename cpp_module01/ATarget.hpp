#ifndef ATARGET_HPP
#define ATARGET_HPP


#include <string>
#include <iostream>
#include "ASpell.hpp"

class ASpell;
class ATarget
{
    protected:
        std::string type;
    
    public:
        virtual ~ATarget();
        ATarget(std::string const& type);
        std::string const& getType() const;
        void getHitBySpell(ASpell const &A) const;
        virtual ATarget * clone() const = 0;
};
#endif