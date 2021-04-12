#include <iostream> 
#include <cmath>
using namespace std;

int gcd(int x1, int x2, int *lol);

int main() {
    int lol = 0;
    cout << "gcd between 20 and 25: " << gcd(20,25, &lol) << endl;
    cout << "counter is: " << lol << endl;
    lol = 0;
    cout << "gcd between -89 and -98: " << gcd(-89,-98, &lol) << endl;
    cout << "counter is: " << lol << endl;
    lol = 0;
    cout << "gcd between 54321 and 50: " << gcd(54321, 50, &lol) << endl;
    cout << "counter is: " << lol << endl;
    
}

int gcd(int x1, int x2, int *lol) {
    *lol = *lol + 1;
    int c = x1 % x2;
    
    
    if (c == 0) {
        return abs(x2);
    }
    else {
        gcd(x2, c, lol);
    }
}
