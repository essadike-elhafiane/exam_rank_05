#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP
#include <string>
#include <iostream>
#include "ASpell.hpp"
#include <map>

class ASpell;
class SpellBook
{
    private:
        std::map<std::string, ASpell*> book;
    public:
        SpellBook();
        SpellBook(SpellBook const & AS);
        SpellBook& operator = (SpellBook const & AS);
        ~SpellBook();
        void learnSpell(ASpell* A);
        void forgetSpell(std::string const &name);
        ASpell* createSpell(std::string const &name);
};

#endif