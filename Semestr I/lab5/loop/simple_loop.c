#include <stdio.h>

#define ROZMIAR_TABLICY 10
#define ROZMIAR_TABLICY2 3

void main(void)
{

  int tablica_int[ROZMIAR_TABLICY] = {0};
	
	
  for(int i=0; i<ROZMIAR_TABLICY; i++){
	tablica_int[i] = i+3;
    printf("Iteracja %d: tablica_int[%d] = %d\n", i, i, tablica_int[i]);

  }
  
  int tablica_int2[ROZMIAR_TABLICY2] = {0};
	
	int y = 0;
	
  for(int i=0; i<ROZMIAR_TABLICY2; i++){
	scanf("%d", &y);
	tablica_int2[i] = y;
    printf("Iteracja %d: tablica_int[%d] = %d\n", i, i, tablica_int2[i]);

  }

}
