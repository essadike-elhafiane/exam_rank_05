#ifndef ASPELL_HPP
#define ASPELL_HPP


#include <string>
#include <iostream>
#include "ATarget.hpp"

class ATarget;
class ASpell
{
    protected:
        std::string name;
        std::string effects;
    
    public:
        virtual ~ASpell();
        ASpell(std::string const& name, std::string const& effe);
        std::string const& getName() const;
        std::string const& getEffects() const;
        virtual ASpell * clone() const = 0;
        void launch(ATarget const & AT) const;
};
#endif