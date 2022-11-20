#include <iostream>
#include "game.h"
#include <array>

Game::Game(int score, int turns, std::array <int,16> blocks): _turns(turns), _score(score), _blocks(blocks) {
}

void Game::display() const{

    std::cout << "Score: " << _score << std::endl;
    std::cout << "Turns: " << _turns << std::endl;
    std::cout<< std::endl;
    
    for (auto i=0; i<4; i++){
      for(auto j=0; j<4; j++){
        std::cout << _blocks.at(4*i+j) << "  ";
      }
      std::cout << std::endl;
    }
    std::cout << std::endl;
    std::cout <<"u:up  d:down  l:left  r:right  q:quit" <<std::endl;
    
}
void Game::keypress() { // listen to the key response
    char key;
    std::cin >> key;
    switch (key)
    {
    case 'u':
      for (auto i=0; i<4 ;i++){
        for(auto j=0; j<4; j++){
          // int sum = _blocks [i+j];
        std::cout << _blocks[i] << "  ";
        }
        std::cout << std::endl;
      }
      break;
    
    default:
      break;
    }
}

void Game::generator() {
  int random = rand() %15;
if (random <=8){
    if(_blocks[random]==0){
      _blocks[random]= 2;
    }
     }
else{
 if(_blocks[random]==0){
   _blocks[random]= 4;
   }
 }
} 

void Game::isNotGameOver() const{
for (int i=0; i<_blocks.size();i++){
  if(_blocks[i] == (_blocks[i++] || _blocks[i+4])){
  }else if(_blocks[i] == (_blocks[i--]) || _blocks[i-4]){
  }else if(_blocks[i]== 0){
  }
}
}

