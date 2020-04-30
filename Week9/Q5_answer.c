/*
 ============================================================================
 Name        : Q5_answer.c
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

    int arr[50];
    int i, j, length, index;

    scanf("%d", &length);

    for(i = 0; i < length; i++)
    	scanf("%d", &arr[i]);

    scanf("%d", &index);

    delete_element(arr, &length, index);

    for(j = 0; j < length; j++)
    	printf("%d ",arr[j]);
	return 0;
}
