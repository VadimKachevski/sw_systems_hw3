#include "Isort.h"
#include <stdio.h>

int main()
{
    int intArray[ArrSize] = {0};
    int *p = intArray;
    int counter = 0;
    printf("Enter 50 numbers to sort \n");
    while (counter < ArrSize)
    {
        scanf("%d", p++);
        counter++;
    }
    insertion_sort(intArray, ArrSize);
    p = intArray;
    counter = 0;
    while (counter < ArrSize-1)
    {
        printf("%d,",*p);
        p=p+1;
        counter++;
    }
    printf("%d\n",*p);
    return 0;
}