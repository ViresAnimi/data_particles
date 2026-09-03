#include <iostream>

int suma(int a, int b){

	std::cout << "suma entera\n" <<std::endl;
	return a+b;
}

// dentro de una funcion main void helloworld(){
	
//}


int suma(float a, float b, char c){

	std::cout << suma(a,b,c) <<std::endl;

	return 0;
}

int main(){

	int resulti {suma(3,2)};
	std::cout << resulti << std::endl;
	return 0;

}
