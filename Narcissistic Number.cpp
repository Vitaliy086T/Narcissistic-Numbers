#include <iostream>
#include <cmath>
using namespace std;

void count(int a){
    int n = 0, temp = a, sum = 0, b = a; //n - количество цифр, temp - разделитель цифр
    for (n = 0; a > 0; n++){
        a = a / 10;
    }
    int array[n] = {};
    for(int i = 0; i < n; i++){
        array[i] = temp % 10;
        temp/= 10;
        sum += pow(array[i], n);
    }
    if(sum == b){
        cout << sum << endl;
    }
}

int main(){
    for(int i = 10; i < 10000; i++){
        count(i);
    }
    return 0;
}