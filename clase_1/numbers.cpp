#include <iostream>

#define PI 3.14

int a = 18; //declaracion
float b {25.0}; //declaracion + asignacion
const float pi {3.1415926};
int c {6}; //declaracion
//c = 7; //asignacion

int main(){

	std::cout<< a+b+c <<std::endl;

	std::cout<< pi <<std::endl;

	std::cout<< PI <<std::endl;

	std::cout<< PI+pi/2-(a+b+c)/5 <<std::endl;

	return 0;
}
