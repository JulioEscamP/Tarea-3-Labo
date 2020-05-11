#include <iostream>
using namespace std;

int main (){
    double nm1=0.0,nm2=0.0,nm3=0.0;
    cout << "Ingrese los 3 numeros que desee promediar: "<<endl;
    cin >>nm1>>nm2>>nm3;
    double prom = (nm1+nm2+nm3)/3;
    cout << "Su promedio es: "<<prom<<endl;

return 0;
}
