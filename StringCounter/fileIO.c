
#include <stdio.h>
#include <string.h>
#include "fileIO.h"
#include "insertionSort.h"

/* This function reads a file line by line and places its content in a 2D Array
 * inputFilePath: location of the file to be read
 * inputSentences: 2D Array of the sentences read from the file
*/


int readSentences(char inputFilePath[], char  inputSentences[][MAX] ) {
    FILE *fp = fopen(inputFilePath, "r+");
    int i=0;
    int lineNum=0;

    if (fp == NULL) {      /* checks to see if the file exists  */
        perror("There is nothing to read.");
        lineNum = -1; /* use this as a file not found code */
    } else {
// fgets returns NULL when it gets to the end of the file
        while (fgets(inputSentences[lineNum], sizeof(inputSentences[lineNum]), fp) != NULL) {

            // if there is a \n(next line) it will be replaced by the null terminator
            // the null terminator should end every string

            if(inputSentences[i][strlen(inputSentences[i])-1] == '\n'){
                inputSentences[i][strlen(inputSentences[i])-1] = '\0';
            }

            i++;
            lineNum++;


        }
        fclose(fp);


 }


}

