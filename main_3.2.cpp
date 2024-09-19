#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, x, y, z, ln_a;
    a = 0.1;
    b = 3.25;

    cout << "x = ";
    cin >> x;
    
    z = pow(cos(x),2);
    ln_a = log(a);
    
    if(x < ln_a){
        y = a * pow(sin(x), 2) + cos(z * x);
    }
    else if(ln_a <= x && x <= b){
        y = pow(cos(a + z * x), 3);
    }
    else { //x > b
        y = sqrt(2.5 * pow(a, 3) + pow((b - z * pow(x, 2)), 6));
    }
    cout << "y = "<<y << " a = "<<a << " b = "<<b << " z = "<<z;
}
