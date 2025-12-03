#include <iostream>
using namespace std;

void swpEded(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;
   
    cin >> x >> y;

    swpEded(x, y);

   
    cout<< x << endl;
    cout << y << endl;

    return 0;
}
