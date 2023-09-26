#include "SpellBook.hpp"

SpellBook::SpellBook(){}
SpellBook::SpellBook(SpellBook const & AS):book(AS.book){}

SpellBook& SpellBook::operator = (SpellBook const & AS)
{
    book = AS.book;
    return *this;
}
SpellBook::~SpellBook(){};

void SpellBook::learnSpell(ASpell* A)
{
    book[A->getName()] = A->clone();
}
void SpellBook::forgetSpell(std::string const &name)
{
    book.erase(name);
}
ASpell* SpellBook::createSpell(std::string const &name)
{
    std::map<std::string, ASpell*>::iterator itr = book.find(name);
    if (itr != book.end())
        return itr->second;
    return NULL;
}