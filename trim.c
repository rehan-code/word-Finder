#include <stdio.h>
#include <string.h>
/*
 * Program Name: trim.c
 * Author(s): Rehan Nagoor Mohideen
 * Student ID: 1100592
 * Purpose: Trim all white space from the beginning and from the end of each line.Returns 0 on success and -1 on failure.
 */

 int trim ( char *line ) {
  int i;
  int lineLength = strlen(line);
  for (i = 0; i <= strlen(line); i++) {
    while (line[0]==' ') { /* Checks for starting space and removes by pulling the character in the array back */
      for (i = 0; i < lineLength; i++) {
        line[i]=line[i+1];
      }
    }

    while (line[lineLength-1] == ' ') { /* Checks for trailing space and removes by replacing last digit with null character */
      line[lineLength-1] = '\0';
      lineLength--;
    }
  }
  if (line[0]!=' '&& line[strlen(line)-1]!=' '){
    return 0;
  }
  return -1;

}
