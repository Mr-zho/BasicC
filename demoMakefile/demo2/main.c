#include <stdio.h>
#include "add.h"
#include "sub.h"
#include "mul.h"
#include "div.h"
#include <stdlib.h>

int main()
{
    int num1 = 100; 
    int num2 = 20;

    int ret = myadd(num1, num2);
    printf("ret:%d\n", ret);

    ret = mydiv(num1, num2);
    printf("ret:%d\n", ret);



    return 0;
}