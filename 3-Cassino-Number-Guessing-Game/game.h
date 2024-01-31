class Game{
	public:
		Game(){
			std::cout << "╭━━━╮╱╱╱╱╱╱╱╱╱╱╱╱╱╭━╮╱╭╮╱╱╱╱╱╭╮╱╱╱╱╱╱╱╭━━━╮╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╭━━━╮\n┃╭━╮┃╱╱╱╱╱╱╱╱╱╱╱╱╱┃┃╰╮┃┃╱╱╱╱╱┃┃╱╱╱╱╱╱╱┃╭━╮┃╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱┃╭━╮┃\n┃┃╱╰╋━━┳━━┳┳━╮╭━━╮┃╭╮╰╯┣╮╭┳╮╭┫╰━┳━━┳━╮┃┃╱╰╋╮╭┳━━┳━━┳━━┳┳━╮╭━━╮┃┃╱╰╋━━┳╮╭┳━━╮\n┃┃╱╭┫╭╮┃━━╋┫╭╮┫╭╮┃┃┃╰╮┃┃┃┃┃╰╯┃╭╮┃┃━┫╭╯┃┃╭━┫┃┃┃┃━┫━━┫━━╋┫╭╮┫╭╮┃┃┃╭━┫╭╮┃╰╯┃┃━┫\n┃╰━╯┃╭╮┣━━┃┃┃┃┃╰╯┃┃┃╱┃┃┃╰╯┃┃┃┃╰╯┃┃━┫┃╱┃╰┻━┃╰╯┃┃━╋━━┣━━┃┃┃┃┃╰╯┃┃╰┻━┃╭╮┃┃┃┃┃━┫\n╰━━━┻╯╰┻━━┻┻╯╰┻━━╯╰╯╱╰━┻━━┻┻┻┻━━┻━━┻╯╱╰━━━┻━━┻━━┻━━┻━━┻┻╯╰┻━╮┃╰━━━┻╯╰┻┻┻┻━━╯\n╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╭━╯┃\n╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱/╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╰━━╯\n";
			int difficulty;
			difficulty = get_difficulty();
			guessing(get_pc_num(difficulty), get_user_guessing_number());
			
		}

	private: 	
		char get_difficulty(){
			char user_input;
			while(1){
				std::cout << "\n \n--Select the difficulty--";
				std::cout << "\n[1] Easy (1 to 10)\n[2]Medium 1 to 25\n[3]Hard (1 to 50): ";
				std::cout << "\nChoice: ";
				std::cin >> user_input;
				if(user_input == '1'){
					std::cout << "Selected: Easy" << std::endl;
					break;
				}
				else if (user_input == '2'){
					std::cout << "Selected: Medium" << std::endl;
					break;
				}
				else if (user_input == '3'){
					std::cout << "Selected: Hard" << std::endl;
					break;
				}
	
				else{
					std::cout << "Invalide Value, please try again" << std::endl;
					continue;
				}
			}
			return user_input;	
		}

		void guessing(int pc_num, int user_guessing_number){
			if (pc_num == user_guessing_number){
				std::cout << "Good Job! You Guessed the number!" << std::endl;
                         }
                         else{
 	                        std::cout << "Wrong number. Right number: " << pc_num << std::endl;
                         }
		}

		int get_pc_num(char difficulty){
			srand((unsigned) time(NULL));
			int random_num;
			int random = rand();
			if (difficulty == '1'){
				random_num = random%10;
			}
			else if (difficulty == '2'){
				random_num = random%25;
			}
			else{
				random_num = random%50;
			}
			return random_num + 1;
		}

		int get_user_guessing_number(){
			int user_number;
			std::cout <<  "Enter the guessed number: ";
			std::cin >> user_number;
			return user_number;	
	}

};
