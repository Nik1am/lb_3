#include <iostream>
#include <cmath>

using namespace std;

int main(){
    setlocale(0,".1251");
    int a, b, c;
    cout << "Enter sides A B C";
    cin >> a >> b >> c;
    
    if ((a + b) < c) {
        cout << "Side C(" << c << ") is too long!" << endl;
    }
    else if ((b + c) < a){
        cout << "Side A(" << a << ") is too long!" << endl;
    }
    else if ((c + a) < b){
        cout << "Side B(" << b << ") is too long!" << endl;
    }
    else { 
        cout << "The triangle with sides " << a << " " << b << " " << c << " can be built." << endl;
    }
}
