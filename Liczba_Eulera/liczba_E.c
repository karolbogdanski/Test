#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "silnia.c"
#define SMALL_NUMBER 1.e-20

#ifndef M_E // standardy C99 i C11 nie wymagają definiowania stałej M_PI
#define M_E (2,718281828459)
#endif

int main(int argc, char **argv)
{
	int dokladnosc = 0;
	int i;
	double e = 0;
	printf("Z jaką dokładnością chcesz wykonać operację?\n");
	scanf("%d", &dokladnosc);
	printf("%d \n", dokladnosc);
	
	for(i=0; i<dokladnosc; i++){
		e = e + 1/f_silnia((i));
	}
		printf("Obliczona wartość to: %20.15lf", e);
		
	
	
	return 0;
}
