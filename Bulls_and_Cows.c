#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int u1, u2, u3;
	int c1, c2, c3;
	int strike = 0, ball = 0; 
	
	srand((unsigned)time(NULL)); 
	
	do{
		c1 = rand() % 10;
		c2 = rand() % 10;
		c3 = rand() % 10;
	}while(c1 == c2 || c2 == c3 || c1 == c3);
	
	do{
		strike = ball = 0;
		
		printf("Input : ");
		scanf("%d%d%d", &u1, &u2, &u3); 
		
		if(c1 == u1) strike++;			
		else if(c1 == u2) ball++;
		else if(c1 == u3) ball++;
		
		if(c2 == u2) strike++;
		else if(c2 == u1) ball++;
		else if(c2 == u3) ball++;
		
		if(c3 == u3) strike++;
		else if(c3 == u1) ball++;
		else if(c3 == u2) ball++;
		
		printf("%dS %dB\n", strike, ball);		
	}while(strike != 3);
}
