0-Write a function that fills memory with a constant byte
1-Write a function that copies memory area.
2-Write a function that copies memory area.
3-Write a function that locates a character in a string.
4-Write a function that gets the length of a prefix substring.
5-Write a function that searches a string for any of a set of bytes
6-Write a function that locates a substring
7-Write a function that prints the chessboard.
8-Write a function that prints the sum of the two diagonals of a square matrix of integers.Create a file that contains the password for the crackme2 executable.
9-Write a function that sets the value of a pointer to a char.
cat > main.h
#ifndef MAINH
#define MAINH

/**

* void prototypes
* int prototypes 
*/

int  _putchar (char);
char *_memset (char *s, char b, unsigned int n);
char *_memcpy (char *dest, char *src, unsigned int n);
char *_ strchr (char *s, char c);
unsigned int _strspn (char *s, char *accept);
char *_strpbrk (char *s, char accept) ;
char *_strstr (char *haystack, char *needle) ;
void print_chessboard (char (*a) [8]);
void print_diagsums (int *a, int size) ;
void set_string(char **s, char *to);

#endif /*MAIN_H*/
