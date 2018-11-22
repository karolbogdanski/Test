#include <stdio.h>

#define ROZMIAR_TABLICY 4

int main()
	{

	int i, m;
	float n;
	int suma = 0;
	int max = 0;
	int tablica_int[ROZMIAR_TABLICY] = {0};
	float tablica_float[ROZMIAR_TABLICY] = {0};
	float zaokraglij_2(float n){ //dokładność przy porównywaniu					 
		return ((int)(n*100)/100.0); //do dwóch miejsc po przecinku
	}
		
	printf("Podaj liczby: \n");  //wczytywanie wartości do tablicy
	for(i=0; i<ROZMIAR_TABLICY; i++){
		scanf("%d", &tablica_int[i]);
	}
	
	for(i=0; i<ROZMIAR_TABLICY; i++){ //MAKSIMUM
		if(tablica_int[i]>max)
			max = tablica_int[i];
	}
	for(i=0; i<ROZMIAR_TABLICY; i++){ //SUMA
		suma=tablica_int[i]+suma; 
	}
	
	printf("Maksimum to: %d\n", max);
	printf("Suma to: %d\n", suma);
	
	printf("Podaj szukaną liczbę(int): "); //SZUKANA INT
	scanf("%dSzukana liczba: ", &m); 
	i=0;
	while(tablica_int[i]!=m && i!=ROZMIAR_TABLICY)
		i++;
	if(m==tablica_int[i])
		printf("Szukana liczba to liczba numer: %d, czyli: %d\n", i+1, tablica_int[i]);
		else
			printf("Nie znaleziono szukanej liczby\n");
		
	printf("Podaj liczby (float): \n"); //wczytywanie wartości do tablicy (float)
	for(i=0; i<ROZMIAR_TABLICY; i++){ 
		scanf("%f", &tablica_float[i]);
		tablica_float[i] = zaokraglij_2(tablica_float[i]);
	}
	printf("Podaj szukaną liczbę(float): "); //SZUKANA FLOAT
	scanf("%fSzukana liczba: ", &n); 
	n=zaokraglij_2(n);
	
	i=0;
	while(tablica_float[i]!=n && i!=ROZMIAR_TABLICY)
		i++;
	if(tablica_float[i]==n)
		printf("Szukana liczba to liczba numer: %d, czyli: %f\n", i+1, tablica_float[i]);
		else
			printf("Nie znaleziono szukanej liczby\n");
		  
		  
return 0;
}
//Karol Kusik, IS, grupa 5
