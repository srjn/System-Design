#include <bits/stdc++.h>
using namespace std;

enum class CellState { Empty, X, O };

class Cell {
private:
    CellState state;
public:
    Cell() : state(CellState::Empty) {}
    CellState getState() const { return state; }
    void setState(CellState s) { state = s; }
};

class Board {
private:
    Cell grid[3][3];
public:
    bool isEmpty(int row, int col) const {
        return grid[row][col].getState() == CellState::Empty;
    }

    bool placeMark(int row, int col, CellState mark) {
        if (isEmpty(row, col)) {
            grid[row][col].setState(mark);
            return true;
        }
        return false;
    }

    void display() {
        cout<<"Displaying....";
    } // simple print to console
};

class Player {
private:
    std::string name;
    CellState mark;
public:
    Player(std::string n, CellState m) : name(std::move(n)), mark(m) {}
    std::string getName() const { return name; }
    CellState getMark() const { return mark; }
};

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

int main() {
    Player p1("Srijan", CellState::X);
    Player p2("Opponent", CellState::O);

    Game game(p1, p2);
    game.start();
}