#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang
{
private:
    string nama;
public:
    void setNama (string pNama);
    friend class siswa;
};

class siswa
{
private:
    int Id;

public:
    void setId(int pId);
    void displayAll(orang &a);
};

void siswa::displayAll(orang&a)
{
    cout << Id << endl << a.nama;
}

void orang::setNama(string pNama) 
{
    nama = pNama;
}
void siswa::setId(int pId)
{
    Id = pId;
}

int main(){
    orang joko;
    joko.setNama("Joko Susilo");
    siswa joko_siswa;
    
    return 0;
}