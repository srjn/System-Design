#include <iostream>
#include <string>
using namespace std;

class God{   
public:
    string superpower="energy";
};

//Human class inheriting from God
class human: public God{
public:
    string name;
    int age;
    string feelings;
    // string superpower;

    human(string name, int age, string feelings){
        this->name = name;
        this->age = age;
        this->feelings = feelings;
        // this->superpower = superpower;
    }
};

// Function to verify if the object is a human being
void Verify(human h){
        if(h.feelings=="Yes" and h.age>0){
            cout<<endl<<"You Are a Human Being"<<endl;
        }
        else{
            cout<<"Invalid input"<<endl;
        }
    }

// Client code
int main(){
    string name;
    int age;
    string feelings;

    cout<<"Enter name: ";
    getline(cin, name);         
    cout<<"Enter age: ";
    cin>>age;                   
    cout<<"Enter feelings: Yes/No ";
    cin>>feelings;
    human h(name, age, feelings);
    
    Verify(h);

    return 0;
}