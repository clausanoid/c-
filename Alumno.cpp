#include "Alumno.h"
Alumno::Alumno() {
    nombre = "";
    matricula ="";
    edad = 0;
    carrera = "";
}
Alumno::Alumno(std::string _nombreA, std::string _matriculaA, int _edad, std::string _carreraA) {
    nombre = _nombreA;
    matricula = _matriculaA;
    edad = _edad;
    carrera = _carreraA;
}
void Alumno::setNombre(std::string _nombreA) {
    nombre =  _nombreA;
}
std::string Alumno::getNombre() {
    return nombre;
}

void Alumno::setMatricula(std::string _matriculaA) {
    matricula =  _matriculaA;
}
std::string Alumno::getMatricula() {
    return matricula;
}

void Alumno::setEdad(int _edadA) {
    edad =  _edadA;
}
int  Alumno::getEdad() {
    return edad;
}


void Alumno::setCarrera(std::string _carreraA) {
    carrera =  _carreraA;
}
std::string Alumno::getCarrera() {
    return carrera;
}

void Alumno::imprimirAlumno(){
    std::cout << nombre << std::endl;
    std::cout << matricula << std::endl;
    std::cout << edad << std::endl;
    std::cout << carrera << std::endl;

}

void Alumno::cumpleanios() {
    std::cout << edad + 1 << std::endl;
}