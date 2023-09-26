#include "Dummy.hpp"

Dummy::~Dummy(){};

Dummy::Dummy():ATarget("Target Practice Dummy"){

};
ATarget * Dummy::clone() const
{
    return new Dummy;
}