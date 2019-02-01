
#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
int one = 3, two=3,three =5, four=4, five=4, six =3, seven=5, eight=5, nine=4, ten=3, eleven=6, twelve=6 , thirteen=8, fourteen=8,
fifteen=7, sixteen=7, seventeen=9, eighteen=8, nineteen=8, twenty=6, thirty=6,fourty=5, fifty=5, sixty=5, seventy=7,eighty=6, ninety=6, 
hundred=7, onethousand=11, single_digit ,double_digit, teen, triple_digit, count_1_9, count_1_99, count_hundred, count_999,
total_count;

int main()
{
    single_digit=one+two+three+four+five+six+seven+eight+nine;
    teen=ten+eleven+twelve+thirteen+fourteen+fifteen+sixteen+seventeen+eighteen+nineteen;
    double_digit=10*(twenty+thirty+fourty+fifty+sixty+seventy+eighty+ninety)+(8*36);
    count_1_9= single_digit*100;
    count_1_99= 9*854;
    count_hundred= hundred*9;
    count_999= 999*10;
    total_count=single_digit+teen+double_digit+count_1_9+count_1_99+count_hundred+count_999+onethousand;
    cout<<total_count;
}
