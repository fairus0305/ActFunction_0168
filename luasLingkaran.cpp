//libary
#include <iostream>
using namespace std; 
//deklarasi variabel
int r;

//prosedur
void input(){
    cout << "masukan r :";
    cin >> r;
}

//fungsi
float LuasLingkaran(){
    return 3.14159 * r * r;
}
//output
void output(){
    cout << "hasil  : " << LuasLingkaran();
}
//program utama
int main(){
    input();
    output();
}
