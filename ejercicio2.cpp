#include <iostream>

using namespace std;

int main()
{
    float  pieVar,  metroVar ;
    float metroP, pulgada,metroM, yarda, metroY, pul,millaM,millaP, milla;
    
    cout<<"ingrese una distancia en pies";
    cin>>pieVar;
    cout<<"ingrese una distancia en metros";
    cin>>metroVar;
    pul=pieVar*12;
    metroP=metroVar/0.0254;
    pulgada=metroP+pul;
    //resultado en pulgadas 
    yarda=pieVar*1/3;
    metroY=metroVar* 1.0936;
    yarda=yarda+metroY;
    //resultado en yardas
    metroM=metroVar+(pieVar*0.3048);
    //resultado en metros
    millaP=pieVar*0.000189393939394;
    millaM=metroVar*0.00062137119449951;
    
    
    
    
    cout<<"la suma en pulgadas es de : "<<pulgada<<"\n";
    cout<<"la suma en yardas es de: "<<yarda<<"\n";
    cout<<"la suma en metros es de : "<<metroM<<"\n";
    
    
    return 0;
}

