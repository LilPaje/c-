/*The main goal of a Calculator for Scientific Operations is to do simple mathematical computations. 
It also executes a few difficult-to-solve trigonometric and logarithmic functions. The calculator 
will evaluate any mathematical equation entered using infix notation, which will then provide the 
result. In addition, it supports addition, subtraction, multiplication, and division in mathematics. 
This calculator allows keyboard entry. The C++ class is used to define the data of the Calculator and 
the various types of functions it can perform such as addition, subtraction, multiplication, division, 
and modulo. The project also uses classes that handle different exceptions when an illegal input is 
received or when an operation results in a singular value, such as an imaginary number. The 
technology used for this program was object-oriented programming which provided the flexibility 
necessary for the implementation of the various operations.

Technologies Required: C++ programming language, Data structures, and Algorithms, Math library in 
C++, and OOPS.*/

#include <iostream>
#include "calculator.h"

void Welcome(){
	std::cout << "╭━━━╮╱╱╭╮╱╱╱╱╱╱╭╮╱╱╱╭╮\n┃╭━╮┃╱╱┃┃╱╱╱╱╱╱┃┃╱╱╭╯╰╮\n┃┃╱╰╋━━┫┃╭━━┳╮╭┫┃╭━┻╮╭╋━━┳━╮\n┃┃╱╭┫╭╮┃┃┃╭━┫┃┃┃┃┃╭╮┃┃┃╭╮┃╭╯\n┃╰━╯┃╭╮┃╰┫╰━┫╰╯┃╰┫╭╮┃╰┫╰╯┃┃\n╰━━━┻╯╰┻━┻━━┻━━┻━┻╯╰┻━┻━━┻╯";

}

char CalculateAgain(){
	char tryAgain;
	
	std::cout << "Want to try another one?\n[1]Yes\n[2]No\nR: ";
	std::cin >> tryAgain;
	switch (tryAgain){
		case '1': return tryAgain;
			break;
		case '2': return tryAgain;
			break;
		
		default: std::cout << "Invalid input, try again.\n";
			return CalculateAgain();
			break;

		
	}
	return tryAgain;
}


void Menu(){
	Calculator calculator;
	char calculateAgain;
	int firstNum;
	char operation;
	int secondNum;
	Welcome();
	std::cout << "\n***Welcome to Cientific calculator!***" << std::endl;
	std::cout << "\nEnter the first number for the operation: ";
	std::cin >> firstNum; 
	std::cout << "\nEnter the operation: " << std::endl;
	std::cout << "[1] For SUM" << std::endl;
	std::cout << "[2] For SUBTRACTION" << std::endl;
	std::cout << "[3] For MULTIPLICATION" << std::endl;
	std::cout << "[4] For DIVISION" << std::endl;
	std::cout << "[5] For POW" << std::endl;
	std::cout << "[6] For Root" << std::endl;
	std::cout << "[0] For CANCEL" << std::endl;
	std::cout << "Your Choice: "; 
	std::cin >> operation;
	

	switch (operation){
		case '1': std::cout << "\nEnter the second number for the operation: ";
			std::cin >> secondNum; 
			std::cout << "Result: " << calculator.Sum(firstNum, secondNum) << std::endl;
			calculator.~Calculator();
			break; 

		case '2': std::cout << "\nEnter the second number for the operation: ";
			std::cin >> secondNum;  
			std::cout << "Result: " << calculator.Subtraction(firstNum, secondNum) << std::endl;
			calculator.~Calculator();
			break;

		case '3': std::cout << "\nEnter the second number for the operation: ";
			std::cin >> secondNum;  
			std::cout << "Result: " << calculator.Multiplication(firstNum, secondNum) << std::endl;
			calculator.~Calculator();
			break;

		case '4': std::cout << "\nEnter the second number for the operation: ";
			std::cin >> secondNum;  
			std::cout << "Result: " << calculator.Division(firstNum, secondNum) << std::endl;
			calculator.~Calculator();
			break;

		case '5': std::cout << "\nEnter the second number for the operation: ";
			std::cin >> secondNum;  
			std::cout << "Result: " << calculator.Pow(firstNum, secondNum) << std::endl;
			calculator.~Calculator();
			break;

		case '6': std::cout << "\nEnter the second number for the operation: ";
			std::cin >> secondNum;  
			std::cout << "Result: " << calculator.Root(firstNum, secondNum) << std::endl;
			calculator.~Calculator();
			break; 

		case '0': std::cout << "Canceling: " << std::endl;
			calculator.~Calculator();
			calculateAgain = CalculateAgain();
			if (calculateAgain == '1'){
				Menu();
			} else {
				std::cout << "Exiting the program" << std::endl;
			}
			
			break; 

		default: std::cout << "Invalid number, try again";
			calculator.~Calculator();
			Menu();
			break;


	}

}

int main(){
	Menu();
	

	return 0;
}

