#include <stdio.h>

int main()
{
  
  char c, znak;
  
  printf("Wprowadź znak, przerywający działanie programu: \n");
  scanf("%c", &znak);
  
  do{  
    printf("\nWprowadź cyfrę od 1 do 5: \n");  
    scanf(" %c",&c);
    
    switch (c) {
    case '0': 
      printf("Wprowadzono: 0\n");
      break;
    case '1':
      printf("Wprowadzono: 1\n");
      break;
    case '2':
      printf("Wprowadzono: 2\n");
      break;
    case '3':
      printf("Wprowadzono: 3\n");
      break;
    case '4':
    printf("Wprowadzono: 4\n");
    break;
    case '5':
      printf("Wprowadzono: 5\n");
      break;
    default:
      printf("Wprowadzono: znak spoza zakresu 0-5\n");
      break;
    } 
  }while(c!=znak);


	do{
		printf("Wprowadź cyfrę od 0 do 5: \n");
		scanf(" %c", &c);
		if(c=='0')
			printf("Wprowadzono: 0\n");
		else if(c=='1')
			printf("Wprowadzono: 1\n");
		else if(c=='2')
			printf("Wprowadzono: 2\n");
		else if(c=='3')
			printf("Wprowadzono: 3\n");
		else if(c=='4')
			printf("Wprowadzono: 4\n");
		else if (c=='5')
			printf("Wprowadzono: 5\n");
		else
			printf("Wprowadzono: znak spoza zakresu 0-5\n");
		}while(c!=znak);
}
