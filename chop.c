#include <stdio.h>
#include <string.h>
/*
 * Program Name:chop.c
 * Author(s): Rehan Nagoor Mohideen
 * Student ID: 1100592
 * Purpose: Remove the '\n' from the end of the line. Returns 0 if sucessfull and -1 on failure.
 */

int chop(char *line){
  int length;

  length = strlen(line);
  if (length > 0 && line[length - 1]=='\n') {
    line[length - 1] = ' ';
    return 0;
  }else{
    return -1;
  }
}
