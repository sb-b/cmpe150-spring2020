/*
 ============================================================================
 Name        : Q4_answer.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i, j, Ucount = 0, Lcount = 0;
	char seq[50];

	for(i = 0; i < 50; i++)
	{
		scanf("%c",&seq[i]);

		if(seq[i] == '%')
			break;
	}

	for(j = 0; j < i; j++)
	{
	   if(seq[j] >= 'A' && seq[j] <= 'Z')
		  Ucount++;
	   if(seq[j] >= 'a' && seq[j] <= 'z')
		  Lcount++;
	}
	printf("Uppercase count: %d\n",Ucount);
	printf("Lowercase count: %d\n",Lcount);
	return 0;
}
