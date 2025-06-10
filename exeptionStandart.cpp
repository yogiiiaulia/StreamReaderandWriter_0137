#include <iostream>
#include <exception>
//untuk objek exception yang akan di gunakan
#include <array>
//untuk objek array yang akan kita gunakan
using namespace std;

int main() {
    cout << "Awal Program" << endl; //penanda 1:...
    try {
        array<int, 3> data = {10, 20, 30};
        //pesan array intejer 3 element
        cout << data.at(5) << endl;
        //memanggil array element ke 5
    }
    catch (exception& e) {
        //penangkap menggunakan obyek eception
        cout << e.what() << endl;
        /*akan dieksekusi karena array data hanya memiliki 3 element*/
    }
}