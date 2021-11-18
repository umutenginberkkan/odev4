
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int top;
	for(int a=1;a<=15000;a++)
	{


		for(int b=1;b<a;b++)
		{
			if(a%b==0)top+=b;


		}

		if(a==top){printf("%d",top);printf("\n");};
		top=0;




	}





}

