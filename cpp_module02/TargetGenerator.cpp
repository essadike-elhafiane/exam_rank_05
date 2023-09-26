#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){};
TargetGenerator::TargetGenerator(TargetGenerator const & AS):book(AS.book){

};
TargetGenerator& TargetGenerator::operator = (TargetGenerator const & AS)
{
    book = AS.book;
    return *this;
}
TargetGenerator::~TargetGenerator(){};
void TargetGenerator::learnTargetType(ATarget* A)
{
    book[A->getType()] = A->clone();
}
void TargetGenerator::forgetTargetType(std::string const &name)
{
    book.erase(name);
}
ATarget* TargetGenerator::createTarget(std::string const &name)
{   
    std::map<std::string, ATarget*>::iterator itr = book.find(name);
    if (itr != book.end())
        return itr->second;
    return NULL;
}