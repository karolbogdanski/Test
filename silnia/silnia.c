#include <math.h>
#include <stdio.h>

int f_silnia(int liczba)
{
	int i; 
	int silnia=1;
	for(i = 0; i < liczba; i++){
		silnia = silnia*(i+1);
	
	}return silnia;
}
