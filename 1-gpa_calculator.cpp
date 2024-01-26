/*A student’s cumulative grade point average (CGPA) can be determined using the 
C++ program CGPA Calculator. The user’s input is used to compute the CGPA, which 
includes information like the number of courses taken and the grades earned in each one. 
The program also shows each student’s overall course grade. CGPA Calculator calculates a 
student’s Cumulative Grade Point Average (CGPA) from the given exam results. 
The program can show the individual grades of each course, calculate total credits and 
total grade points achieved, determine the GPA for the semester, and based on all the 
data, it can generate and present the CGPA of the student. */

#include <iostream> 

int main(){
	char grades[6] = {'A', 'D', 'B', 'B', 'F', 'C'};
	int grade_point[6];
	int credit_hours[6] = {3, 2, 4, 1, 4, 2};
	int quality_point[6];
	float gpa = 0.0;
	float total_ours = 0.0;

	for(int i = 0; i<6; i++){
		if (grades[i] == 'A'){grade_point[i] = 4;}
		else if (grades[i] == 'B'){grade_point[i] = 3;}
		else if (grades[i] == 'C'){grade_point[i] = 2;}
		else if (grades[i] == 'D'){grade_point[i] = 1;}
		else if (grades[i] == 'F'){grade_point[i] = 0;}
		//std::cout << grades[i];
		quality_point[i] = grade_point[i] * credit_hours[i];
	}
	for(int i = 0; i<6; i++){gpa = gpa + quality_point[i];}
	for(int i = 0; i<6; i++){total_ours = total_ours + credit_hours[i];}
	
	gpa = gpa / total_ours;

	std::cout << "GPA: " << gpa << "\n";
	return 0;

}
