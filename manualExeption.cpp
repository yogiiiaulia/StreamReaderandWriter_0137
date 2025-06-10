#include <iostream>
using namespace std;

int main()
{
    try {
        cout << "Selamat Belajar di prodi TI UMY" << endl;
        throw 0.5; //melemparkan sebuah integer maka
        cout << "Pertanyaan tidak akan dieksekusi" << endl;
    }
    catch (int a) {
        //blok ini akan dieksekusi
        cout <<"Pengecualian akan di eksekusi" << endl;
    }
    catch (...) {
        /*jika selain integer makan block ini akan di eksekusi*/
        cout << "Default Pengecualian dieksekusi" << endl;
    }
}