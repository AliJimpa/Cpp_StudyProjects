#include <iostream>
#include "Log.h"

void PrintArray(int *ptrArray, int lenght)
{
    return;
    LOG("/////////////");
    for (size_t i = 0; i < lenght; i++)
    {
        LOG(ptrArray[i]);
    }
}

int main()
{
    int example[5]; // means 5 4byte memory

    int count = sizeof(example)/sizeof(int);
    LOG("ArrayCount is: "<<count);

    example[0] = 50;
    example[1] = 40;
    example[2] = 30;
    example[3] = 20;
    example[4] = 10;
    int *ptr = example;
    PrintArray(ptr, 5);

    *(ptr + 3) = 80; // equal to ptr[3]
    PrintArray(ptr, 5);

    *(int *)((char *)ptr + 8) = 6;
    PrintArray(ptr, 5);
}