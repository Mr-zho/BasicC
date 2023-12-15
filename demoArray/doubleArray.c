#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 5

#define ROW     3
#define COLUMN  3  

int main()
{
#if 0
    /* 从一维数组到二维数组 */
    int array[BUFFER_SIZE] = {0};
    int len = sizeof(array);
    printf("len:%d\n", len);
#endif

    /* 二维数组定义 */
    int array2[ROW][COLUMN] = {0};
    int len = sizeof(array2);
    printf("len:%d\n", len);

    int count = 1;
    /* 给二维数组赋值 */
    for (int idx = 0; idx < ROW; idx++)
    {
        for (int jdx = 0; jdx < COLUMN; jdx++)
        {
            array2[idx][jdx] = count;
            count++;
        }
    }

#if 0
    /* 二维数组的取值 */
    count = 0;
    for (int row = 0; row < ROW; row++)
    {
        for (int col = 0; col < COLUMN; col++)
        {
            printf("array2[%d][%d] = %d\t", row, col, array2[row][col]);
            count++;
        }
        printf("\n");
    }
    printf("\n");
#endif
    
#if 0
    /* 二维数组的地址 */
    printf("array[0]:%p\n", array2[0]);
    printf("array[0][0]:%p\n", &array2[0][0]);
    printf("array + 0:%p\n", array2);
    printf("\n");

    printf("array[1]:%p\n", array2[1]);
    printf("array[1][0]:%p\n", &array2[1][0]);
    printf("array + 1:%p\n", array2 + 1);
    printf("\n");

    printf("array[2]:%p\n", array2[2]);
    printf("array[2][0]:%p\n", &array2[2][0]);
    printf("array + 2:%p\n", array2 + 2);
    printf("\n");

    /* 数组即指针 */
    // array[2] = *(array + 2)
    // array[2][1] = *(*(array + 2) + 1)
    printf("array2[2][2] = %d, *(*(array2 + 2) + 2) = %d\n", array2[2][2], *(*(array2 + 2) + 2));
    

    /* 作业1: 二维数组的翻转 */
#endif
    return 0;
}