#include <iostream>
using namespace std;
#include <header.h>


class Game {
private:
    Board board;
    Player p1, p2;
    Player* current;
public:
    Game(Player a, Player b) : p1(std::move(a)), p2(std::move(b)), current(&p1) {}

    void switchTurn() { current = (current == &p1 ? &p2 : &p1); }

    bool checkWin(CellState mark){
        cout<<"checking who is winner";
        return true;
    }
    bool checkDraw(){
        cout<<"checking Draw";
        return false;
    }

    void start(){
        cout<<"Welcome to TIC-TAC-TOE";
    } // loop until win or draw
};