#include <iostream>
using namespace std;

double hesabla(int a) {
double s=3.14567*a*a;

return s;
}

int main() {
    int x;
    cin >> x;

    double k=hesabla(x);
cout<<k;
    return 0;
}
