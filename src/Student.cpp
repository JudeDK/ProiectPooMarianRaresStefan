#include <iostream>
#include <string>
#include "../headers/Student.h"
bool Student::is_valid_cnp(const std::string &local_cnp) {
    return local_cnp.length() == 13 && local_cnp.find_first_not_of("0123456789") == std::string::npos;
}
Student::Student(const std::string& Local_name,const std::string& Local_cnp,double Local_average) {
    this->Name = Local_name;
    if (!is_valid_cnp(Local_cnp)) {
        std::cout << "CNP invalid! CNP-ul trebuie sa aiba 13 cifre." << std::endl;
    }
    this->Cnp = Local_cnp;
    if (Local_average >= 0 && Local_average <= 10) {
        this->Average = Local_average;
    } else {
        std::cout << "Medie invalida! Medie trebuie sa fie intre 0 si 10." << std::endl;
    }
}

void Student::citires(){
    std::cout<< "Nume:";
    std::cin>>Name;
    std::cout<<"Cnp:";
    std::cin>>Cnp;
}
void Student::afisares() {
    std::cout << "Nume:" << Name << "\n";
    if (!is_valid_cnp(Cnp)) {
        std::cout << "CNP invalid! CNP-ul trebuie sa aiba 13 cifre." << std::endl;
    } else std::cout << "Cnp:" << Cnp << "\n";
    if (Average >= 0 && Average <= 10) {
        std::cout << "Media:" << Average << "\n";
    } else {
        std::cout << "Medie invalida! Medie trebuie sa fie intre 0 si 10." << std::endl;
    }
}
std::ostream &operator<<(std::ostream &out, const Student &st){
    out << "Studentul este: " << st.Name << std::endl;
    out << "Studentul are cnp: " << st.Cnp << std::endl;
    out << "Studentul are media: "<<st.Average<<std::endl;
    return out;
}
std::istream  &operator>>(std::istream &is,  Student &st){
    std::cout << "Studentul este: ";
    is >> st.Name;
    std::cout << "Studentul are cnp: ";
    is >> st.Cnp;
    std::cout << "Studentul are media: ";
    is >> st.Average;
    return is;
}