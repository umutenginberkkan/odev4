
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	short c;

	short a = rand()%100;
	printf("**Sayı bulmaca** \n ");
	printf("1-100 arası tutulan sayıyı biliniz\n");


	for(short b =1;b<=6;b++){


		scanf("%hd",&c);
		if(c<a)printf("küçük girdiniz\n");
		if(c>a)printf("büyük girdiniz\n");
		if(a==c){
			printf("%d .defada bildiniz",b);

			break;
		}
		printf(" kalan hak %d\n",6-b);

	}















}
