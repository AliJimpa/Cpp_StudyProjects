#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main()
{
    int myage = 27;

    int *ptr = 0; // ziro is invalid memoty address
    ptr = NULL;
    ptr = nullptr;

    if (ptr == 0)
    {
        LOG("Kiir");
        ptr = &myage;
    }

    *ptr = 8;
    LOG(*ptr);

    char *buffer = new char[8]; // that means allocate 8 byt of memory and take first of to buffer pointer
    memset(buffer, 77, 8);
    LOG(*buffer);
    buffer[0] = 'a';
    LOG(*buffer);
    delete[] buffer;
    // std::cin.get();
}