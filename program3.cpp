#include<iostream>
using namespace std;

class car{
    public:
      string brand;
      void start(){
        cout <<brand<<"car started!"<<endl;
         }
};

int main(){
    car c1,c2;
    c1.brand="toyota";
    c2.brand="benz";
    c1.start();
    c2.start();
    return 0;
}