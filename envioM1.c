#include <stdio.h>
#include <stdlib.h>

int *TwoSum(int* list, int target, int list_size);

#define LISTSIZE 7

int main(){

    int targetValue = 11;
    int list[LISTSIZE];

    for (int i = 0; i <= LISTSIZE; i++){
        list[i] = i+5; 
    }

    for (int j = 0; j < LISTSIZE; j++){
        printf("%d|", list[j]);
    }

    int *output = malloc(2 * sizeof(int));

    output = TwoSum(list, targetValue, LISTSIZE);

    printf("\n");
    printf("%d|", output[0]);
    printf("%d", output[1]);

    free(output);
}

int *TwoSum(int* list, int target, int listSize){


    int *result = malloc(2 * sizeof(int));

    for (int i = 0; i < listSize; i++){
        for (int j = i+1; j < listSize; j++){
            if (list[i] + list[j] == target){
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
}