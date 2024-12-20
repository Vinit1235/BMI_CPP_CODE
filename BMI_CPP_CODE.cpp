#include <iostream>
using namespace std;
double bmi(double h , int m){
    return m/(h*h);
}
int main() {
double h;
int m;
cout<<"Enter Height h and Mass m"<<endl;
cin>>h>>m;
double Bmi = bmi(h ,m);
cout << "The bmi is "<<Bmi<<endl;
return 0;
} 
