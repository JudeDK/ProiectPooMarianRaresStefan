#include <iostream>
#include <string>
#include "../headers/Student.h"
    bool Student::is_valid_cnp(const std::string &local_cnp) {
        return local_cnp.length() == 13 && local_cnp.find_first_not_of("0123456789") == std::string::npos;
    }
    Student::Student(const std::string &local_name,const std::string &local_cnp,double &local_average, const int &local_notabac, const int &local_notaadmitere) {
        this->name = local_name;
        this->notabac= local_notabac;
        this->notaadmitere=local_notaadmitere;
        if (!is_valid_cnp(cnp)) {
            std::cout << "CNP invalid! CNP-ul trebuie sa aiba 13 cifre." << std::endl;
        }
        this->cnp = local_cnp;
        if (average >= 0 && average <= 10) {
            this->average = local_average;
        } else {
            std::cout << "Medie invalida! Medie trebuie sa fie intre 0 si 10." << std::endl;
        }
    }
    std::string Student::getname() const {
        return this->name;
    }
    void Student::setname(const std::string &local_name) {
        this->name = local_name;
    }
    std::string Student::getcnp() const {
        return this->cnp;
    }
    bool Student::setcnp(const std::string &local_cnp) {
        if (is_valid_cnp(local_cnp)) {
            this->cnp = local_cnp;
            return true;  // CNP valid
        } else {
            std::cout << "CNP invalid! CNP-ul trebuie sa aiba 13 cifre." << std::endl;
            return false;  // CNP invalid
        }
    }
    double Student::getaverage() const {
        return this->average;
    }
    bool Student::setaverage(double med) {
        if (average >= 0 && med <= 10) {
            this->average = med;
            return true;
        } else {
            std::cout << "Medie invalida! Medie trebuie sa fie intre 0 si 10." << std::endl;
            return false;
        }
    }
    double Student::getnotabac()const{
        return this->notabac;
    }
    void Student::setnotabac(double &local_notabac){
        this->notabac=local_notabac;
    }
    double Student::getnotaadmitere()const {
        return this->notaadmitere;
    }
    void Student::setnotaadmitere(double &local_notaadmitere){
        this->notaadmitere=local_notaadmitere;
    }
    void Student::citires()
    {
          std::cout<< "Nume:";
          std::cin>>name;
          std::cout<<"Cnp:";
          std::cin>>cnp;
          std::cout<<"Nota la bac este: ";
          std::cin >> notabac;
          std::cout << "Nota la admitere este: ";
          std::cin >> notaadmitere;
    }
    void Student::afisares() {
        std::cout << "Nume:" << name << "\n";
        if (!is_valid_cnp(cnp)) {
            std::cout << "CNP invalid! CNP-ul trebuie sa aiba 13 cifre." << std::endl;
        } else std::cout << "Cnp:" << cnp << "\n";
        if (notabac<5 || notabac >10)
            std::cout << "Nota de la bac nu este una corespunzatoare!\n";
        else std::cout << "Nota de la bac este:" << notabac;
        if (notaadmitere<5 || notaadmitere >10)
            std::cout << "Nota de la admitere nu este una corespunzatoare!\n";
        else std::cout << "Nota de la admitere este:" << notaadmitere << std::endl;

        if (average >= 0 && average <= 10) {
            std::cout << "Media:" << average << "\n";
        } else {
            std::cout << "Medie invalida! Medie trebuie sa fie intre 0 si 10." << std::endl;
        }
    }
std::ostream &operator<<(std::ostream &out, const Student &st) {
    out << "Studentul este: " << st.name << std::endl;
    out << "Studentul are cnp: " << st.cnp << std::endl;
    out << "Studentul are media: "<<st.average<<std::endl;
    return out;
}
std::istream  &operator>>(std::istream &is,  Student &st){
    std::cout << "Studentul este: ";
    is >> st.name;
    std::cout << "Studentul are cnp: ";
    is >> st.cnp;
    std::cout << "Studentul are media: ";
    is >> st.average;
    return is;
}