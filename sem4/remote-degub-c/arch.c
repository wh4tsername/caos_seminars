#include <stdio.h>

int main() {
    printf("is char signed = %d, ", (int)((char)(-1) > 0));
    printf("sizeof(long int) = %d\n", (int)sizeof(long int));
    return 0;
}

