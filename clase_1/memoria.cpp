#include <iostream>

int main(){
	
	int a {25};
	std::cout<< "el valor de a es" << std::endl;
	std::cout<< "la direccion de memoria de a es " << &a <<std::endl;

	int &r {a}; // es una referencia a "a"
	std::cout <<"r y a " <<r << " "<< a <<std::endl;

	r = 18;
	std::cout <<"r y a " <<r << " "<< a <<std::endl;

	int *b; //puntero que apunta a una direccion de memoria
	std::cout << b <<std::endl;

	b = &a; //apuntame a la direccion de memoria de a
	std::cout<< b <<std::endl;

	//a que valor apunta b?
	// dereferenciar
	std::cout<< *b <<std::endl;

	return 0;

}
