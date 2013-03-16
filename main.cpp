#include<SFML/Graphics.hpp>
using namespace sf;
#include"World.hpp"
int main()
{
    RenderWindow App(VideoMode(1200, 800, 32), "SPACE!");
    Event event;
    World world;
    RectangleShape shape;
    while(App.isOpen())
    {
        while(App.pollEvent(event))
        {
            if(event.type == Event::Closed  ||  Keyboard::isKeyPressed(Keyboard::Escape)){
                App.close();
            }
        }

        App.clear(Color::White);
        world.worldDo(App);
        App.display();
    }
}
