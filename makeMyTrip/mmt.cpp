#include<bits/stdc++.h>
using namespace std;

class User{
    public:
    string name;
    string email;
    int mobileNo;

    User(string name, string email, string mobileNo){
        this->name=name;
        this->email=email;
        this->mobileNo=mobileNo;
    }
};

class Airline{
    public:
    string name;
    vector<Flight> flights;

    Airline(string name, vector<Flight> flights){
        this->name=name;
        this->flights=flights;
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

class Flight{
    public:
    int flightNo;
    Airline company;
    int seatCapacity;
    vector<Seat> seats;
    vector<Schedule> schedule;
};

class Schedule{
    public:
    Flight flight;
    Airport Start;
    Airport end;
    clock start;
    clock end;
    Status status;
};

class Airport{
    public:
    string name;
    string location;
    vector<Flight> flights;
};

enum Status {
    DELAY, ONTIME, CANCELLED;
};


class App{
    private:
    App(User user, Airport airport, Airline airline, Flight flight, Seat seat){
        cout<<"FLIGHT IS BOOKED"<<endl;
        cout<<"Name : "<<user.name<<" "<<"Email : "<<user.email<<" "<<"Mobile : "<<user.mobileNo<<endl;
        cout<<"Airport : "<<airport.location<<endl;
        cout<<"Airline : "<<airline.name<<" "<<"Flight Number : "<<flight.flightNo<<endl;
        cout<<"Seat Number : "<<seat.seatNo;
    }
};



int main(){
    User user();
    return 0;
}