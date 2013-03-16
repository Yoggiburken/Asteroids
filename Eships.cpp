#include<SFML/Graphics.hpp>
using namespace sf;
#include"Eships.hpp"

Eships::Eships(Texture &temp)
{
    eship_sprite.setTexture(temp);        
    eship_sprite.setPosition(100,100);
}
