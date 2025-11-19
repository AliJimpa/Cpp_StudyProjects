#include <iostream>

#define LOG(x) std::cout << x << std::endl

void Increment(int val)
{
    val++;
}
void IncrementPTR(int* val)
{
    (*val)++;
}

int main()
{
    int a = 5;
    int* Aptr = &a;
    int& Aref = a;
    Aref = 2;
    IncrementPTR(&a);
    LOG(a);

}