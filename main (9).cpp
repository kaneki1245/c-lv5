#include <iostream>
using namespace std;

void cevir(int saniye) {
    int saat = saniye / 3600;       
    int qalan = saniye % 3600;

    int deqiqe = qalan / 60;           
    int san = qalan % 60;

    cout <<saat << endl;
    cout << deqiqe << endl;
    cout <<  san << endl;
}

int main() {
    int s;
    
    cin >> s;

    cevir(s);

    return 0;
}
