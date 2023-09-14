

#include<stdio.h>
#include <string.h>
#include "Occurances.h"



int occurances (char array[][MAX], int index, char target[]){

    if(index == -1){
        // if index is -1 then that means the string does not occur in array2
        printf("\n%s: 0", target);
    }

else {
        int i, j;
        int occurred = 1;
        // j counts above(to the left of the index)
        // i counts below(to the right of the index)

        i = index + 1;
        j = index - 1;
// strcasecmp compares without taking into acount is the leter is capital or not

        while (strcasecmp(array[index], array[i]) == 0) {

            occurred++;
            i++;
        }

        while (strcasecmp(array[index], array[j]) == 0) {

            occurred++;
            j--;

        }

// prints out the number of times a string in array1 occures in array2
        printf("\n%s: %d", target, occurred);
    }
}
