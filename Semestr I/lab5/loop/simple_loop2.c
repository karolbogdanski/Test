#include <stdio.h>

#define ROZMIAR_TABLICY 10
#define ROZMIAR_TABLICY2 3

void main(void)
{

  int tablica_int[ROZMIAR_TABLICY] = {0};
	
  int i=0;
  while(i<ROZMIAR_TABLICY){
	tablica_int[i] = i+3;
    printf("Iteracja %d: tablica_int[%d] = %d\n", i, i, tablica_int[i]);
	i++;
  }
  
  int tablica_int2[ROZMIAR_TABLICY2] = {0};
	
	int y = 0;
	int j=0;
	
	do {
		scanf("%d", &y); 
		tablica_int2[j] = y;
		printf("Iteracja %d: tablica_int[%d] = %d\n", j, j, tablica_int2[j]);
		j++;
		}while( j<ROZMIAR_TABLICY2);

}
