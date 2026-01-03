#include <bits/stdc++.h>
using namespace std;

class Agent {
    public:
    string name;
    string mob;

    Agent(string name, string mob) : name(name), mob(mob) {}
};

class User {
    public:
    string name;
    string mob;
    string address;

    User(string name, string mob, string address) : name(name), mob(mob), address(address) {}
};

class Item {
    public:
    string name;
    int price;

    Item(string name, int price) : name(name), price(price) {}
};

class Restorant {
    public:
    string name;
    int rating;
    vector<Item> items;

    Restorant(string name, int rating, vector<Item> items) : name(name), rating(rating), items(items) {}
};

class Order {
    public:
    User user;
    Item item;
    Restorant restorant;

    Order(User user, Item item, Restorant restorant) : user(user), item(item), restorant(restorant) {}
};
    

class App {
    public:
    App(Order order, Agent agent){
        cout<<"ORDER COMPLETED, THESE ARE THE DETAILS : "<<endl;
        cout<<"Name of Customer : "<<order.user.name<<endl;
        cout<<"Mobile Number of Customer : "<<order.user.mob<<endl;
        cout<<"Item Ordered : "<<order.item.name<<endl;
        cout<<"From Restorant : "<<order.restorant.name<<endl;;
        cout<<"Delivery Agent Name is :"<<agent.name<<endl;
        cout<<"Delivery Agent Mobile Number is :"<<agent.mob<<endl;
    }
};

int main(){
    Agent agent("alice", "12345");
    User user("Srijan", "9934782343", "Bangalore");
    Item item1("Biryani", 350);
    Item item2("Gulab Jamun", 50);
    Restorant restorant("XYZ", 5, {item1, item2});
    Order order(user, item1, restorant);

    App(order, agent);

    return 0;
}