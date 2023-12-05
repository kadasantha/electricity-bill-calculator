#include <stdio.h>

int main() {

    float unit;
    float bill;

    printf("Enter units: ");
    scanf("%f",&unit);

    if(unit<50){
        bill =unit*0.5;
    }

    else if(unit<150){
        bill=50*0.5 +(unit-50)*.75;
    }
    else if(unit>150 && unit<250){
        bill=50*.5 + 100*.75 + (unit-150)*1.2;
    }
    else{
        bill=50*.5 + 100*.75 + 100*1.2 +(unit-250)*1.5;
    }




printf("Total Bill RS:%.2f",bill);
    return 0;
}
