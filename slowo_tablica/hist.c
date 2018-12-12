#include <stdio.h>

#define rozmiar_tab 5 

int main(){

	int c; //wpisywany znak 
	int i; //zmienna iteracyjna
	int wart_liczbowa;
	
	char tab_znak[rozmiar_tab] = {0};

	printf ("Podaj słowo do 5 liter lub krótsze jeśli skończysz je znakiem EOF(ctrl + d)");

	for(i = 0; (i < rozmiar_tab && (c = getchar()) != EOF); i++){
		tab_znak[i] = c;
		wart_liczbowa = (int)tab_znak[i];
		printf ("Wpisany znak: %c \n Jego wartość liczbowa: %d \n Jego indeks w tablicy: %d \n", tab_znak[i], wart_liczbowa, i);
	}

	return 0;
}
