#include <vector>
#include "liczbyd.h"

using namespace std;

double obliczIloczynSum(vector< vector<double> > &vec, int nr_wiersza, int nr_poczatkowy){
	
	double suma = 0, iloczyn = 1;
	
	for(int i = nr_poczatkowy; i<=nr_wiersza; i += nr_wiersza-nr_poczatkowy){
		suma = 0;
		for(int j = 0, dlugosc = vec[i].size(); j < dlugosc; j++){
			suma += vec[i][j];
		}
		iloczyn *= suma;
	}
	return iloczyn;
}
