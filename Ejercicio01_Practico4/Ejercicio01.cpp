#include <iostream>

using namespace std;

int main() {

  int dinero;
  int helado=5;
  int R;
  int contador = 0;
  cout<<"Inserte su saldo monetario: "; cin>>dinero;
  cout<<"Saldo actual: "<<dinero<<"$."<<endl;
  cout<<"Precio del helado: "<<helado<<"$."<<endl;

  while(dinero>=helado){
    cout<<"Desea comprar un helado? ( YES=1   NO=0 ): "; cin>>R;
    if (R==1){
        contador = contador+1;
        cout<<"!Se compro un helado!"<<endl;
        dinero=dinero-helado;
        cout<<"Te queda de Saldo actual: "<<dinero<<"$ para comprar helado."<<endl;
    }else{
        cout<<" "<<endl<<endl;
        break;}
  }
    cout<<"Compraste un total de "<<contador<<" helados."<<endl;
    cout<<"!Gracias por su compra!"<<endl;

}

