#include <iostream>
#include <string.h>
using namespace std;

class empresa{
    private:
        string name;
    public:
        void setName(string n){
            name = n;
        }
        string getName(){
            return name;
        }
};

class cliente{
    private:
        string name;
        int edad;
        float salario;
        string dni;
        string dirección;
    public:
        void setName(string n){
            name = n;
        }
        void setEdad(int e){
            edad = e;
        }
        string getName(){
            return name;
        }
        int getEdad(){
            return edad;
        }
};
class empleado{
    private:
        string nombre;
        int edad;
        float salario;
        string dni;
        string dirección;
        public:
        void setnombre(string n){
            nombre = n; 
        }
        void setEdad(int e){
            edad = e;
        }
        void setSalario(float s){
            salario = s;
        }
        void setDni(string d){
            dni = d;
        }
        void setDireccion(string d){
            dirección = d;
        }
}
int main()
    cliente c; 
    c.setName("Juan");
    c.setEdad(25);
    c.setSalario(25000);
    c.setDni("12345678A");
    c.setDireccion("Calle Principal 123");
    return 0;
}

int main(){
    empleado e;
    e.setnombre("pedro");
    e.setEdad(30);
    e.setSalario(30000);
    e.setDni("56724345");
    e.setDireccion("Calle secundaria 456");
    return 0;
}

int main(){
    empresa emp;
    emp.setName("My project");
    return 0;
}

int main(){
    cliente c;
    c.setnombre("Juan");
    c.setEdad(25);
    c.setSalario(25000);
    c.setDni("36463826");
    c.setDireccion("Calle principal 123");
    return 0;
}