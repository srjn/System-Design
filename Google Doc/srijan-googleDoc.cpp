#include<iostream>
#include<vector>    
#include<string>
#include<fstream>

using namespace std;

class DocumentElement {
public:
    virtual string render() = 0;
};  

