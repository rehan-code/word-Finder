#include <stdio.h>
#include <string.h>
#include "textProc.h"

#define MAXSIZE  500    /* maximum size of input line */
/*
 * Program Name: wordBag.c
 * Author(s): Rehan Nagoor Mohideen
 * Student ID: 1100592
 * Purpose: prints out unique words with number from sorted list of words
 */

int main ( int argc, char *argv[] ) {
   char line[MAXSIZE];
   int i,j = 0;
   int x = 2;
   char words[MAXSIZE][MAXSIZE];
   char currWord[MAXSIZE]; /* Used to store the current word */
   char prevWord[MAXSIZE]; /* Used to store the previous word */
   int noofRepetitions[MAXSIZE];
   noofRepetitions[0] = 1;

   while ( fgets ( line, MAXSIZE, stdin ) != NULL ) {
     /* Assigning current word and removing trailing characters */
     for (i = 0; line[i] != '\n'; i++) {
       currWord[i]= line[i];
     }
     for (; i < MAXSIZE; i++) {
       currWord[i]= '\0';
     }

     if (j>=1 ) { /* to start counting/checking from second word, prints the according output depending on if its repeated or not*/
       if (strcmp(currWord,prevWord) == 0) {
         noofRepetitions[j-1]++;
         printf("%03d %s\n",noofRepetitions[j-1] ,prevWord);
         x = 0;
       }else {
         noofRepetitions[j] = 1;
         if (x != 1) {
           printf("%03d %s\n",noofRepetitions[j-1] ,prevWord);
         }
       }
     }

     /* Assigning previous word and removing trailing characters */
     for (i = 0; line[i] != '\n'; i++) {
       prevWord[i]= line[i];
     }
     for (; i < MAXSIZE; i++) {
       prevWord[i]= '\0';
     }

     x++;
     j++;
   }

   /* To print the last word */
   if (x!=1) {
     printf("%03d %s\n",noofRepetitions[j-1] ,prevWord);
   }

   return ( 0 );
}
