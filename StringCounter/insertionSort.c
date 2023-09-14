


#include <string.h>
#include "stringCounter.h"
//
#define MAX 50
#define STRINGS 50

// this function swap the elements when need
// this is used for the insertion sort

void swap(char array[STRINGS][MAX], int index1, int index2) {

    if (index1 != index2) {
        char swap_elem[MAX];
        memset(swap_elem, '\0', sizeof(swap_elem));
        strcpy(swap_elem, array[index1]);
        strcpy(array[index1], array[index2]);
        strcpy(array[index2], swap_elem);

    }
}


// this is the code for insertion sort
//

void insertionSort (char inputStrings[][MAX], int numberOfStringsArray2){
    int i,j;


    for ( i = 1; i < numberOfStringsArray2 ; i++) {
        j = i;

        while(j > 0 && strcasecmp(inputStrings[j], inputStrings[j-1]) < 0) {
            swap(inputStrings,j, j-1);
            j--;
        }
    }
}

