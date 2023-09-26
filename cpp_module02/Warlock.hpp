#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <string>
#include <iostream>
#include "ASpell.hpp"
#include <map>
#include "ATarget.hpp"
#include "SpellBook.hpp"


class Warlock
{
    
    private: 
        std::string name;
        std::string title;
        Warlock();
        std::map<std::string, ASpell*> m;
        SpellBook book;
    public:
        ~Warlock();
        std::string const & getName() const;
        std::string const & getTitle() const;
        void setTitle(std::string const & title) ;
        Warlock(std::string const & name, std::string const & title);
        void introduce() const;
        void learnSpell(ASpell *A);
        void forgetSpell(std::string name);
        void    launchSpell(std::string name, ATarget const& AT);
};

#endif