// srednia geometryczna elementów 2 i 3-cyfrowych liczona do napotkania wartosci koniec

#include <stdio.h>
#include <math.h>

int main(){
    double iloczyn = 1;
    int n = 0, koniec;
    // podajemy wartosc ktora ma konczyc liczenie sredniej
    printf("Podaj wartosc konczaca liczenie sredniej: ");
    scanf("%d",&koniec);
    while (1){
        int x;
        scanf("%d", &x);
        if (x == koniec){
            printf("%.2f", pow(iloczyn, 1. / n));
            break;
        }
        if (x > 9 && x < 1000){
            // jesli liczba bedzie 1-cyfrowa lub ponad 3-cyfrowa nie bedzie uwzgledniana w sredniej
            iloczyn *= x;
            n ++;
        }
    }

    return 0;
}
