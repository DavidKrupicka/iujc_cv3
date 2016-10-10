#include <stdlib.h>
#include <stdio.h>

#define N 5

void priklad1();
void priklad2();


int main(int argc, char *argv[]){
	//priklad1();
	priklad2();
	

	system("pause");
	return 0;
}

void priklad1(){
	int a, b, *pa, *pb;

	pa = &a;
	pb = &b;

	printf("zadej hodnotu:");
	scanf("%d", pa);
	printf("zadej hodnotu:");
	scanf("%d", pb);

	printf("hodnota na adrese pa: %d\n", *pa);
	printf("obsah pa: %x\n", pa);
	printf("adresa prom. pa: %x\n", &pa);
	printf("adresa prom. a: %x\n", &a);

	printf("hodnota na adrese pb: %d\n", *pb);
	printf("obsah pb: %x\n", pb);
	printf("adresa prom. pb: %x\n", &pb);

	printf("soucet %d", *pa + *pb);
}

void priklad2(){
	int *pmin, *pmax;
	int pole[N], pom;

	for (int i = 0; i < N; i++){
		printf("zadej %d. prvek", i);
		scanf("%d", &pole[i]);
		//druha varianta zapisu
		//scanf("%d", pole+i);
	}

	for (int i = 0; i < N; i++){

		//nastaví ukazatele na první prvek v poli
		if (i == 0){
			pmax = &pole[i];
			pmin = &pole[i];
		}

		printf("\n%d", pole[i]); //printf("%d", (pole+i));
		
		//kontrola maxima
		if (*pmax < pole[i]){
			pmax = &pole[i];
			printf(" - maximum bylo zmeneno");
		}

		printf(" (max %d) ", *pmax);

		//kontrola minima
		if (*pmin > pole[i]){
			pmin = &pole[i];
			printf(" - minimum bylo zmeneno");
		}

		printf(" (min %d) ", *pmin);


		printf("\n");
	}

	//prohodit
	pom = *pmax;
	*pmax = *pmin;
	*pmin = pom;


	for (int i = 0; i < N; i++){
		printf("\n[%d]%d\n", i, pole[i]);
	}
}

