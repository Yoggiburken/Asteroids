#include"Actors.hpp"
#ifndef WORLD_HPP
#define WORLD_HPP

class World {
    Actors           act;

    void             mechanics(void); //Collision and physics
    void             drawAll(RenderWindow &App); 

public:
    void             worldDo(RenderWindow &App); //Create next scene
};

#endif
