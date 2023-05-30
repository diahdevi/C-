/* 
memasukkan sebuah angka lalu hitung berapa kali angka 1 muncul
example : cin >> 10;  ,  maka cout << 2;
10 , binernya adalah 1010, angka 1 muncul 2 kali
*/


#include <iostream>
using namespace std;

int main() {
    int angka, i;
    cin >> angka;
    i = 0;
    
    while(angka > 0) {
        if(angka % 2 == 0) {
            angka /= 2;
        } else {
            angka /= 2;
            i ++;
        }
    }
    
    cout << i;
}
