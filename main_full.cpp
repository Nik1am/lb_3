#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x, y;
    cout << "x = ";
    cin >> x;
    if(x <= -2){
        y = 4 * pow(x, 2) + 2 * x;
    }
    else if(-2 <= x && x < 3){
        y = 2 * x - 1;
    }
    else {
        y = pow(x,3) + 3;
    }
    cout << "y = " << y;
}