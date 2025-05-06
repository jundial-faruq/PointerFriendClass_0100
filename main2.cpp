#include <iostream>
using namespace std;
class mahasiswa{
    public: 
    int nim;
    void showNim(){
        cout << "No induk = " << nim << endl;
    }
        
};

int main (){
    mahasiswa mhs{1}; //objek mhs
    mhs.showNim(); // Member Acces Oprator

    mahasiswa &refMhs = mhs; //Pointer Reference refMhs
    refMhs.nim = 2; //Member acces Oprator
    mhs.showNim();

    mahasiswa *pMhs = &mhs; //pointerDeference pMhs
    pMhs->nim = 3; //Arrow Oprator
    pMhs->showNim();
    return 0;
}