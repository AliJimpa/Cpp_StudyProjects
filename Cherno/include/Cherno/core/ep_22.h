#include <iostream>
#include "Log.h"

struct Entitiy
{
    static int X, Y;

    void Print()
    {
        std::cout << X << "," << Y << std::endl;
    }
};

// if define static variable need decelar that
int Entitiy::X;
int Entitiy::Y;

static void Print(Entitiy e)
{
    std::cout << e.X << "," << e.Y << std::endl;
}

int main()
{
    Entitiy e1;
    // Entitiy e2 = {5,4};
    Entitiy e2;
    e2.X = 199;
    e1.X = 50;
    e1.Y = 100;
    Entitiy::X = 87;
    e1.Print();
    e2.Print();
}