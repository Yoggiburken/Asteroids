#include"Force.hpp"
#include"Velocity.hpp"

#ifndef PLAYER_HPP
#define PLAYER_HPP

class Player {
    Force                   thrust;
    Force                   total;
    Velocity                velocity;
public:
    Sprite                  playership;
    void                    setSprite(Texture&);
    void                    movement();
};

#endif
