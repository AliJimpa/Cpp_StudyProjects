#include <iostream>

class Entity
{
protected:
    float X, Y;

    void Move(float xa, float ya)
    {
        X += xa;
        Y += ya;
    }
};

class Player : public Entity
{
public:
    const char *Name;
    Player()
    {
        Name = "Player";
        X = 0;
        Y = 0;
    }
    void PrintName()
    {
        std::cout << Name << std::endl;
    }
    void PritnLocation()
    {
        std::cout << X << "," << Y << std::endl;
    }

};

int main()
{
    Player pl;
    pl.PrintName();
    pl.PritnLocation();
}