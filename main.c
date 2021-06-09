#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - uses strdup to create a new string, and prints the
 * address of the new duplcated string
 *
 * Return: EXIT_FAILURE if malloc failed. Otherwise EXIT_SUCCESS
 */

int main (void) {
  char *s;

  s = strdup("NgocKhuat");
  if (s == NULL) {
    fprintf(stderr, "Can't allocate mem with malloc\n");
    return (EXIT_FAILURE);
  } else {
    printf("%p\n", (void *) s); 
    // => Print 0xffffffff, the addresses changed on each run. but the catch is this is a low addresses
    // or more precise this is addresses in the heap.
    // How do we know it is small? 
    // This code is ran on macbook M1, a 64-bit machine => the highest address is 0xffffffffffffffff
    // And the lowest is 0x00. => so 0xfffffff is low compared to the highest address
      
    return (EXIT_SUCCESS);
  }
}
