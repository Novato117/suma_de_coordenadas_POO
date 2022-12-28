#include <iostream>
using namespace std;
class punto{
private:
    float CoordenadaX,CoordenadaY;
public:
    float obtenerCoordX();
    float obtenerCoordY();
    void ModificaX(float nuevaX);
    void ModificaY(float nuevaY);
    void imprimecoord();
};
float punto::obtenerCoordX(){
return CoordenadaX;
}
float punto::obtenerCoordY(){
return CoordenadaY;
}
//metodo de permite actualizar el valor de la coordenada x
void punto::ModificaX(float nuevaX){
CoordenadaX=nuevaX;
}
void punto::ModificaY(float nuevaY){
CoordenadaY=nuevaY;
}
void punto::imprimecoord(){
cout<<"la coordenasa X : "<<CoordenadaX<<'\n';
cout<<"la coordenasa Y : "<<CoordenadaY<<'\n';
}

int main(){
punto objpunto;
float auxiliar;
auxiliar=2.1;
objpunto.ModificaX(auxiliar);
auxiliar=5.3;
objpunto.ModificaY(auxiliar);
objpunto.imprimecoord();

auxiliar=objpunto.obtenerCoordX();
cout<<"\n la coordenada x es : "<<auxiliar<<endl;
auxiliar=objpunto.obtenerCoordY();
cout<<"\n la coordenada y es : "<<auxiliar<<endl;

return 0;
}
