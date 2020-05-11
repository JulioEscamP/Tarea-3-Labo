#include <iostream>
#include <math.h>
using namespace std;
int a,b,c,x1,x2;
int main(){
cout<<"ingrese el primer termino"<<endl;
cin>>a;
cout<<"ingrese el segundo termino"<<endl;
cin>>b;
cout<<"ingrese el tercer termino"<<endl;
cin>>c;
x1=((-1)*b+ sqrt(pow(b,2)-4*a*c))/2*a;
x2=((-1)*b- sqrt(pow(b,2)-4*a*c))/2*a;
cout<<"La respuesta es: "<<x1<<endl <<" La segunda respuesta es: "<<x2 <<endl;
return 0;

}
