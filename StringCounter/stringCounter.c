

#include<string.h>
#include "insertionSort.h"

#define MAX 50
#define STRINGS 50

// this function calculates the size of the array

int array_size(char array[][MAX]){

    int size = 0;

// keeps incrementing size as long as size is positive

    while(strlen(array[size])> 0) {
        size++;
    }

    return size;

}