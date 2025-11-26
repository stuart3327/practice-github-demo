#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b; cout << a << " " << b;
    int tong = a + b;
    int hieu = a - b;
    int tich = a * b;
    float thuong = 1.0*a / b;
    int du = a % b;
    cout << tong << " " << hieu << " " << tich << " " << thuong << " " << du << endl;
    cout << "Cuoi cung cung biet lam" << endl;
    return 0;
}
