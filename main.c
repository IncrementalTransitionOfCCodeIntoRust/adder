#include <stdio.h>
#include <stdlib.h>

#include "adder.h"

int main(int argc, char* argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    printf("The sum of %d and %d is %d.\n", a, b, add(a, b));

    return 0;
}
