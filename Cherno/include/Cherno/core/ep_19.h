#include <iostream>
#include "Log.h"

#define CLASS class // backward compatiblity for C language

class Player
{

    int X, Y;
    float speed;

public:
    void Move(int xa, int ya)
    {
        X += xa * speed;
        Y += ya * speed;
    }
};

int main()
{
    int myx;
    char rrr;
    Player myplayer;
    LOG(sizeof(myx));
    LOG(sizeof(rrr));
    LOG(sizeof(myplayer));
    //myplayer.speed = 100;
    //LOG(myplayer.speed);
}
