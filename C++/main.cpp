//convert,reduce a fraction to lowest terms
#include<iostream>
using namespace std;

bool convertLowT(int &n, int &d);

int main(){
    int num, den;
    
    cout << "Numerator: ";
    cin >> num;
    cout << "Demonator: ";
    cin >> den;
    
    if(convertLowT(num, den)){
        cout << num << "/" << den<< endl;
    }
    else
        cout << "Try again.";
    return 0;
}
//greatest common divisor for the numerator and denominator
bool convertLowT(int &n, int &d){
    int gcd = d;
    if(d == 0)
        return false;
    if(gcd > n)
        gcd = n;
    while(n % gcd != 0 || d % gcd != 0)
        gcd--;
    n /= gcd;
    d /= gcd;
    return true;
}
