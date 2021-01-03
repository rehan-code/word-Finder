#include <stdio.h>
#include <string.h>
/*
 * Program Name: replaceDigits.c
 * Author(s): Rehan Nagoor Mohideen
 * Student ID: 1100592
 * Purpose: Replace all the numbers/digits (0-9) with blanks.Returns the number of digits replaced with blanks.
 */

 int replaceDigits ( char *line ) {
  int i;
  int noofDigits = 0;
  for (i = 0; i <= strlen(line); i++) {
    if (line[i]>47 && line[i]<58){ /* Find where the digits are to replace */
      line[i]= ' ';
      noofDigits++;
    }
  }
  return noofDigits;

}
