#ifndef TARGETGENEATOR_HPP
#define TARGETGENEATOR_HPP

#include "ATarget.hpp"
#include <map>
#include <string>
#include <iostream>

class ATarget;
class TargetGenerator
{
    private:
        std::map<std::string, ATarget*> book;
    public:
        TargetGenerator();
        TargetGenerator(TargetGenerator const & AS);
        TargetGenerator& operator = (TargetGenerator const & AS);
        ~TargetGenerator();
        void learnTargetType(ATarget* A);
        void forgetTargetType(std::string const &name);
        ATarget* createTarget(std::string const &name);
};

#endif