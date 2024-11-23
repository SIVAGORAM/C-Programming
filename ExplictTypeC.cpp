#include<iostream>

using namespace std;

int main(){

    float a = 2.6;

    int i = 10;

    i = (int)a; /* Coverting FLoat Value into int value using Explict Type COnversion Operater (int) */

    cout<<i<<endl;

    cout<<3/2<<endl;
    cout<<3.0/2<<endl;
    cout<<3/2.0<<endl;
    cout<<(float)3/2<<endl; /* Here (float) is the Explict Type conversion Operater*/
    
    float o = 0;
    int m = 10;
    int n = 3;

    o = (float)10/3; /* Manually we are changing the Type Conversion using the (float) befor the Operation*/

    cout<<o<<endl;
} 