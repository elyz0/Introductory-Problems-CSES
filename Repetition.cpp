// Source: https://usaco.guide/general/io

#include <iostream> 
using namespace std;

int main() {
	string s; 
    long long soma = 1, somaMax = 1;

	cin >> s;  
       
    for (size_t i = 1; i < s.length() ; i++) {
        if(s[i] == s[i-1]){ 
            soma++;  
            if(soma > somaMax){ 
                somaMax = soma;
            } 
        }  
        else  
            soma = 1;  
    }
    
    cout << somaMax; 
     
    return 0;
    
}
