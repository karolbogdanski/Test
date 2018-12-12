#include <stdio.h>

#define max 10

void wypelnij_tab(char tab[]){
int i;
int c;
for(i = 0; (i < max && (c = getchar()) != EOF); i++){
		tab[i] = c;
    }
}

void szyfruj(char tab[]){
    int i;
    for(i = 0; i < max; i++){
        if(tab[i] >= 0 && tab[i] < 65)
            tab[i] = tab[i];
        else if(tab[i] > 64 && tab[i] < 120 )
            tab[i] = tab[i] + 3;
        else 
            tab[i] = tab[i] - 12;
    }
}

int main(void){

int i;

char tab[max] = {0};
wypelnij_tab(tab);

for(i = 0; i < max; i++){
    printf("%c", tab[i]);
}

szyfruj(tab);

for(i = 0; i < max; i++){
    printf("%c", tab[i]);
}

    return 0;
}