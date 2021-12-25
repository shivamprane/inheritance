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

class car : public vehicle{                            // Hierarchical Inheritance
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


class black : public vehicle{  
    string model;
    public:
    black();
    ~black();
};
black::black(){
    cout << "black car available" << endl;
}
black::~black(){}

int main()
{
    
    black black1;



}
