void read_tree(){
	TFile f("events_1000.root");
	TTree *t = (TTree*)f.Get("t"); //cast a ttree
	
	TTreeReader reader(t);
	TTreeReaderArray<double> E(reader,"E"); //aqui queremos leer el archivo con la energia E
	TTreeReaderArray<double> px(reader,"px");
	TTreeReaderArray<double> py(reader,"py");
	TTreeReaderArray<double> pz(reader,"pz");
	TTreeReaderArray<int> pid(reader,"pid");
	
	int nevents{0};
	while(reader.Next()){
		//loopea por todos los ventos del ttree t que esta en f
		std::cout<<nevents <<std::endl;
		
		// dentro del vento, vamos a loopear sobre las particulas
		int nparts{0};
		for(int i{0}; i<E.GetSize();i++){
			//std::cout<<" \t"<<E[i]<<" "<<pid[i]<<std::endl;
			
			if(pid[i]==22){ //cut o corte, ojo pero los fotones tienen energias diferentes, que puede ser util saber
				continue;
			}
			if(abs(pid[i]!=11)){ //solo deja e+ y e-
				continue;
			}
			
			//masa invariante de una o mas particulas
			double Ei = E[i];
			double pxi = px[i];
			double pyi = py[i];
			double pzi = pz[i]; 
			double m = sqrt(Ei*Ei-pxi*pxi-pyi*pyi-pzi*pzi);
			
			//TString s_particulas = Form("\tEnergia: %.3f pid: %i masa: %.5f",E[i],pid[i],m);
			//std::cout<<s_particulas <<std::endl;
			
			
			
			nparts++;
			
			for(int j = i; j<E.GetSize();j++){//todos los pares de particulas
				double Eij=E[i]+E[j];
				double pxij = px[i]+px[j];
				double pyij = py[i]+py[j];
				double pzij = pz[i]+pz[j]; 
				//masa invartiante del par
				double mij=sqrt(Eij*Eij-pxij*pxij-pyij*pyij-pzij*pzij);
				TString s_particulas = Form("\tEnergia: %.3f pid: %i masa: %.5f",E[i],pid[i],mij);
				std::cout<<s_particulas <<std::endl;
			}
		}
		std::cout<< "nparticulas "<<nparts<< std::endl;
		
		nevents++;
	}
}
