#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a = 1.0;
    double b = 1.201;
    const double PI = acos(-1.0);
    
    double angle = (a + b) * (PI / 10.0);
    double term1 = 0.7 * log(a / b) * pow(sin(angle), 2);
    double term2 = 0.8 * log(b / a) * pow(cos(angle), 2);
    
    double y = pow(term1 + term2, 1.5);
    
    cout << "Variant 20: y = " << y << endl;
    
    return 0;
}
