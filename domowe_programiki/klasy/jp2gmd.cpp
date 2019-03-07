#include <iostream>
#include <string>

using namespace std;

class osoba{
	
	public:
	
	string imie;
	string nazwisko;
	int l_p;
	bool posiadanie_aids;
	int dzieci_zgwalcone;
	long int ludzie_zabici;
	long int kremowki_zjedzone;
	
	
}Papiez;

void wypelnij_klase(osoba *Papaj){
	char x; //zmienna pomocnicza do operacji logicznej bool
	
	cout << "Podaj imie bestii: " << endl;
	cin >> Papaj -> imie;
	cout << "Podaj nazwisko: " << endl;
	cin >> Papaj -> nazwisko;
	cout << "Podaj liczbę bestii: " << endl;
	cin >> Papaj -> l_p;
	cout << "Czy ma aids?(T/N)" << endl;
	cin >> x;
		if(x == 'T')
			Papaj -> posiadanie_aids = 1;
		else if(x == 'N')
			Papaj -> posiadanie_aids = 0;
		else 
			cout << "NIEPOPRAWDNE DANE DEBILU MIAŁO BYĆ T ALBO N CZEGO KURWA NIE ROZUMIESZ? SPRÓBUJ JESZCZE RAZ";
	cout << "Ile dzieci zgwałcił?: " << endl;
	cin >> Papaj -> dzieci_zgwalcone;
	cout << "Ilu ludzi zabił?" << endl;
	cin >> Papaj -> ludzie_zabici;
	cout << "Ile zjadł kremówek papieskich?" << endl;
	cin >> Papaj -> kremowki_zjedzone;
	
}

void drukuj_klase(osoba Papaj){
	cout << "Imię jego jest " << Papaj.imie << " " << Papaj.nazwisko << " on pół człowiek jest pół diabeł" << endl;
	cout << "Liczba: " << Papaj.l_p << endl;
	if (Papaj.posiadanie_aids == 1)
		cout << "Ma aids" << endl;
		else cout << "Nie ma aids" << endl; 
	cout << "Zgwałcił " << Papaj.dzieci_zgwalcone << " dzieci" << endl;
	cout << "Zabił: " << Papaj.ludzie_zabici << " ludzi" << endl;
	cout << "Zjadł: " << Papaj.kremowki_zjedzone << " kremówek" << endl;
	cout << "Uważaj na niego!" << endl;
}

long int Stosunek(osoba gej){
	int stosunek = gej.dzieci_zgwalcone / gej.ludzie_zabici;
	
	return stosunek;
}

int main(int argc, char **argv)
{
	osoba PapieszPedau;
	
	osoba *wsk_Papiesz = &PapieszPedau;
	
	wypelnij_klase(wsk_Papiesz);
	cout <<endl;
	drukuj_klase(PapieszPedau);
	
	return 0;
}

