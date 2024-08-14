// Program 01
#include<iostream>
using namespace std;

int main(){
    int a=5;

    
    (++a); // Incremented by one, and then use
    cout << a; // 6
    cout<<(a++); // first use = 5, then incremented by one = 6
    cout<<(++a); // Incremented by one, and then use = 6
    cout<<(--a)*10; // first decremented by one = 9, and then use = 90
    cout<<(a--)*10; // first use = 100 , and then decremented by one = 9

     // shifting bits towards right bit time
    int bit=2;int num=-5;
    // Bitwise right shift
    cout<<(num>>bit); // -3


    unsigned int num=-5;
    // shifting bits towards right bit time
    int bit=1;

    // Bitwise right shift
    cout<<(num>>bit); // 2147483645

    return 0;
}

