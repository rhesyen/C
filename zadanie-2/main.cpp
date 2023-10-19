#include <iostream>
using namespace std;

int sum (int arg1, int arg2) {
    static int count = 0;
    count += 1;
    cout << count << endl;
    return arg1 + arg2;
}

int main() {
    sum(1,2);
    sum(2,3);
    return 0;
}
