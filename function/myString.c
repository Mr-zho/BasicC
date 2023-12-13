#include "myString.h"
#include <stdio.h>

/* 获取字符串的长度 */
int myStrlen(const char *pStr)
{
    int count = 0;
#if 0
    if (pStr == NULL)
    {
        return count;
    }
#else
    if (!pStr)
    {
        return count;
    }
#endif
    while (*pStr != '\0')
    {
        count++;
        pStr++;
    }
    return count;
}

/* 字符串的拷贝 */
int myStrcpy(char *dst, const char *src)
{

}

