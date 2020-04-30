/*
 ============================================================================
 Name        : Q3_answer.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int N, M, i, j;
	int firstArr[50], secArr[50];

	scanf("%d %d",&N,&M);


	for(i = 0; i < N; i++)
		scanf("%d",&firstArr[i]);

	for(i = 0; i < M; i++)
		scanf("%d",&secArr[i]);

	for(i = 0; i < M; i++)
	{
		if(firstArr[0] == secArr[i])
		{
			for(j = 1; j < N; j++)
			{
				if(firstArr[j] != secArr[i+j])
					break;
			}
			if(j == N)
			  printf("%d",i);
		}
	}
	return 0;
}
