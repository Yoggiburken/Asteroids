#include<SFML/Graphics.hpp>
using namespace sf;
#include"World.hpp"

void World::drawAll(RenderWindow &App)
{
    std::list<Eships>enemies( act.getEnemies());
    for( std::list<Eships>::iterator it = enemies.begin(); it != enemies.end(); it++) {
        App.draw(it->eship_sprite);
    }
    
    App.draw(act.getPlayer().playership);

}

void World::worldDo(RenderWindow &App)
{
    drawAll(App);
    act.spawnEships();
}
