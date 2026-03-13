#include <iostream>
using namespace std;

int main(){
    int x;

    srand(time(0));
    x = rand() % 10;

    if (x==5){
        x = x+1;
        cout<<"Nilai x sudah dikoreksi menjadi : "<<x<<endl;
    }

    cout << "Bilangan yang diberikan = "<<x;
} //Program ini akan menghasilkan bilangan acak antara 0 sampai 9, jika bilangan tersebut adalah 5 maka akan dikoreksi menjadi 6.
