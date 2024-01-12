#include "../headers/Curs.h"
#include <iostream>
Curs::Curs(const int &local_ore_curs,const int &local_nr_cursuri){
    this->ore_curs=local_ore_curs;
    this->nr_cursuri=local_nr_cursuri;
}
/*int Curs::getore_curs()const{
    return ore_curs;
};
void Curs::setore_curs(int &local_ore_curs){
    this->ore_curs=local_ore_curs;
};
int Curs::getnr_cursuri()const{
    return nr_cursuri;
}
void Curs::setnr_cursuri(int &local_nr_cursuri){
    this->nr_cursuri=local_nr_cursuri;
};*/
void Curs::citirem(){
    Materie::citirem();
    std::cout << "Numarul de ore al cursului este: ";
    std::cin >> ore_curs;
    std::cout << "Numarul de cursuri pe saptamana este de:";
    std::cin>>nr_cursuri;
    // std::cout << "Numele materiei este: ";
    //std::cin >> name;
    //std::cout << "Materia este predata de:";
    //std::cin>> teacher;
}
void Curs::afisarem(){
    Materie::afisarem();
    std::cout << "Numarul de ore al cursului este: "<< ore_curs << std::endl;
    std::cout <<"Numarul de cursuri pe saptamana este de:"<< nr_cursuri << std::endl;
    // std::cout << "Numele materiei este: " << name << std::endl;
    // std::cout << "Materia este predata de:"<< teacher << std::endl;
}
std::ostream &operator<<(std::ostream &out, const Curs &c) {
    out << "Numarul de cursuri pe saptamana este de: "<< c.nr_cursuri<<std::endl;
    out << "Numarul de ore al unui curs este de: "<< c.ore_curs<<std::endl;
    return out;
}
std::istream  &operator>>(std::istream &is,  Curs &c){
    std::cout << "Numarul de cursuri pe saptamana este de: ";
    is >> c.nr_cursuri;
    std::cout << "Numarul de ore al unui curs este de: ";
    is >> c.ore_curs;
    return is;
}