#include <stdio.h>
/* 3.1.4.15 LAB: Loops: for */
int main()
{
	int num, i, j;
	scanf("%d", &num);
    
    if (num > 20)
        num = 20;
        
    if (num == 1)
        num = 0;
    
	for (i = 0; i < num; i++){
	    printf("*");
	    for (j = 0; j < i; j++){
	        printf(" ");
	    }
	    printf("*\n");
	}
	
	for (i = num; i > 0; i--){
	    printf("*");
	    for (j = 0; j < i - 1; j++){
	        printf(" ");
	    }
	    printf("*\n");
	}
	
	return 0;
}
