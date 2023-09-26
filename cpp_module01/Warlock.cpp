#include "Warlock.hpp"

Warlock::~Warlock(){
    std::cout << name << ": My job here is done!" << std::endl;
};
std::string const & Warlock::getName() const
{
    return name;
}
std::string const & Warlock::getTitle() const
{
    return title;
}
void Warlock::setTitle(std::string const & title) 
{
    this->title = title; 
}
Warlock::Warlock(std::string const & name, std::string const & title):name(name), title(title)
{
    std::cout << name << ": This looks like another boring day." << std::endl;
}
void Warlock::introduce() const
{
    std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

Warlock::Warlock(){};


void Warlock::learnSpell(ASpell *A)
{
    m[A->getName()] = A->clone();
}
void Warlock::forgetSpell(std::string name)
{
    m.erase(name);
}
void    Warlock::launchSpell(std::string name, ATarget const& AT)
{
    std::map<std::string, ASpell*>::iterator itr = m.find(name);
    if (itr != m.end())
        itr->second->launch(AT);
}