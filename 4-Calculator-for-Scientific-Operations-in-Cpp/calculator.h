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

#include <cmath>

class Calculator{

	

	public:

		float Sum(float firstNumber, float secondNumber){

			return firstNumber + secondNumber;
		}

		float Subtraction(float firstNumber, float secondNumber){

			return firstNumber - secondNumber;
		}

		float Multiplication(float firstNumber, float secondNumber){

			return firstNumber * secondNumber;
		}

		float Division(float firstNumber, float secondNumber){

			return firstNumber / secondNumber;
		}	

		float Pow(float base, float exponent ){

			return pow(base, exponent);
		}
		float Root(float base, float exponent){

			return pow(base, 1/exponent);
		}

		/*void SetFirstNumber(){

		}

		void SetSecondtNumber(){

		}

		void SetOperation(){

		}

		~Calculator(){

		};*/


};