#include<iostream>
using namespace std;
int another_func();
int main (){
    int sum = 0;
    for (int val = 1; val<= 10; val++)
    {
        sum = sum + val;
    }
    cout << " The sum of 1 to 10 inclusive is " << sum << endl;
    another_func();
    return 0;
}
int another_func(){
    cout << "This is another function outside main" << endl ;
    cout << "sum = "<< sum << endl;
    return 0;
}