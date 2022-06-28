#include <iostream>
using namespace std;
int main (){
    int count = 0 , sum  = 0 , val;
    cout << "Enter the number upto which sum has to be calculated";
    cin >> val;
    while(count<=val){
        sum += count;
        count = count +1;

    }
    cout<< " Sum of the numbers upto " << val << " is " << sum << endl;
    return 0;

} 