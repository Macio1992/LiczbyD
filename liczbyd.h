#include <vector>
#include <fstream>

using namespace std;

void zapiszCzasyDoVector(vector < vector <double> > &vec, ifstream &plik);
void wyswietlVector(vector < vector <double> > &vec);
void logarytmizuj(vector < vector <double> > &vec, int nr_poczatkowy);
double obliczSumeIloczynow(vector < vector <double> > &vec, int nr_poczatkowy, int nr_wiersza);
double obliczIloczynSum(vector < vector <double> > &vec, int nr_wiersza, int nr_poczatkowy);
double obliczSumeKwadratow(vector < vector <double> > &vec, int nr_poczatkowy);
double obliczKwadratSumy(vector < vector <double> > &vec, int nr_poczatkowy);
double obliczA(vector < vector <double> > &vec, int nr_poczatkowy, int nr_wiersza);
