#include <iostream>
#include <string.h>
#include "game.h"
#include "game.cpp"
#include <array>

int main(int argc, char const *argv[])
{
    Game me(3,4,{1,2,3,4,5,6,7,8,9,10,0,11,2,34,14,67});
    me.generator();
    me.display();
    me.keypress();


    std::array <int , 19> ja ={0};
    std::cout << ja.size();
    return 0;

  
}



