#include<bits/stdc++.h>
using namespace std;

class User{
    public:
    string name;
    // string email;
    // int mobileNo;

    User(string name){//, string email, string mobileNo){
        this->name=name;
        // this->email=email;
        // this->mobileNo=mobileNo;
    }
};

enum Status {
    DELAY, ONTIME, CANCELLED
};

class Airline{
    public:
    string name;
    //vector<Flight> flights;

    Airline(){};

    Airline(string name){
        //, vector<Flight> flights){
        this->name=name;
        //this->flights=flights;
    }
};

class Seat{
    public:
    int seatNo;
    string className;

    Seat(int seatNo, string className){
        this->seatNo=seatNo;
        this->className=className;
    }
};

// class Flight{
//     public:
//     int number;
//     Airline company;
//     //int seatCapacity;
//     // vector<Seat> seats;
//     // vector<Schedule> schedule;

//     Flight(int number, Airline company){
//         this->number=number;
//         this->company=company;
//     }
// };

class Flight {
public:
    int number;
    Airline company;
    Flight(int number, Airline company) : number(number), company(company) {}
};

class Airport{
    public:
    string name;
    string location;
    //vector<Flight> flights;

    Airport(string name, string location){
        this->name=name;
        this->location=location;
    }
};

// class Schedule{
//     public:
//     Flight flight;
//     Airport start;
//     Airport end;
//     // clock start;
//     // clock end;
//     // Status status;

//     Schedule(Flight flight, Airport start, Airport end){
//         this->flight=flight;
//         this->start=start;
//         this->end=end;
//     }
// };


class Schedule {
public:
    Flight flight;
    Airport start;
    Airport end;
    Schedule(Flight flight, Airport start, Airport end)
        : flight(flight), start(start), end(end) {}
};

class App{
    public:
    App(User user, Airline airline, Schedule schedule, Seat seat){
        cout<<"FLIGHT IS BOOKED"<<endl;
        cout<<"Name : "<<user.name<<endl;
        cout<<"From Airport : "<<schedule.start.location<<" To Airport : "<<schedule.end.location<<endl;
        cout<<"Airline : "<<airline.name<<" "<<"Flight Number : "<<schedule.flight.number<<endl;
        cout<<"Seat Number : "<<seat.seatNo;
    }
};



int main(){
    User user("srijan");
    Airline airline("INDIGO AIRLINES");
    Seat seat(1, "economy");
    Flight flight(100, airline);
    Airport dep("PAT AIRPORT", "PATNA" );
    Airport air("BLR AIRPORT", "BANGALORE");
    Schedule schedule(flight, dep, air);

    App(user, airline, schedule, seat);

    return 0;
}