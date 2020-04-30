/*
 ============================================================================
 Name        : Q2_answer.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[50];
	int i;
	int N;

	scanf("%d\n",&N);

	for(i = 0; i < N; i++)
	   scanf("%d",&arr[i]);


	for(i = 0; i < N; i++)
	   printf("%d ",arr[N-i-1]);

	return 0;
}
