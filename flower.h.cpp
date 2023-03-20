#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;

class flower {
private:
	int xpos;
	int ypos;
	int color[3];

	sf::CircleShape petal;
	sf::RectangleShape stem;
	sf::CircleShape middle;

public:

	flower(int x, int y, int c[3]);
	void draw(sf::RenderWindow& window);



};
