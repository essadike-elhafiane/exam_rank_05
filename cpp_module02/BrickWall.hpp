#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP


#include <string>
#include <iostream>
#include "ATarget.hpp"

class ATarget;
class BrickWall : public ATarget
{
    public:
        virtual ~BrickWall();
        BrickWall();
        virtual  ATarget * clone() const;
};
#endif