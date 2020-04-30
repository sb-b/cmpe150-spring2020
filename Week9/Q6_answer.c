/*
 ============================================================================
 Name        : Q6_answer.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void delete_element(int arr[], int *len, int index){
	int i;

	for(i=index; i<*len-1; i++){
		arr[i] = arr[i+1];
	}

	*len = *len - 1;

}

int main(void) {

	int i, N, L, H, smallest;
	int arr[50];

	scanf("%d",&N);

	for(i = 0; i < N; i++)
		scanf("%d",&arr[i]);

	scanf("%d %d",&L, &H);

	smallest = L;
	for(i = L; i <= H; i++)

		if(arr[smallest] > arr[i])
			smallest = i;

	delete_element(arr, &N, smallest);

	for(i = 0; i < N; i++)
		printf("%d ",arr[i]);

	return 0;
}
