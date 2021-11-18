

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf(" **euler sayısı üs hesaplayıcı**\n");
	printf ("sayının kaç üssünü almak istersiniz?\n ");

    int a = 0;
    double top =0;
    double x = 1;
    double y = 1;



    scanf("%d",&a);


    for(int b=1;b<=15;b++){

    	for(int c=1;c<=b;c++){
    		x*=a;

    	}

    	for(int d=1;d<=b;d++){

    		y*=(d);

    	}

    	top+=x/y;

    	x=1;
    	y=1;


    }

	printf("e üssü  %d = %lf",a,top+1);
}





