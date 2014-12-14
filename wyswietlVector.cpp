#include <vector>
#include <iostream>

using namespace std;

void wyswietlVector(vector< vector<double> > &vec){
	cout.precision(3);
	for(int i = 0, rozmiar = vec.size(); i < rozmiar; i++){
		for(int j = 0, dlugosc = vec[i].size(); j < dlugosc; j++){
			cout <<fixed<<vec[i][j]<<"\t";
		}
		cout <<"\n";
	}
}
