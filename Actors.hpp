#include"Debree.hpp"
#include"Eships.hpp"
#include"Player.hpp"
#include<list>
#ifndef ACTORS_HPP
#define ACTORS_HPP

class Actors {    
    std::list<Eships>       enemies;
    std::list<Debree>       floaters;
    Player                  player;
    Texture                 eship_texture;
    Sprite                  eship_sprite;
public:
    Actors();
    void                    spawnEships(void);
    std::list<Eships>       getEnemies();
    Player                  getPlayer();
};

#endif
