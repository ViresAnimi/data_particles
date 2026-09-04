#include <iostream>

int cuadrado(int a){
	return a*a;
}

float cuadrado(float a){
	return a*a;
}

void cuadrado(float a, float b, float c, float d);

int main(){
	
	int a {8};
	float b {3.2};
	
	cuadrado(a);
	cuadrado(b);
	cuadrado(2,3,4,5);	
	
	return 0;
}

void cuadrado(float a, float b, float c, float d){
	float a11 {cuadrado(a)+b*c};
	float a12 {a*b+b*d};
	float a21 {c*a+d*c};
	float a22 {c*b+cuadrado(d)};
	
	std::cout<< a11 <<" "<< a12<<"\n"<< a21<<" "<<a22<< std::endl;	
	
}
