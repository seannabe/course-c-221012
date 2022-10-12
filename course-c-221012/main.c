#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num = 0;
	int sp;
	int num2 = 4;
	
	while (num < 9) {
		if (num < 5) {
			sp = 0;
			while (sp <= num) {
				printf("*");	
				sp = sp + 1;
		}
	}
	else{
		sp = 0;
		while (sp < num2) {
			printf("*");	
			sp = sp + 1;
		}
		num2 = num2 - 1;
	}
		//printf("%*s", num, " ");
		printf("\n");
		
		num = num + 1;
	}	
	
	return 0;
}
