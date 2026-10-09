#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int mul(int a, int b) {
    return a * b;
}
int div(int a, int b) {
    if(b == 0) {
        cout << "除数不能为0" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    int a, b;
    char it;
    cout << "请输入算式";
    cin >> a >> it >> b;
    int res;
    switch(it) {
        case '+': res = add(a,b); break;
        case '-': res = sub(a,b); break;
        case '*': res = mul(a,b); break;
        case '/': res = div(a,b); break;
        default: cout << "不是四则运算符" << endl; return 1;
    }
    cout << "结果: " << res << endl;
    return 0;
}