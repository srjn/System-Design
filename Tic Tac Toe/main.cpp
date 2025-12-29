#include <bits/stdc++.h>
using namespace std;

#include "header.h"

int main() {
    Player p1("Srijan", CellState::X);
    Player p2("Opponent", CellState::O);

    Game game(p1, p2);
    game.start();
}