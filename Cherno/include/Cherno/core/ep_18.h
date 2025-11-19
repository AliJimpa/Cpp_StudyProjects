#include <iostream>
#include "Log.h"

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
    charq rrr;
    Player myplayer;
    LOG(sizeof(myx));
    LOG(sizeof(rrr));
    LOG(sizeof(myplayer));
    //myplayer.speed = 100;
    //LOG(myplayer.speed);
}
