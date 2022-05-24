//
// Created by studentloaner on 5/3/2022.
//
#include <iostream>
using namespace std;

class Count{
    friend void setX(Count &,int);

public:
    Count()
    :x(0){

    }
    void print() const{
        cout<<x<<endl;
    }
private:
    int x;
};

