// Source: https://usaco.guide/general/io

#include <iostream> 
using namespace std;

int main() { 
    
    long long n;  
    cin >> n; 

    long long s[n], soma = 0;
	
    for (int i = 0; i < n; i++) {
        cin >> s[i];  // Lê um número e armazena na posição 'i' do array
    } 

    for (int i = 1; i < n ; i++) {   
        if(s[i] < s[i-1]){ 
            soma += s[i-1] - s[i]; 
            s[i] = s[i-1];
        }   
    }
    
    cout << soma; 
     
    return 0;
    
}
