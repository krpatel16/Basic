#include <stdio.h>
#include <stdlib.h>

struct size
{
    int i;
    char kp[8];
    int j;
};

int main()
{
   printf("size of int: %d\n", sizeof(int));
   printf("size of char: %d\n", sizeof(char));
   printf("size of float: %d\n", sizeof(float));
   printf("size of structure: %d\n", sizeof(struct size));
   return 0;
}
