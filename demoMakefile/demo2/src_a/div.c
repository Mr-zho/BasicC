#include "div.h"


int mydiv(int num1, int num2)
{
    /* 判断合法性 */
    if (num2 == 0)
    {
        return 0;
    }
    return num1 / num2;
}