/*Stone Paper Scissor or Rock Paper Scissor is a game that is played between two people, 
Each player in this game forms one of three shapes. The winner will be decided as per the 
given rules:

    Rock vs Scissor -> Rock wins
    Rock vs Paper -> Paper wins
    Paper vs Scissor -> Scissor wins

In this game, the user is asked to make choices based on both computer and user choices 
and the results are displayed showing both computer and user choices.*/

#include <iostream>

char get_rock_paper_or_scissor(int random){
	if (random == 0){
		std::cout << "PC Choice: 'r'\n";
		return 'r';
	}

	else if (random == 1){
		std::cout << "PC Choice: 'p'\n";
		return 'p';
	}

	else{
		std::cout << "PC Choice: 's'\n";
		return 's';
	}

}

void game_result(char user_choice, int random){
	//0 = draw; 1 = user win; 2 = game win
	char game_choice = get_rock_paper_or_scissor(random);
	if (game_choice == 'r' and user_choice == 'r'){std::cout << "Draw!\n";}
	else if (game_choice == 'r' and user_choice == 'p'){std::cout << "User Win!\n";}
	else if (game_choice == 'r' and user_choice == 's'){std::cout << "PC Win!\n";}

	else if (game_choice == 'p' and user_choice == 'p'){std::cout << "Draw!\n";}
	else if (game_choice == 'p' and user_choice == 's'){std::cout << "User Win!\n";}
	else if (game_choice == 'p' and user_choice == 'r'){std::cout << "PC Win!\n";}

	else if (game_choice == 's' and user_choice == 's'){std::cout << "Draw!\n";}
	else if (game_choice == 's' and user_choice == 'r'){std::cout << "User Win!\n";}
	else {std::cout << "PC Win\n";}
}

int main(){
	int c = 1;
	char user_choice;
	char play_again;
	int result;
	while(c){
		std::cout << "Select one Between Rock (r), Paper(p) and Scissor(s): ";
		std::cin >> user_choice;
		if(user_choice != 'r' and user_choice != 'p' and user_choice != 's'){std::cout << "Invalid value, please, try again \n";continue;}
		
		srand(time(NULL));
		int random = rand() % 3;
		game_result(user_choice, random);

		while(c){
			std::cout << "Play Again?"; 
			std::cin >> play_again;
			if (play_again == '0'){c = 0;break;}
			if (play_again == '1'){c = 1;break;}
			else {std::cout << "Invalid value, please, try gain\n";continue;}
		}

	}
	return 0;
}
