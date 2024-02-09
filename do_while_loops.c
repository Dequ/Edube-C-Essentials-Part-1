#include <stdio.h>
/* For 3.1.4.15 Lab: Loops: do-while */
int main()
{   
    int num, inner_counter, outer_counter;
    scanf("%d", &num);
    outer_counter = 1;
    if (num > 20)
        num = 20;
	do {
	    inner_counter = 1;
	    outer_counter++;
	    do {
	        printf("*#");
	        inner_counter++;
	    } while (inner_counter < outer_counter);
	    printf("\n");
	} while (outer_counter - 1 < num); 
	return 0;
}
