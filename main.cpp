#include <iostream>
#include "arquivo teatro.h"
#include <cstdlib>

using namespace std;

int main() {
setlocale(LC_ALL, "Portuguese");
  
  
cout << "**Seja bem vindo ao teatro!**" << endl << endl;
int t; //tamanho do vetor
cout<<"Digite a quantidade de assentos:";
cin>>t;  
ListaLinear<int> lista(t); 
int entrada;  
int a;  


do{  
//menu   
cout << "1 - Comprar Ingresso." << endl;
cout << "2 - Devolução de ingresso." << endl;
cout << "3 - Exibe." << endl; 
cout << "9 - Sair.\n" << endl << endl;

cout << "Digite uma opção: " ; 
cin >> entrada;

switch(entrada){
  case 1: 
    if(lista.lotado()){
    cout<<"Assentos Lotados." << endl << endl;
  } 
  else {
    cout<<"Digite a posição do assento que deseja comprar:";
    cin>>a; 
    lista.compra(a);
    cout<<"Compra realizada com sucesso!" << endl << endl;
  }  break;
  case 2:
    if(lista.vazio()){
    cout<<"Nenhum assento foi ocupado." << endl << endl;
  } 
  else {
    cout<<"Ingresso Devolvido: "<< lista.ultimoassento()<< endl;
    lista.devolve();
  }  break;
  case 3:
    if(lista.vazio()){
      cout<<"Nenhum assento foi ocupado." << endl << endl;
  }
    else{
     cout<<"Assentos ocupados: ";
     for(int i=0; i<=lista.p; i++ ){
       cout<<lista.lista[i]<< " ";
     }  
      cout<<endl;
  }  break;
  case 9: cout <<"Compra finalizada. Volte sempre!" << endl; return 0;
 //default: cout<<"Opção invalida!!!"<<endl<<endl;
  break;
}
  
}while(entrada != 9);

    return 0;
}


