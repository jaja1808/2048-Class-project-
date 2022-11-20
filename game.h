#include <array>
#include <iostream>
#include <string.h>

#ifndef _GAME_
#define _GAME_

class Game {
private:
    /*variables*/
int _score;
int _turns;
std::array <int,16> _blocks;

public:
    Game(int score = 0, int turns = 0, std::array <int,16> blocks = {0});
    
    void display() const;
    void keypress(); 
    void generator();
    void isNotGameOver() const;
};

#endif //GAME


