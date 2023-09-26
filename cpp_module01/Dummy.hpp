#ifndef DUMMY_HPP
#define DUMMY_HPP


#include <string>
#include <iostream>
#include "ATarget.hpp"

class ATarget;
class Dummy : public ATarget
{
    public:
        virtual ~Dummy();
        Dummy();
        virtual ATarget * clone() const;
};
#endif