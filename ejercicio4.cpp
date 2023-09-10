#include <iostream>

using namespace std;

int main(){
    float num1, num2,result;
    char operacion;
    
    
    cout<<"ingrese un numero" << "\n" ;
    cin>>num1;
    cout<<"ingrese un numero" << "\n" ;
    cin>>num2;
    cout<<"ingreseque operacion deseas realizar: +  -  *  /  ";
    cin>>operacion;
    switch(operacion){
        case '+':result= num1 + num2; break;
        case '-': result= num1- num2; break;
        case '*':result=num1 * num2; break;
        case '/':result=num1 / num2; break;
        default: cout<< "ingreso un caracter no valido ";
    }
    cout<<result;
   
        return 0;
}

