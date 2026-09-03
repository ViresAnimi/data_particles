#include <iostream>

double by_value(double a){ //copia de a
	a = a+10;
	return a;
}

void by_reference(double &a){ //referencia dentro de la memoria
	a = a+10;
}

int main(){
	double a {3.19948};
	double b {by_value(a)};
	
	std::cout<< a << " "<< b<< std::endl;
	
	by_reference(a);
	std::cout<< a << " "<< b<< std::endl;
	
	return 0;
}
