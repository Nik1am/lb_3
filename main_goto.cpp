#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x, y;
    cout << "x = ";
    cin >> x;
    
    if(x <= -2) goto case_1;
    if(-2 <= x && x < 3) goto case_2;
    if(x >= 3) goto case_3;

case_1:
    y = 4 * pow(x, 2) + 2 * x;
    goto lb_end;
case_2:
    y = 2 * x - 1;
    goto lb_end;
case_3:
    y = pow(x,3) + 3;
    goto lb_end;

lb_end:
    cout << "y = " << y;
}
