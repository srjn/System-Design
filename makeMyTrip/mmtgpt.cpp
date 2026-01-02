#include <bits/stdc++.h>
using namespace std;

class User {
public:
    string name;
    User(string name) {
        this->name = name;
    }
};

enum Status {
    DELAY, ONTIME, CANCELLED
};

class Airline {
public:
    string name;
    Airline(string name) {
        this->name = name;
    }
};

class Seat {
public:
    int seatNo;
    string className;
    Seat(int seatNo, string className) {
        this->seatNo = seatNo;
        this->className = className;
    }
};

class Flight {
public:
    int number;
    Airline company;
    Flight(int number, Airline company) : number(number), company(company) {}
};

class Airport {
public:
    string name;
    string location;
    Airport(string name, string location) {
        this->name = name;
        this->location = location;
    }
};

class Schedule {
public:
    Flight flight;
    Airport Start;
    Airport end;
    Schedule(Flight flight, Airport Start, Airport end)
        : flight(flight), Start(Start), end(end) {}
};

class App {
public:
    App(User user, Airline airline, Schedule schedule, Seat seat) {
        cout << "FLIGHT IS BOOKED" << endl;
        cout << "Name : " << user.name << endl;
        cout << "From Airport : " << schedule.Start.location
             << " To Airport : " << schedule.end.location << endl;
        cout << "Airline : " << airline.name
             << " Flight Number : " << schedule.flight.number << endl;
        cout << "Seat Number : " << seat.seatNo << endl;
    }
};

int main() {
    User user("srijan");
    Airline airline("INDIGO AIRLINES");
    Seat seat(1, "economy");
    Flight flight(100, airline);
    Airport dep("PAT AIRPORT", "PATNA");
    Airport arr("BLR AIRPORT", "BANGALORE");
    Schedule schedule(flight, dep, arr);

    App(user, airline, schedule, seat);

    return 0;
}