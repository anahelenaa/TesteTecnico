#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char input[100];
    char output[] = {};

    cin.getline(input, 100);

    for(int i = strlen(input); i >= 0; i--) {
        cout << input[i];
    }
}