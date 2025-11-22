#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Declaro las variables que voy a usar
    // y le doy un valor al areglo y hasta donde
    // llega los ciclos
    int num, ban;
    cin>>num;
    int a[num];

    // Le doy los varores al areglo para despues comprobar
    for(int i=0;i<num; i++){
        cin>>a[i];
    }

    // Se comprueba los valores del areglo para encontrar
    // el numero 8 o si no hay
    for(int i=0; i<num; i++){
        if(a[i]==8){
            ban=1;
            break;
        }else{
            ban=0;
        }
    }

    // se imprime 1 si se encontro 8
    // se imprime 0 si no se encontro 8
    cout<<ban<<endl;
    return 0;
}
