#include <vector>
#include "liczbyd.h"

using namespace std;

double obliczSumeIloczynow(vector < vector <double> > &vec, int nr_poczatkowy, int nr_wiersza){
	double iloczyn = 1, suma = 0;
	
	for(int i = nr_poczatkowy; i < nr_poczatkowy+1; i++){
		for(int j = 0, dlugosc = vec[i].size(); j < dlugosc; j++){
			iloczyn = 1;
			if(vec[i][j] == 0){
				iloczyn = 1*vec[nr_wiersza][j];
			}
			else if(vec[nr_wiersza][j] == 0){
				iloczyn = vec[i][j]*1;
			}
			else{
				iloczyn = vec[i][j]*vec[nr_wiersza][j];
			}
			suma += iloczyn;
		}
	}
	return suma;
}
