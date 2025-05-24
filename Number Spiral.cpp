
#include <iostream>
using namespace std;

int main(){
    long long t; //número de testes
    cin >> t; 
     
    while(t > 0){ 
        long long x, y; 
        cin >> x >> y; 
           
        long long n; //Estará dentro do quadrado n*n
        if(x > y){ //Estará na coluna a direita
            n = x;
        } 
        else{ //Estará na linha de baixo
            n = y;
        }  
          
        long long value; 
        //Se n é par começa no canto superior direito e desce; se for impar começa no canto inferir esquerdo e sobe
        if(n%2 == 0){ //Par
            if(x == n){ 
                value = (n * n) - y + 1; //Vai da direita para a esquerda
            } 
            else{ //x == n vai de cima para baixo
                value = (n - 1)*(n - 1) + x;
            }
        } 
        else if(n%2 != 0){ //Impar
            if(y == n){ //Vai da esquerda para a direita
                value = (n * n) - x + 1;
            } 
            else{ //x == n vai de baixo para cima
                value = (n - 1)*(n - 1) + y;
            }
        }
          
        cout << value << "\n";
        t--;
    }
}
