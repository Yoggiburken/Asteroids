#include"Force.hpp"
#include"Velocity.hpp"

#ifndef ESHIPS_HPP
#define ESHIPS_HPP

class Eships {
    Force                   thrust;
    Velocity                speed;
public:
    Eships(Texture&);
    Sprite                  eship_sprite;
    void                    velocityChange(); 
};

#endif
