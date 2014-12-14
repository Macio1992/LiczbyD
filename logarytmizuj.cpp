#include <cmath>
#include <vector>

using namespace std;

double logarytm(double liczba){
	return log10(liczba);
}

void logarytmizuj(vector< vector<double> > &vec, int nr_poczatkowy){
	
	for(int i = nr_poczatkowy, rozmiar = vec.size(); i < rozmiar; i++){
		for(int j = 0, dlugosc = vec[i].size(); j < dlugosc; j++){
			if(vec[i][j] != 0)
			vec[i][j] = logarytm(vec[i][j]);
		}
	}
}
