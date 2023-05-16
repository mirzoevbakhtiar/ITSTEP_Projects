#include <iostream>
#include "strtonum.h"

int StringToNum(char* str)
{
    int length = 0;
    int num = 0;
    for(int i = 0;str[i]!='\0'; i++)
    {
        length++;
    }
    for (int i = 0; i<length; i++)
    {
        num = num * 10 + (int)(str[i] - '0');
    }
    return num;
}









