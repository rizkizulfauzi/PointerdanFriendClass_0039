#include <iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void showNIM(){
        cout <<"No Induk ="<< nim <<endl;
    }
};

int main(){
mahasiswa mhs{1};//Object mhs
mhs.showNIM();
}
