#include<string>
#include <iostream>

class Alumno{
public:
    Alumno();
    Alumno(std::string nombre,std::string matricula, int edad, std::string carrera);

    void setNombre(std::string nombre);
    std::string getNombre();

    void setMatricula(std::string Matricula);
    std::string getMatricula();

    void setEdad(int edad);
    int getEdad();

    void setCarrera(std::string Carrera);
    std::string getCarrera();

    void imprimirAlumno();
    void cumpleanios();

private:
    std::string nombre;
    std::string matricula;
    int edad;
    std::string carrera;
};
