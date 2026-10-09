#include<iostream>
using namespace std;
int mul(int a, int b) {
    return a * b;
}
int div(int a, int b) {
    if (b == 0) {
        cout << "error" << endl;
        return 0;
    }
    return a / b;
}