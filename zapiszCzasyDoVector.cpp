#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

void zapiszCzasyDoVector(vector< vector<double> > &vec, ifstream &plik){
	string linia;
	while(getline(plik, linia)){
		vector<double> czasy;
		double czas;
		istringstream iss(linia);
		while(iss >> czas)
			czasy.push_back(czas);
		vec.push_back(czasy);
	}
}
