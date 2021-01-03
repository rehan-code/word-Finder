Description:
The program findWords find all words with greater than 5 characters when they occur and outputs them in each line. 
wordBag finds all unique words when they occur and outputs them in each line with the number of times they repeat.

To run findWords first:
$ make findWords

To test with verneTest:
$ cat verneTest.txt | ./findWords
 
$ cat verneTest.txt | ./findWords | sort


To run wordBag first:
$ make wordBag

Then:
$ cat verneTest.txt | ./findWords | sort | ./wordBag 
$ cat verneTest.txt | ./findWords | sort | ./wordBag | sort -gk1,1r -gk2,2
