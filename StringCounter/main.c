
#include "fileIO.h"
#include "insertionSort.h"
#include "stringCounter.h"
#include "binarySearch.h"
#include "Occurances.h"


#define MAX 50
#define STRINGS 50



int main() {


int numOfStringsArray2;

    //sentences read from input1.txt
    // set all values in array1 to zero
    char array1[STRINGS][MAX] = {""};

    //sentences read from input2.txt
    // set all values in array2 to zero

    char array2[STRINGS][MAX] = {""};


    readSentences("C:\\Users\\Owner\\CLionProjects\\assignment1\\first text.txt", array1);
    readSentences("C:\\Users\\Owner\\CLionProjects\\assignment1\\second text.txt", array2);

// sizez of both strings can be calculated
 // printf("%d",array_size(array1));
// printf("\n%d",array_size(array2));

// this uses the array_size function to give us the number of strings
   numOfStringsArray2 = array_size(array2);

   // alphabetically arranges array2 using insertion sort

   insertionSort(array2 , numOfStringsArray2);

   // initalises and assigns the values needed for the binary search
   // l = 0 as the leftmost(first) index
   // r = to the amount of rows in array2
   // r is calculated using the array_size function which is in the stringCounter module

   int l,r;
   l = 0;
   r = array_size(array2);


// array1 and array2 can be printed using the code down below

//
//int m;
//printf("\nArray 2 is:");
//    for ( m = 0; m < numOfStringsArray2; m++) {
//        printf("\n%s", array2[m]);
//    }
//
//printf("\n\n");
//    printf("\nArray 1 is:");
//    int o;
//    for (int o = 0; o < array_size(array1); o++) {
//
//        printf("\n%s", array1[o]);
//
//    }
//
//printf("\n\n");

  int index;
    int v;

    for (v = 0; v < array_size(array1) ; v++) {

       index = binarySearch(array2 ,l,r,array1[v]);
       occurances(array2 , index, array1[v]);

    }


}
