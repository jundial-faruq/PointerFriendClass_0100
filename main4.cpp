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

int main(){

    return 0;
}