/*
 ============================================================================
 Name        : Q1_answer.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {

    int i, j;
    char seq[50], encr[50], decr[50];


    for(i = 0; i < 50; i++)
    {
    	scanf("%c",&seq[i]);

    	if(seq[i] == '\n')
    		break;
    }

    for(j = 0; j < i - 1 ; j++)
    	encr[j] = seq[j] + 1;

    for(j = 0; j < i - 1 ; j++)
    	printf("%c",encr[j]);

    printf("\n");

    for(j = 0; j < i - 1 ; j++)
    	decr[j] = encr[j] - 1;

    for(j = 0; j < i - 1 ; j++)
    	printf("%c",decr[j]);



	return 0;
}
