#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){

	srand(time(NULL));
	int n, r, z;
	float x;

	do {

	printf("Podaj zakres: ");
	scanf("%f", &x);

	n =(int)x;

	} while( n <= 0 || x-n > 0 );

	r = rand()%n+1;

	do {

	printf("Podaj liczbe: ");
	scanf("%d", &z);

	if(z < r)
		printf("Podales za mala liczbe! \n");
	else if(z > r)
		printf("Podales za duza liczbe! \n");
	else if(z == r)
		printf("Odgadles liczbe, ta liczba to: %d \n", r);
	} while(z != r);

return 0;
}

/*
   Z metody 'Przeszukiwanie binarne'
   W najgorszym przypadku minimalna liczba pytań, jaką należy zadać to (log2 n).
   (Gdzie n to liczba elementow w zbiorze.)
   np: Jesli np zbior N ma 33 elementy, należy zadać co najwyżej (log2 33) = 6 pytań.
*/
