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

    int luasLingkaran(int r)
    {
        return 3,14 + r * r;
    }
};


int main() {
    PersegiPanjang objekPp; //membuat objek
    Lingkaran ol;

    cout << "Masukan Panjang : ";
    cin >> objekPp.panjang;
    cout << "Masukan Lebar ; ";
    cin >> objekPp.lebar;
    cout << "Luas Persegi Panjang : " <<
    objekPp.luasPp(objekPp.panjang, objekPp.lebar) << endl;


    return 0;
}