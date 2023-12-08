#include <iostream>
#include "../headers/Teachers.h"
    Teachers::Teachers(const std::string &local_nume, const std::string &local_materie){
    this->nume=local_nume;
    this->materie=local_materie;
};
    int Teachers::getnume ()const{
        return this->getnume();
    };
    int Teachers::setnume(const std::string &local_nume){
        this->nume=local_nume;
    };
    int Teachers::getmaterie ()const{
        return this->getmaterie();
    };
    int Teachers::setmaterie(const std::string &local_materie){
        this->materie=local_materie;
    };
void Teachers::citiret(){
    std::cout << "Numele este:"<< std::endl;
    std::cin >> nume;
    std::cout << "Materia pe care o preda este: "<< std::endl;
    std::cin >> materie;
};
void Teachers::afisaret(){
    std::cout << "Numele profesorului este: " << nume << std::endl;
    std::cout << "Materia pe care o preda este: "<< materie << std::endl;
};
std::ostream &operator<<(std::ostream &out, const Teachers &t) {
    out << "Numele profesorului este: " << t.nume << std::endl;
    out << "Profesorul preda materia: " << t.materie<< std::endl;
    return out;
}
std::istream  &operator>>(std::istream &is,  Teachers &t){
    std::cout << "Numele profesorului este: " << std::endl;
    is >> t.nume;
    std::cout << "Profesorul preda materia: " << std::endl;
    is >> t.materie;
    return is;
}

