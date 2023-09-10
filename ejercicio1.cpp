#include <iostream>

using namespace std;

int main()
{
    int hora, hora2, minuto, minuto2, segundo, segundo2, resultHora, resultMinuto, resultSegundo;
    cout<<"ingrese cuantas horas tardo en recorrer el primer atleta \n";
    cin>>hora;
    cout<<"ingrese cuantos minutos tardo en recorrer el primer atleta \n";
    cin>>minuto;
    cout<<"ingrese cuantos segundos tardo en recorrer el primer atleta \n";
    cin>>segundo;
    
    cout<<"ingrese cuantas horas tardo en recorrer el segundo atleta \n";
    cin>>hora2;
    cout<<"ingrese cuantos minutos tardo en recorrer el segundo atleta \n";
    cin>>minuto2;
    cout<<"ingrese cuantos segundos tardo en recorrer el segundo atleta \n";
    cin>>segundo2;
    resultHora=hora+hora2;
    resultMinuto=minuto+minuto2;
    resultSegundo=segundo+segundo2;
    if(resultSegundo>=60){
        resultMinuto=resultMinuto+1;
        resultSegundo=resultSegundo-60;
    }
    if(resultMinuto>=60){
        resultHora=resultHora+1;
        resultMinuto=resultMinuto-60;
    }
    cout<<"el tiempo total utilizando por ambos atletas es de "<<resultHora<<" : "<<resultMinuto<<" : "<<resultSegundo;

    return 0;
}

