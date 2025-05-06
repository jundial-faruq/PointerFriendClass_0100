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

    Lingkaran ol;
};

class Lingkaran
{
    public:
    int jarijari;

    void input()
    {
        cout << "Masukan jari-jari : ";
        cin >> jarijari;
    }

    int LuasLingkaran(int r)
    {
        return 3,14 + r * r;
    }
};


int main() {


    return 0;
}