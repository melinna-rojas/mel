#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string.h>
using namespace std;
struct Cafe{
char producto[30];
double precio,monto, vuelto;
};


int main(){
Cafe coffe[100];
int opc;
char r;
char op;
int i=0;
do{
   cout<<"## \t  MELINNA'S COFFE\t##"<<endl;
  cout<<endl;
  cout<<"***********************************"<<endl;
 cout<<"1. Seleccionar producto"<<endl;
  cout<<"2. Pagar y dar vuelto"<<endl;
  cout<<"3. Salir"<<endl;
  cout<<"\tSeleccione opcion: ";cin>>opc;
system("CLS");
switch (opc){
case 1:
    cout<<"## \t  MELINNA'S COFFE\t##"<<endl;
  cout<<endl;
    cout <<"***********************************"<<endl;
    cout <<"a.Cafe\t\t S/.1.00"<<endl;
    cout <<"b.Cafe con leche\t S/.1.50"<<endl;
    cout <<"c.Leche\t\t S/.2.00"<<endl;
    cout <<"Elegir Opcion: ";cin>>op;
    system("CLS");
    switch(op){
    case 'a': strcpy(coffe[i].producto,"Cafe");
                coffe[i].precio=1.0;
                break;
    case 'b': strcpy(coffe[i].producto,"Cafe con Leche");
                coffe[i].precio=1.5;
                 break;
    case 'c': strcpy(coffe[i].producto,"Leche");
                coffe[i].precio=2.0;
                break;
    default : cout <<"Letra incorrecta"<<endl;}
    break;
case 2:
 cout <<"***********************************"<<endl;
cout <<"Precio: "<<coffe[i].precio<<endl;
cout <<"Monto: ";cin>>coffe[i].monto;

if(coffe[i].monto<coffe[i].precio){
    cout<<"Monto insuficiente"<<endl;
    }
else{
    cout<<endl;
    cout <<"PROCESANDO..."<<endl;
    coffe[i].vuelto=coffe[i].monto-coffe[i].precio;
    cout<<endl;

    cout <<"Usted Compro "<<coffe[i].producto<<" de precio S/. "<<coffe[i].precio<<endl;
cout <<"Pago S/."<<coffe[i].monto<<" y su vuelto es S/."<<coffe[i].vuelto<<endl;
}



break;
default : cout<<"Numero incorecto"<<endl;
}


cout <<"¿Desea Continuar? (s/n) ";cin>>r;
system("CLS");
if(r=='n')
    cout<<"GRACIAS POR SU PREFERENCIA, Vuelva pronto."<<endl;
}while(r!='n');

system ("PAUSE");
return EXIT_SUCCESS;
}
