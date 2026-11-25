#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a = 4.0;
    double b = 300.1;
    
    double part1 = (1.0 + pow(cos(a), 2)) * (1.0 - cos(b));
    double part2 = 0.711 * log(pow(a + b, 3));
    double exponent = part1 + part2;
    
    double y = 7.2 * pow(a + b, exponent);
    
    cout << "Variant 15: y = " << y << endl;
    
    return 0;
}
