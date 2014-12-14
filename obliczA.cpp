#include <vector>
#include "liczbyd.h"

using namespace std;

double obliczA(vector < vector <double> > &vec, int nr_poczatkowy, int nr_wiersza){
	
	return (obliczSumeIloczynow(vec, nr_poczatkowy, nr_wiersza) - obliczIloczynSum(vec, nr_wiersza, nr_poczatkowy))
	/
	(obliczSumeKwadratow(vec, nr_poczatkowy) - obliczKwadratSumy(vec, nr_poczatkowy));
	
}
