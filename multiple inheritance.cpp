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


class car{                           // multiple inhertance
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


class black : public vehicle, public car{  
    string model;
    public:
    black();
    
    ~black();
};
black::black(){
    cout << "black car available" << endl;
    color = "Black";
    cout << "color is " << color << endl;
}
black::~black(){}

int main()
{
    
    black black1;



}
