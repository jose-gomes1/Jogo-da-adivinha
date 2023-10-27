#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>

using namespace std;

 int main(){
    string nome;
    cout << "Digite o seu nome: ";
    cin >> nome;
        int num=0;
        srand((unsigned) time (0));
        int numSorte= 1+(rand()%100);
        int tries=0;
        tries++;
        while (numSorte != num)
        {
            cout << "Qual o número da sorte?" << endl;
            cin >> num;
            tries++;
            if(numSorte > num){
                cout << "O número da sorte é maior que " << num << ". Tenta novamente" << endl;
            }else if(numSorte < num){
                cout << "O número da sorte é menor que " << num << ". Tenta novamente" << endl;
            }else{
                cout << "Parabéns, " << nome << "! Acertaste o número, em " << tries - 1 << " tentativas" << endl;
            }
            
        }
        cout << "Acabou o jogo" << endl;
    
        return 0;   
    }
