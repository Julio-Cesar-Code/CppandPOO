#include <iostream>
#include <string>


using namespace std;

class Persona{
  private:
    string nombre;
    int edad;
  public:
    
    static int numero_personas;
    Persona(string name, int age);
    ~Persona(){
      cout << "Destruyendo Persona" << endl;
    }
    Persona &establecerNombre(string nombre){
      this->nombre = nombre;
      return *this;
    }
    Persona &establecerEdad(int age){
      this->edad = age;
      return *this;
    }
    void saludar();
};

int Persona::numero_personas=0;
void Persona::saludar(){
  
      cout << "Hola "<< nombre <<", mi edad es: "<<edad<< endl;
    
};

Persona::Persona(string name, int age){
  this->nombre=name;
  this->edad=age;
  numero_personas++; 
}

int main(){
  Persona *p=new Persona("Diana",23);
  //Persona *p2=new Persona("Julio",32);
//  cout<<p->nombre<<endl;
  cout<<"Numero de Personas: "<<Persona::numero_personas<<endl;
  Persona *p2 =new Persona("Julio",23);
  cout<<"Numero de Personas: "<<Persona::numero_personas<<endl;
  p->establecerEdad(25).establecerNombre("calidad");
  p->saludar();
 // p2->saludar();
  delete p;
  //delete p2;
}