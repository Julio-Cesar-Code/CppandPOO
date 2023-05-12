#include <iostream>
#include <string>

using namespace std;


int main(  ){
    union numero_letra{

        int numero;
        char letra;

    };
    numero_letra x={'A'};
    cout<<"x como numero:"<< x.numero<<endl;
    cout<<"x com letra: "<<x.letra<<endl;

    enum week_days {lunes, martes, miercoles};
    week_days dia=martes;

    cout <<dia;
}