/**
 * This program reads a text file and prints the top 5 most frequent letters (upper or lower case)
 * and the top 5 most frequent digits that are in the file. If the file has less than 5 unique letters
 * and/or digits the top list is adjusted accordingly. The file name is provided using command line 
 * arguments. If the file name is not provided or the file is not readable, the program will exit
 * and provide an error message.
 *
 * @author Your Name Here {@literal <pluf@wfu.edu>}
 * @date Sept. 20, 2020
 * @assignment Lab 2
 * @course CSC 250
 **/

#include <ctype.h>
#include <stdio.h>
#define MAX_STRING_SIZE 20
#define MAX_LIST_SIZE 100

/* a useful struct, if you choose to use it */  
struct Char_Freq {
    char ch;
    int count;
};

/* function declarations go here */

int main(int argc, char* argv[]){
    if(argc < 2){
        printf("Usage: %s filename \n", argv[0]);
        return 1;
    }

    return 0;
}


