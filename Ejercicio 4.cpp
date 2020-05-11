#include <iostream>
using namespace std;
int main(){
    string nom;
    double prec=0.0, cant=0.0, tot;
cout << "¿Cual es el nombre del producto?"<<endl;
cin >> nom;
cout << "¿Cual es su precio?"<<endl;
cin >> prec;
cout << "¿Cuantos compro?"<<endl;
cin >> cant;
tot=(cant*prec);
cout<<"Checkout:"<<endl;
cout<<"Producto: "<<nom<<endl;
cout<<"Cantidad: "<<cant<<endl;
cout<<"Total: "<<tot<<"$"<<endl;

    return 0;
}
