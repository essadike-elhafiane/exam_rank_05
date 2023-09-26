#include "ASpell.hpp"

ASpell::~ASpell(){}
ASpell::ASpell(std::string const& name, std::string const& effe): name(name), effects(effe)
{
    
}
std::string const& ASpell::getName() const{
    return name;
}
std::string const& ASpell::getEffects() const{
    return effects;
}

void ASpell::launch(ATarget const & AT) const
{
    AT.getHitBySpell(*this);
}