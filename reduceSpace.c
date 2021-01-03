#include <stdio.h>
#include <string.h>
/*
 * Program Name: reduceSpace.c
 * Author(s): Rehan Nagoor Mohideen
 * Student ID: 1100592
 * Purpose: Reduce all white space (blank characters and tabs to a single blank space). Returns the number of whitespaces remove
 */

 int reduceSpace ( char *line ) {
  int i;
  int j;
  int noofSpace = 0;
  int lineLength = strlen(line);
  while (i <= lineLength) {
    if (line[i]==' '){
      if (line[i+1] == ' '){ /* Find where the extra space is to remove */
        for (j = i; j < lineLength; j++) { /* Removing space by pulling all characters in the array back by one */
          line[j]=line[j+1];
        }
      }
    }
    i++;
  }
  return noofSpace;
}
