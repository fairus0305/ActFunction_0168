//libary
#include <iostream>
using namespace std; 

//deklarasi variabel
float r;

void input(){
    cout << "masukan r :";
    cin >> r;
}

float LuasLingkaran(float a){ 
    return a * a * 3.14159 ;
}

void output(){
    cout << "hasil  : " << LuasLingkaran(r);
}


