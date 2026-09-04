#include <iostream>

//atributos y miembros
class particula{
private:
	//atributos	
	float mass {0.0}; //4 bites
	float energy {0.0};
	float p[3];
	float x[3];
	
public:
	// funciones -> miembros
	//funcion "constructor" por defecto
	particula(){};
	
	//funcion "constructor 2"
	particula(float m){mass =m;} 
	
	//funcion "constructor 3"
	particula(float m, float E){
		mass =m;
		energy=E;
	} 
	
	//funcion "destructor"
	~particula(){};
	//cuanta memoria guardarle
	
	void set_E(float E0){energy=E0;}
	//setter y getters
	//funcion para VER la masa
	float get_mass(){return mass;}
	
	//funcion apra sacar la energia
	float get_energy(){return energy;}
	
	//funcion que me de la energia de la colision
	float E_colision(particula p2){
		float E1 = energy;
		float E2 = p2.get_energy();
		return E1+E2;	
	}
	//cosas en privado no pueden ser accedidas por la clase
};

//herencia -> clase derivada
//nueva clase leptones pero derivada de particula, todos los leptones son particulas, pero no todas las particulas son leptones
class lepton: public particula{
private:
	float n_leptonico{1};
public:
	lepton(float m, float E):particula(m,E){
		std::cout<<"Creamos un nuevo lepton"<<std::endl;
	}
	
	float get_lepton(){return n_leptonico;}
};

int main(){

	particula p;
	std::cout<<p.get_mass()<<std::endl;
	particula p2(2.3,700);
	std::cout<<"masa:"<<p2.get_mass()<<" "<<"Energia:"<<p2.get_energy()<<std::endl;
	
	p.set_E(500);
	std::cout<<"Energia:"<<p.get_energy()<<std::endl;
	
	particula p3(100,1000);
	std::cout<<"masa:"<<p3.get_mass()<<" "<<"Energia:"<<p3.get_energy()<<std::endl;
	
	std::cout<<"colision:"<<p2.E_colision(p3)<<std::endl;
	
	//lepton l; //tenemos el constructor por defecto
	//std::cout<<l.get_lepton()<<std::endl;
		
	lepton l(20,30);
	std::cout<<l.get_lepton()<<std::endl;
	
	return 0;
}
