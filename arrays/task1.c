#include <stdio.h>

// reversing an array in c 
int main(void) {

    int i;

    int array[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int array_size = sizeof(array) / sizeof(array[0]);


    for (i = array_size - 1; i  >= 0 ; i--)
    {
        /* code */
        printf("{%d}",array[i]);
    }
    printf("\n");
    return 0;
}

// writting a c - typing program
// writing a program where the user saves his passwords in a file then overwrite it using buffer overflow.