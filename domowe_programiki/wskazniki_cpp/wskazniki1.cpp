#include <iostream>
using namespace std;

#define rozmiar 10

void wypelnij(int *tab){
    for(int i = 0; i<rozmiar; i++){
        cin >> *(tab+i);
    }
}

void drukuj(int *tab){
	for(int i = 0; i<rozmiar; i++){
		cout << *(tab+i) << " ";
	}
}

void drukuj_adresy(int *tab){
	for(int i = 0; i<rozmiar; i++){
		cout << &(*(tab+i)) << " ";
	}
}

int main(){
	int tablica[rozmiar];
	
	wypelnij(tablica);
	drukuj(tablica);
	cout << "\n";
	drukuj_adresy(tablica);
	
    return 0;
}
