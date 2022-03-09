#include <iostream>
#include <math.h>
using namespace std;
const float a = 0.6843203426;
int main(){
    double n,p,k;
    for(int i = 0 ; i < 11 ; i++ ){ // i chạy từ 0 đến 10
        k = exp(i); // k = e mũ i
        for(int j = 0 ; j < 11 ; j++ ){ // j chạy từ 0 đến 10
            n = exp(j*a); // n = e^(j.a)
          //  cout << n/k << " "; // tính n / k
            if(abs(n/k - 64) < pow(10,-5)){ 
                cout << i << " " << j << " ";
                for(int t = 0; t < 11; t++){
                    if(abs(n/k - pow(4,t)) < pow(10,-5)){
                        cout << t << " "; 
                    }
                }
            }
        }
    }
}
