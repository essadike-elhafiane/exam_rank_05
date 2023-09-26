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
    book.learnSpell(A);
}
void Warlock::forgetSpell(std::string name)
{
    book.forgetSpell(name);
}
void    Warlock::launchSpell(std::string name, ATarget const& AT)
{
    ASpell *tmp = book.createSpell(name);
    if (tmp)
        tmp->launch(AT);
}
