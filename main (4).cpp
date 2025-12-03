#include <iostream>
using namespace std;

void hesabla(int a) {
    int kvadrat = a * a;
    int kub = a * a * a;

    cout << kvadrat << endl;
    cout << kub << endl;
}

int main() {
    int x;

    cin >> x;

    hesabla(x);

    return 0;
}
