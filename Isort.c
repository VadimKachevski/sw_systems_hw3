#include "Isort.h"

void shift_element(int *arr, int i)
{

    if (i == 0)
    {
        return;
    }
    while (i != 0)
    {
        *(arr + i) = *(arr + i - 1);
        i--;
    }
    *arr = 999;
}
void insertion_sort(int *arr, int len)
{
    int i = 1;
    int check = 0;
    while (i < len)
    {
        if (*(arr + i) < *(arr + i - 1))
        {
            int j = i;
            check = 0;
            while ((j >= 0) && (check == 0))
            {
                if (*(arr + i) > *(arr + j))
                {
                    int temp = *(arr + i);
                    shift_element((arr + j + 1), i - j - 1);
                    *(arr + j + 1) = temp;
                    check = 1;
                }
                j--;
            }
            if (check == 0)
            {
                int temp = *(arr + i);
                shift_element((arr), i);
                *(arr) = temp;
            }
        }
        i++;
    }
}