#include <iostream>
#include "../headers/StudentBursier.h"
StudentBursier::StudentBursier(const std::string &Local_name, const std::string &Local_cnp,double Local_average,const int Local_bursa){
    this->Name=Local_name;
    this->Cnp=Local_cnp;
    this->Average=Local_average;
    this->bursa=Local_bursa;
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