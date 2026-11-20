#include <stdio.h>


int main(int argc, char* argv[])
 {

double celc, farh;

printf("Podaj liczbę stopni celcjusza i zmienię ją w farenhaity\n");
scanf("%lf", &celc);

farh = (celc*1.8) + 32;

printf("Jest %.1f stopni celcjusza \nCzyli %.1f stopni farenhairta \n", celc, farh );




return(0);
   
}
