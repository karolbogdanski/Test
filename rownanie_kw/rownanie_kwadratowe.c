#include <stdlib.h> // USES
#include <stdio.h> // USES
#include <math.h> // USES

#define SCALAR double
//#define SCALAR float

#define SMALL_NUMBER 1.e-20 // czy wystarczy jedna wartość dla float i dla double?

// Konstrukcje sterujące (nazwy zmiennych, zakresy widoczności i czas życia)
int main(void)
{
  // rozwiązanie równania kwadratowego ax^2 + bx + c = 0

  printf("\nProgram rozwiązywania równania kwadratowego ax^2 + bx + c = 0\n");

  SCALAR a, b, c;
  // rozważania o kontrakcie... (czy uwzględnia skończoną precyzję?)
  // input - uodpornianie na błędy wczytywania danych 
  printf("\nPodaj parametr a: "); scanf("%lf",&a); // adres! (miejsce na wpisanie wartości)
  printf("Podaj parametr b: "); scanf("%lf", &b);
  printf("Podaj parametr c: "); scanf("%lf", &c);

  // if(a==0 && b==0){ // alternatywa: if( a==0 || b==0 ) - zależnie od kontraktu
  if( fabs(a)<SMALL_NUMBER && fabs(b)<SMALL_NUMBER ){ // poprawnie
    printf("Błędne dane: a i b równe 0 (zbyt bliskie 0). Przerwanie programu.\n");
    exit(-1);
  }
  else{
    if(a==0) { // równanie liniowe
    printf("Równanie jest liniowe, a jego rozwiązaniem jest liczba %20.15lf\n", -c/b);//co mówi kontrakt?
    }
    else{
      SCALAR delta;  // zakres widoczności nazwy - powiązanie z czasem życia  
      delta = b*b - 4*a*c;
      if(delta<0){
        SCALAR temp = sqrt(fabs(delta));
	printf("Dwa pierwiastki zespolone: x1 = %20.15lf + %20.15lfi, x2 = %20.15lf - %20.15lfi\n",
	       -b/(2*a), fabs(temp)/(2*a), -b/(2*a), fabs(temp)/(2*a));
      } else if (delta == 0){
	printf("Jeden pierwiastek rzeczywisty: x = %20.15lf\n", -b/(2*a) );
      } else {
	SCALAR temp = sqrt(delta);
	printf("Dwa pierwiastki rzeczywiste: x1 = %20.15lf, x2 = %20.15lf\n",
	       (-b-temp)/(2*a), (-b+temp)/(2*a) );
      }  
    } // znaczenie wcięć i nawiasów klamrowych dla zwiekszenia czytelności kodu
  }

  return(0);
}

// Lab 
// Uzupełnienie programu o obsługę wszystkich przypadków liczbowych danych wejściowych
// Różne przypadki kontraktu - uwzględniające lub nie skończoną precyzję
