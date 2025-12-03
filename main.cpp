#include <iostream>
#include <string>
using namespace std;

void salamVer() {
    string ad;
    cout << "Adinizi daxil edin: ";
    getline(cin, ad); 
    cout << "Salam, " << ad << "!" << endl;
}

int main() {
    salamVer()
    return 0;
}
