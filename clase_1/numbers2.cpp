#include <iostream>

int main(){
	//cast
	int a {4};
	float b;
	b = (float) a; //cast estilo c (viejo)
	float c = static_cast<float>(a); //moderno
	
	float d {14.3};
	int e = static_cast<int>(d);
	std::cout << e <<  std::endl;

	return 0;

}
