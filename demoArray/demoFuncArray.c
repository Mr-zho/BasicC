#include <stdio.h>
 
#define BUFFER_SIZE 10

void printArray(short *array)
{
    int len = sizeof(array) / sizeof(array[0]);
    for (int idx = 0; idx < len; idx++)
    {
        printf("array[%d]:%d\n", idx, (array)[idx]);
    }
    printf("\n");
}


int main()
{
    short array[BUFFER_SIZE];
    int len = sizeof(array) / sizeof(array[0]);

    printf("main:len:%d\n", len);
    for (int idx = 1; idx <= BUFFER_SIZE; idx++)
    {
        array[idx - 1] = idx;
    }

    for (int idx = 0; idx < len; idx++)
    {
        printf("array[%d]:%d\n", idx, array[idx]);
    }
    printArray(array);
    

    return 0;
}