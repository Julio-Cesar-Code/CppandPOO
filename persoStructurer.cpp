#include <iostream>
#include <string>

using namespace std;


struct Persona
{
    /* data */
    string nombre;
    int edad;
};


int main( ){
    Persona *p= new Persona();
    p->nombre="Diana";
    p->edad=20;
    cout<<p->nombre<<endl;
    cout<<p->edad<<endl;

}