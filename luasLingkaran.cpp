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


float LuasLingkaran(float a){
    return 3.14159 * a * a;
}

void output(){
    cout << "hasil  : " << LuasLingkaran(r);
}

int main(){
    input();
    output();
}
