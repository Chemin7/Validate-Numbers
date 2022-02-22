#ifndef VALIDATE_H_INCLUDED
#define VALIDATE_H_INCLUDED

#include <string>

bool isInt(string num) {

    int value,a(0);

    for(int i = 0; i < num.length(); i++) {
        value = (int)num[i];
        if(value >= 48 && value <= 57 )
            a++;

        }
    return a == num.length() && num.length() != 0;

    }


//grepper validate real number c++
bool isReal(string num) {

    int value,a(0),period(0);
    bool before,after;

    for(int i = 0; i < num.length(); i++) {
        value = (int)num[i];
        if(value >= 48 && value <= 57 )
            a++;

        before = (int)num[i-1] >= 48 and (int)num[i-1]<= 57;
        after = (int)num[i+1] >= 48 and (int)num[i+1]<= 57;

        if(before && value == 46 && after){
                period++;
        }


        if(value == 46){
            if(!(before && after))
            return false;
        }


        }


    return (a == num.length() or a+1 == num.length())
            && num.length() != 0 and period <= 1
            and a>0;

    }
    //end grepper

#endif // VALIDATE_H_INCLUDED
