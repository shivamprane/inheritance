#include<iostream>
using namespace std;

class vehicle
{
protected:
    string color;
public:
    vehicle();
    ~vehicle();
};

vehicle::vehicle()
{
    cout << "vehicle" << endl;
    color = "RED";
    cout << "Color is " << color << endl;
}

vehicle::~vehicle()
{
}

class car: public vehicle{                           // single inhertance
    string model;
    public:
    car();
    ~car();

};

car::car()
{
    cout << "Car" << endl;
}
car::~car(){}

int main()
{
    
    
    car car1;



}
