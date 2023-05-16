#include <iostream>
#include "start.h"
#include "print.h"
#include "sort.h"
#include "edit.h"
using namespace std;
using namespace std;
struct list{
    char* name = new char[100]{};
    char* priority  = new char[100]{};
    char* description = new char[100]{};
    char* year  = new char[100]{};
    char* month  = new char[100]{};
    char* day  = new char[100]{};
    char* clock = new char[100]{};
    char* clock2  = new char[100]{};
    char* choice = new char[100]{};
    int sorting = 0;

};
int main() {
    list t1{};
    list t2{};
    list t3{};

    start(t1.name,t1.priority,t1.description,t1.year,t1.month,t1.day,t1.clock,t1.clock2,t1.choice);
    print(t1.name,t1.priority,t1.description,t1.year,t1.month,t1.day,t1.clock,t1.clock2);
    if (t1.choice[0] == 'y' && t1.choice[1] == 'e'&&t1.choice[2] == 's' )
    {
        start(t2.name,t2.priority,t2.description,t2.year,t2.month,t2.day,t2.clock,t2.clock2,t2.choice);
        print(t1.name,t1.priority,t1.description,t1.year,t1.month,t1.day,t1.clock,t1.clock2);
        print(t2.name,t2.priority,t2.description,t2.year,t2.month,t2.day,t2.clock,t2.clock2);
    }

    cout<<"Would you need to sorting by date(1) or priority(2)?";
    cin>>t3.sorting;

    switch (t3.sorting) {
        case 1:
        {
            bool a = false;
            a = sortbydate(t1.year,t1.month,t1.day,t2.year,t2.month,t2.day);
            if (a)
            {
                print(t1.name,t1.priority,t1.description,t1.year,t1.month,t1.day,t1.clock,t1.clock2);
                print(t2.name,t2.priority,t2.description,t2.year,t2.month,t2.day,t2.clock,t2.clock2);
            }

            else{
                print(t2.name,t2.priority,t2.description,t2.year,t2.month,t2.day,t2.clock,t2.clock2);
                print(t1.name,t1.priority,t1.description,t1.year,t1.month,t1.day,t1.clock,t1.clock2);
            }
            break;
        }
        case 2:
        {
            if( t1.priority > t2.priority)
            {
                print(t1.name,t1.priority,t1.description,t1.year,t1.month,t1.day,t1.clock,t1.clock2);
                print(t2.name,t2.priority,t2.description,t2.year,t2.month,t2.day,t2.clock,t2.clock2);
            }else{
                print(t2.name,t2.priority,t2.description,t2.year,t2.month,t2.day,t2.clock,t2.clock2);
                print(t1.name,t1.priority,t1.description,t1.year,t1.month,t1.day,t1.clock,t1.clock2);
            }
            break;
        }
    }
    cout<<'\n';
    bool b = false;
    cout<<"would you need to redact any list?(yes = 1), (no = 0)";
    cin>>b;
    if (b)
    {
        int choo = 0;
        cout<<"Which list you need?(first - 1,second - 2)";
        cin>>choo;
        if(choo == 1){

            edit(t1.name,t1.priority,t1.description,t1.year,t1.month,t1.day,t1.clock,t1.clock2);

            print(t1.name,t1.priority,t1.description,t1.year,t1.month,t1.day,t1.clock,t1.clock2);
        }
        else{
            edit(t2.name,t2.priority,t2.description,t2.year,t2.month,t2.day,t2.clock,t2.clock2);
            print(t2.name,t2.priority,t2.description,t2.year,t2.month,t2.day,t2.clock,t2.clock2);
        }
    }

    return 0;
}

