#include <iostream>
#include <string>
#include "../headers/Materie.h"
Materie::Materie(const std::string& local_name, const std::string& local_teacher) {
    this->name = local_name;
    this->teacher = local_teacher;
}
/*std::string Materie::getname() const {
    return this->name;
}
void Materie::setname(const std::string &local_name){
    this->name = local_name;
}
std::string Materie::getteacher() const {
    return this->teacher;
}
void Materie::setteacher(const std::string &local_teacher) {
    this->teacher = local_teacher;
}*/

void Materie::citirem(){
    std::cout << "Numele materiei este: ";
    std::cin >> name;
    std::cout << "Materia este predata de:";
    std::cin>> teacher;
}
void Materie::afisarem(){
    std::cout << "Numele materiei este: " << name << std::endl;
    std::cout << "Materia este predata de:"<< teacher << std::endl;
}
std::istream &operator>>(std::istream &is, Materie &m) {
    std::cout << "Materia este: " ;
    is  >> m.name;
    std::cout << "Materia este predata de: ";
    is >> m.teacher;
    return is;
}
std::ostream &operator<<(std::ostream &out, const Materie &m) {
    out << "Materia este: " << m.name << std::endl;
    out << "Materia este predata de: " << m.teacher << std::endl;
    return out;
}