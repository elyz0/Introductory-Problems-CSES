// Source: https://usaco.guide/general/io

#include <iostream> 
using namespace std;

int main() {
	long long n; 
    long long soma = 0, x; 

	cin >> n;  
     
    for(int i = 1; i <= n; i++){  
        soma += i; //Soma todos os números de 1 a N
    }
       
    for (int i = 1; i <= n - 1; i++) {
        cin >> x;
        soma -= x;  //Subtrai cada número da soma total
    }
    
    cout << soma; 
     
    return 0;
    
}
