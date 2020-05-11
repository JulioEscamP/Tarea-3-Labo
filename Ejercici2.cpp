#include <iostream>
#include <math.h>
using namespace std;
int main(){
double r,prm,area;
    cout<< "Introduzca el valor del radio del circulo: "<< endl;
    cin>>r;
    prm =2*3.1416*r;
    cout<< "El perimetro del circulo es: "<< prm << endl;
    area= 3.1416*(pow(r,2));
    cout<< "El valor del area del circulo es: "<<area<<endl;
return 0;
}
