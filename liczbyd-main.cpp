#include <iostream>
#include <fstream>
#include "liczbyd.h"

using namespace std;

int main(){
	
	vector < vector <double> > czasy2D;
	ifstream plik;
	ofstream strumien("wyniki.txt");
	string nazwa;
	int nr_poczatkowy = 0, rozmiar;
	char c = 'A';
	
		int i = 0;
		while(i < 3){
			nazwa += c;
			plik.open(nazwa.c_str());
			if(plik){
				zapiszCzasyDoVector(czasy2D, plik);
				rozmiar = czasy2D.size();
				logarytmizuj(czasy2D, nr_poczatkowy);
				strumien<<"Wyniki zestawu"<<nazwa<<"\n";
				for(int k = nr_poczatkowy+1; k < rozmiar; k++){
					strumien<<obliczA(czasy2D, nr_poczatkowy, k)<<"\n";
				}
				plik.close();
			}
			else
				cout <<"blad podczas otwierania pliku\n";
			i++;
			c++;
			nazwa = "";
			nr_poczatkowy = rozmiar;
		}
		
	return 0;
}
