#include <iostream>
using namespace std;

class PersegiPanjang {
public: // akses modifier
    int panjang, lebar;

public: 
    void input()
    {
        cout << "Masukan Panjang : ";
        cin >> panjang;
        cout << "Masukan Lebar : ";
        cin >> lebar;
    }

    int luasPp(int a, int b)
    {
        return a + b;
    }
};

int main() {


    return 0;
}