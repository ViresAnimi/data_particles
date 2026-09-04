#include <iostream>
#include <cmath>
#include <vector>

void printv(std::vector<int> v){
	//i++ -> i+=1
	for(int i {0}; i<v.size(); i++){
		std::cout<<v[i]<<std::endl;
	}
	std::cout<<"-------"<<std::endl;
}

int main(){

	std::vector<int> v1;
	printv(v1);
	v1.push_back(5); //agrega al final
	printv(v1);
	v1.push_back(3);
	printv(v1);
	
	v1[0] = 4; //cambia el primer elemento por el numero 4
	printv(v1);
	
	v1.pop_back(); //saca un elemento
	printv(v1);
	
	return 0;
}
