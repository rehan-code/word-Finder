#include <stdio.h>
#include <string.h>
/*
 * Program Name: replaceDigits.c
 * Author(s): Rehan Nagoor Mohideen
 * Student ID: 1100592
 * Purpose: Replace all punctuation and symbols with blanks. Returns the number of punctuation and symbols replaced with blanks.
 */

 int replacePunc ( char *line ) {
  int i;
  int noofPunc = 0;
  for (i = 0; i <= strlen(line); i++) {
    if ((line[i]>32 && line[i]<48) || (line[i]>37 && line[i]<65) || (line[i]>90 && line[i]<97) || (line[i]>122 && line[i]<256)){ /* Find where the punctuation characters are to replace */
      line[i]= ' ';
      noofPunc++;
    }
  }
  return noofPunc;

}
