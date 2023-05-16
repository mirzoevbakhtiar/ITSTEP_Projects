
#include <iostream>
#include "sort.h"
#include "strtonum.h"
using namespace std;

bool sortbydate(char* year1,char* month1,char* day1,char* year2,char* month2,char* day2)
{
    bool a{};
    int year_1 = StringToNum(year1);
    int year_2 = StringToNum(year2);
    int month_1 = StringToNum(month1);
    int month_2 = StringToNum(month2);
    int day_1 = StringToNum(day1);
    int day_2 = StringToNum(day2);

    if(year_1 > year_2)
    {
        a = true;
    }else if(year_1 == year_2 && month_1 > month_2)
    {
        a = true;
    }else if(year_1 == year_2 && month_1 == month_2 && day_1 > day_2)
    {
        a = true;
    }else if(year_2 > year_1)
    {
        a = false;
    }else if(year_2 == year_1 && month_2 > month_1)
    {
        a = false;
    }else if(year_2 == year_1 && month_2 == month_1 && day_2 > day_1)
    {
        a = false;
    }

    return a;

}
