#include <vector>

using namespace std;

double obliczKwadratSumy(vector< vector<double> > &vec, int nr_poczatkowy){
	
	double suma = 0;
	
	for(int i = nr_poczatkowy; i < nr_poczatkowy+1; i++){
		for(int j = 0, dlugosc = vec[i].size(); j < dlugosc; j++){
			suma += vec[i][j];
		}
	}
	return suma*suma;
}
