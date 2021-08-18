#include "column.hpp"

void Column::draw(sf::RenderWindow& window)
{
    //this is the first row and column.
    x = new Textbox(size, sp_1, "assets/arial.ttf", Type::Any);
    y = new Textbox(size, sp_2, "assets/arial.ttf", Type::Any);
    window.draw(*x);
    window.draw(*y);
    
}

void Column::listenforClick(sf::RenderWindow &window)
{
    x->listenForClick(window);
    y->listenForClick(window);
}

void Column::listenforText(sf::Event &event)
{
    x->listenForText(event);
    y->listenForText(event);
}

