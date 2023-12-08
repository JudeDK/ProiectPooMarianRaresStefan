#include <iostream>
#include "../headers/StudentBursier.h"
    StudentBursier::StudentBursier(const int &local_bursa){
        this->bursa=local_bursa;
    };
    int StudentBursier::getbursa() const {
        return bursa;
    }
    void StudentBursier::setbursa(int &local_bursa) {
            this->bursa=local_bursa;
    }
    void StudentBursier::citires(){
        //Student::citires();
        std::cout<< "Nume:";
        std::cin>>name;
        std::cout<<"Cnp:";
        std::cin>>cnp;
        std::cout<<"Nota la bac este: ";
        std::cin >> notabac;
        std::cout << "Nota la admitere este: ";
        std::cin >> notaadmitere;
        std::cout << "Studentul are bursa: ";
        std::cin >> bursa;
    }
    void StudentBursier::afisares() {
       // Student::afisares()
        std::cout << "Nume:" << name << "\n";
        if (!is_valid_cnp(cnp)) {
            std::cout << "CNP invalid! CNP-ul trebuie sa aiba 13 cifre." << std::endl;
        } else std::cout << "Cnp:" << cnp << "\n";
        if (average >= 0 && average <= 10) {
            std::cout << "Media:" << average << "\n";
        } else {
            std::cout << "Medie invalida! Medie trebuie sa fie intre 0 si 10." << std::endl;
        }
        if (bursa >=600 && bursa <= 1000)
            std::cout<< "Studentul are bursa: " << bursa <<"\n";
        if (bursa > 1000 )
            std::cout << " Studentul are bursa de olimpici: " << bursa << "\n";
        if (bursa < 600 )
            std::cout << "Bursa introdusa nu este destinata studentilor bursieri!" "\n""Va rog introduceti o bursa care sa indeplineasca criteriile ! "<< std::endl ;

    }
    std::ostream &operator<<(std::ostream &out, const StudentBursier &s) {
    out << "Studentul are bursa: "<< s.bursa<<std::endl;
    return out;
}
std::istream  &operator>>(std::istream &is,  StudentBursier &s){
    std::cout << "Studentul are bursa: ";
    is >> s.bursa;
    return is;
}