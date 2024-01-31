/*The guessing project in C++ is a game designed to test the player’s luck 
and knowledge. The player needs to guess a random number generated by the 
computer. If the player guesses right, they will win a certain amount of 
money. The winning prize depends on the difficulty of the game. The program 
implements classes, functions, and user-defined data types. It also uses 
other features such as loops and conditionals to create a logical structure. 
Furthermore, it makes use of the standard template library to implement 
basic operations and other data structures.*/

#include <iostream>
#include "game.h"

int main(){
	char continue_to_play;
	while(1){
		continue_to_play = ' ';
		Game game;
		while(1){

			std::cout << "Play Again?? \n[1] Yes\n[2]?"; 
			std::cin >> continue_to_play;
			if (continue_to_play == '1' | continue_to_play == '2'){
				break;
			} else{std::cout << "Invalid input, please try again" << std::endl; continue;}
		}
		if (continue_to_play == '1'){
			continue;
		} else {break;}
	}
	return 0;

}
