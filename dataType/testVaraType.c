#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* 数据类型 */
/* sizeof 是计算字节的大小 */
int main()
{
#if 0
    long bigValue = 0;
    int len = sizeof(bigValue);        /* 整形就是整数 */
    printf("len: %d, bigValue = %ld\n", len, bigValue);    /* %ld就是打印来长整数 */

    /* 变量的命名:数字，字母，下划线。只能以字母和下划线开头 */
    /* 数据类型对应的是内存的存储空间 */
    int age = 6;
    len = sizeof(age);        /* 整形就是整数 */
    printf("len: %d, age = %d\n", len, age);    /* %d就是打印整数 */
    printf("hello world!\n");

    short smallValue = 1;
    len = sizeof(smallValue);        /* 整形就是整数 */
    printf("len: %d, smallValue = %d\n", len, smallValue);    /* %d就是打印整数 */
#if 1
    /* 浮点数 */
    float weight = 50.5;
    len = sizeof(weight);
    printf("len: %d, weight = %f\n", len, weight);    /* %f就是打印小数/浮点数 */
#else
    double weight = 50.5;
    len = sizeof(weight);
    printf("len: %d, weight = %f\n", len, weight);    /* %f就是打印小数/浮点数 */
#endif
    char sex = 'm';
    len = sizeof(sex);
    printf("len: %d, sex = %c\n", len, sex);        /* %c就是打印字符 */
#endif

#if 0
    /* 有符号 */
    char sex = -1;
    int len = sizeof(sex);
    printf("len: %d, sex = %c sex = %d\n", len, sex, sex);        /* %c就是打印字符 */

    char default_value = 127;
    len = sizeof(default_value);

    default_value += 2;
    printf("len: %d, default_value = %c default_value = %d\n", len, default_value, default_value);        /* %c就是打印字符 */

    /* 无符号 和 有符号的区别 */
    unsigned char m_value = -1;
    len = sizeof(m_value);
    printf("len: %d, sex = %c sex = %d\n", len, m_value, m_value);        /* %c就是打印字符 */
#endif

#if 0
    /* 表达式 & 运算符 */
    /* 运算符 + - * / */
    int val = 10;
    printf("val:%d\n", val);

    /* 括号的优先级是最高的 运算符的优先级用括号的限制 */
    /* 后置++ */
    val++;  // val = val + 1;
    printf("val:%d\n", val);
    val--;
    printf("val:%d\n", val);

    /* 前置++ */
    ++val;
    printf("val:%d\n", val);
    --val;
    printf("val:%d\n", val);
#endif

#if 0
    val = val + 100;
    printf("val:%d\n", val);

    val += 100;         // val = val + 100;
    printf("val:%d\n", val);

    // -=
    // *=
    // /=
#endif

#if 0
    int m_value = 10;
    int discuss = m_value / 3;
    int remainder = m_value % 3;        /* 取模 */

    printf("discuss:%d\n", discuss);
    printf("remainder:%d\n", remainder);

    /* 随机数 */
    int randomVal = rand();
    printf("randomVal:%d\n", randomVal);

    /* 中奖率是25% */
    int lotteryRate = randomVal % 4;    // [0 - 3]
    printf("lotteryRate:%d\n", lotteryRate);
#endif

#if 0
    4 / 4 = 1 ... 0
    5 / 4 = 1 ... 1
    6 / 4 = 1 ... 2
    7 / 4 = 1 ... 3

    8 / 4 = 2 ... 0
#endif

#if 0
    int a = 51;
    // 32 + 16 + 2 + 1
    // 2^5 + 2^4 + 2^1 + 2^0
    printf("a:%d\n", a);
    a <<= 1;
    printf("a:%d\n", a);
#endif

#if 0
    128 = 2^7;
    64  = 2^6
    32
    16
    8
    4
    2
    1
#endif
    
#if 0
    int val = 51;
    int orVal = val | 7;
    int andVal = val & 2;

    printf("orVal:%d\n", orVal);
    printf("andVal:%d\n", andVal);

    /* 非 */
    int notVal = !val;
    printf("notVal:%d\n", notVal);
#endif

#if 0
    /* 且 或 非 */
    int condition1 = 1;
    int condition2 = 6;
    /* 或: 只要有一个条件满足, 就返回1. */
    if ((condition1 == 1) || (condition2 == 5))
    {
        printf("hello world\n");
    }
    else
    {
        printf("not hello world\n");
    }

    /* 且: 两边都被满足，就返回1. 否则返回0. */
    if ((condition1 == 1) && (condition2 == 5))
    {
        printf("hello world\n");
    }
    else
    {
        printf("not hello world\n");
    }
#endif

    /* 运算符: 双目运算符 & 三目运算符 */
    /* 双目运算符 */

    /* */
    int num1 = 40;
    int num2 = 30;

    /* 三目运算符 */
    int num3 = (num1 > num2) ? 100 : 666;
    printf("num3:%d\n", num3);



    return 0;
}
