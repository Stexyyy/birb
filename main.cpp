#include<SFML/Graphics.hpp>
#include "birb.h"
#include <iostream>
using namespace std;



int main() {
	srand(time(NULL));


	//this next line is an array. Arrays are a lot like python lists.
	int birbColor[] = { 255, 200, 200 }; //set up an array of colors to make your birb PINK!
	int birbColor2[] = { 255, 0, 200 }; //set up an array of colors to make your birb PINK!
	birbColor2[1] = 80;


	birb Alex(200, 200, birbColor); //instantiate 1 birb
	birb Ballin(400, 400, birbColor2);
	birb Denji(400, 200, birbColor);
	birb Aki(200, 600, birbColor);
	birb Power(600, 400, birbColor);
	birb Asa(300, 500, birbColor);

	sf::RenderWindow window(sf::VideoMode(800, 800), "Happy Spring!"); //set up game window



	while (1) {//GAME LOOP OMG
		window.clear();
		

		Alex.draw(window);
		Ballin.draw(window);
		Denji.draw(window);
		Aki.draw(window);
		Power.draw(window);
		Asa.draw(window);
		Alex.fly();
		Ballin.fly();
		Denji.fly();
		Aki.fly();
		Power.fly();
		Asa.fly();
		window.display();

	}



}




