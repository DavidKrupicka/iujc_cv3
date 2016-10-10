#include <stdlib.h>
#include <stdio.h>




int main(int argc, char *argv[]){
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

	system("pause");
	return 0;
}
