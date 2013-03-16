#include<SFML/Graphics.hpp>
using namespace sf;
#include"Actors.hpp"
Actors::Actors()
{
    eship_texture.loadFromFile("Image_Eship.png");
    player.setSprite(eship_texture);
}

void Actors::spawnEships(void)
{
    if(enemies.size() < 10) {
        Eships temp(eship_texture);
        enemies.push_back(temp);
    }
}

std::list<Eships> Actors::getEnemies()
{
    return enemies;
}

Player Actors::getPlayer()
{
    return player;
}
