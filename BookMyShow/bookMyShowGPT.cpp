#include <bits/stdc++.h>
using namespace std;

enum ScreenType { silver, gold, platinum };

class Seat {
    int seatNo;
    bool isBooked;
public:
    Seat(int no) : seatNo(no), isBooked(false) {}
    bool book() { 
        if(!isBooked) { isBooked = true; return true; }
        return false;
    }
};

class Show {
    time_t startTime;
    vector<Seat> seats;
public:
    Show(time_t t, int totalSeats) : startTime(t) {
        for(int i=1; i<=totalSeats; i++) seats.push_back(Seat(i));
    }
    bool bookSeat(int seatNo) { return seats[seatNo-1].book(); }
};

class Movie {
    string title;
    vector<Show> shows;
public:
    Movie(string t) : title(t) {}
    void addShow(Show s) { shows.push_back(s); }
};

class Theater {
    string name;
    ScreenType screen;
    vector<Movie> movies;
public:
    Theater(string n, ScreenType s) : name(n), screen(s) {}
    void addMovie(Movie m) { movies.push_back(m); }
};

class City {
    string name;
    vector<Theater> theaters;
public:
    City(string n) : name(n) {}
    void addTheater(Theater t) { theaters.push_back(t); }
};

class Booking {
    bool paymentStatus;
public:
    Booking() : paymentStatus(false) {}
    void makePayment() { paymentStatus = true; }
};

class BookMyShow {
    vector<City> cities;
public:
    void addCity(City c) { cities.push_back(c); }
};

int main() {
    BookMyShow bms;
    City bangalore("Bangalore");
    Theater inox("INOX", gold);
    Movie inception("Inception");

    time_t now = time(0);
    Show morningShow(now, 10);

    inception.addShow(morningShow);
    inox.addMovie(inception);
    bangalore.addTheater(inox);
    bms.addCity(bangalore);

    cout << "BookMyShow setup done!" << endl;
    return 0;
}