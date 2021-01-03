#include <stdio.h>
#include <string.h>
/*
 * Program Name: convertLowerCase.c
 * Author(s): Rehan Nagoor Mohideen
 * Student ID: 1100592
 * Purpose: Convert all alphabetic characters to lower case. Returns the number of characters converted from upper case to low
 */

int convertLowerCase ( char *line ){
  int i;
  int noofChar = 0;
  for (i = 0; i <= strlen(line); i++) {
    if (line[i]>64 && line[i]<91){ /* Find where the uppercase character are to replace */
      line[i]=line[i]+32;
      noofChar++;
    }
  }
  return noofChar;

}
