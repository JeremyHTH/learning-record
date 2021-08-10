#include <stdio.h>

int main ()
{
    void *a;
    int b = 3;
    char c = 97;

    a = &b;
    printf("this is the int pointer %d\n", *(int *)a);
     
    a = &c;
    printf("this is the char pointer %c\n", *(char *)a);
}