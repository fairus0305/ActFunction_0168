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
float LuasLingkaran(float a){
    return 3.14159 * a * a;
}
//output
void output(){
    cout << "hasil  : " << LuasLingkaran(r);
}
//program utama
int main(){
    input();
    output();
}
