#include<SFML/Graphics.hpp>
using namespace sf;
#include"Player.hpp"


void Player::setSprite(Texture &temp)
{
    playership.setTexture(temp);
}
