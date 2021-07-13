#include <stdio.h>

int main()
{
    int numArr[3][4] = {    
        { 11, 22, 33, 44 },
        { 55, 66, 77, 88 },
        { 99, 110, 121, 132 }
    };

    int(*numPtr)[4] = numArr;

    
    printf("%p\n", *numArr+1);
    printf("%p\n", numArr + 1);

    

    return 0;
}