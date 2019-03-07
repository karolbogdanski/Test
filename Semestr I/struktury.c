#include <stdio.h>

struct man {
    char *imie;
    int wiek;
    float wzrost;
};

struct butt{
    char *imie;
    int l_posladkow;
    float thiccness;
};

int main(){

    struct man karol;
        karol.imie = "Karol";
        karol.wiek = 19;
        karol.wzrost = 1.80;

    struct butt tanisha;
        tanisha.imie = "CHAD";
        tanisha.l_posladkow = 2;
        tanisha.thiccness = 21.37;

    struct man* wsk_man = &karol;

    printf("%d", wsk_man);
        

    printf("%s wiek: %d wzrost: %f\n", karol.imie, karol.wiek, karol.wzrost);
    printf("%s wiek: %d wzrost: %f\n", tanisha.imie, tanisha.l_posladkow, tanisha.thiccness);
    return 0;
}