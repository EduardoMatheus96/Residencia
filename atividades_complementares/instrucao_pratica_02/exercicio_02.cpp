#include <iostream>
using namespace std;

int main(void) {
    int i = 0;
    char caracter = '0';
    while(i != 10){
        cout << " ' " << i << " ' " << " - " << static_cast<int>(caracter + i) <<endl;
        i++;
    };
    return 0;
}