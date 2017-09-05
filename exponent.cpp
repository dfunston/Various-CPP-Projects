#include <iostream>

using namespace std;

float negpow(int base, int exp){
    float result = 1;
    for(int i = -1; i >= exp; i--){
        cout << result << "\n";
        result /= base;
    }
    return result;
}

int pow(int base, int exp){
    int result = base;
    if(exp == 0){
        result = 1;
    }else if(exp < 0){
        float negResult;
        negResult = negpow(base, exp);
        return negResult;
    }else{
        for(int i = 2; i <= exp; i++){
            result *= base;
        }
    }


    return result;
}

int main(){
    int input;
    int exponent;
    cin >> input >> exponent;
    if(exponent < 0){
        cout << negpow(input, exponent) << "\n";
    }else{
        cout << pow(input, exponent) << "\n";
    }

    return 0;
}
