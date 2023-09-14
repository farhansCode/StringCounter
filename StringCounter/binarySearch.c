
#include <string.h>
#include "binarySearch.h"

// This is a recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1

int binarySearch(char array[][MAX], int l, int r, char x[]) {


   if (r >= l ) {
        int mid = l + (r - l) / 2;

// If the element is present at the middle return the index at the middle

        if (strcasecmp(array[mid], x) == 0) {
            return mid;
        }


// If element is smaller than mid, then
// it can only be present in left subarray
        if (strcasecmp(array[mid] , x) > 0) {
            return binarySearch(array, l,mid - 1, x);
        }

// Else the element can only be present
// in right subarray
       if (strcasecmp(array[mid], x) < 0) {
           return binarySearch(array, mid + 1, r, x);
       }
   }


// We reach here when element is not
// present in array

    return -1;

}