#include <iostream>

class Entity
{
private:
    int X, Y;

public:
    Entity()
    {
        X = 0;
        Y = 0;
        std::cout << "Create Entity" << std::endl;
    }
    ~Entity()
    {
        std::cout << "Destroy Entity" << std::endl;
    }
    void Print()
    {
        std::cout << X << "," << Y << std::endl;
    }
    void SetValue(int val)
    {
        X = val;
        Y = val;
    }
};

void Function()
{
    Entity e;
    e.Print();
}

int main()
{
    Function();
}