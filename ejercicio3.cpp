
#include <iostream>

using namespace std;

int main(){
    int hijo, edades,subEscolar,subTotal,subMadre, subsidio=0;
    char madre[10];
    
    do{
    cout<<"ingrese cuantos hijos tiene acargo" << "\n" ;
    cin>>hijo, edades;
        
    }  while(hijo<0);
    if(hijo==0){
        cout<<"usted no puede hacer parte del programa porque no tiene hijos, ponganse a hacer chinos " << endl;
    }
    if(hijo==1 || hijo==2){
        subsidio=70000;
    } else if(hijo>=3 && hijo<=5){
        subsidio=90000;
    }else if (hijo>=6){
        subsidio=120000;
    }
    cout<<subsidio << endl;
    do{cout<<"cuantos hijos tiene en edad escolar entre 6 y 18 años \n";
    cin>>edades;} while(edades<0);
    if(edades==0){ 
        subsidio=subsidio;
        cout<<"usted no tiene subsidios adicionales, conformece con "<<subsidio;}
    if (edades>hijo){
        cout<<"usted esta tratando de estafarnos no nos joda, conformese con "<<subsidio;
            return 0;
    
    }
    if(edades>0){ 
        subEscolar=edades*10000;
        subTotal=subEscolar+subsidio;
        
        cout<<"felicitaciones, por tener  "<<edades<<"   hijos  en edad escolar tiene un subsidio total de "<<subTotal<<"\n";
    }
    cout<<"la madre es viuda";
    cin>>madre;
    if(madre=="no"){
        cout<<"no tiene subsidios adicionales conformese con "<<subTotal;
        
        
    }else{
         subTotal=subTotal+20000;
        cout<<"felicidades por ser viuda, tiene un subsidio de :  "<<subTotal;
        
        
    }

      
   
        return 0;
}


