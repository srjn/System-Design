#include<bits/stdc++.h>
using namespace std;

class BookMyShow{
    public:
    vector <City> location;
    int seatNo;
    bool Payment_status=false;
    time_t movieStartTime;

};

class Theater{
    public:
    vector<string> movies;
    enum ScreenType;
};

class City{
public:
string name;
vector<Theater> TheaterList;
};

enum ScreenType{
    silver, gold, platinum
};

int main{
    return 0;
}