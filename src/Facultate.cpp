#include <iostream>
#include <string>
#include "../headers/Facultate.h"
    Facultate::Facultate(const std::string &local_name,int local_numberteachers, int local_numberobjects,int local_numberstudents){
        this->name=local_name;
        this->numberobjects=local_numberobjects;
        this->numberteachers=local_numberteachers;
        this->numberstudents=local_numberstudents;
    }
    std::string Facultate::getname() const {
        return this->name;
    }
    void Facultate::setnume(const std::string &local_name) {
        this->name = local_name;
    }
    int Facultate::getnumberteachers ()const{
        return this->numberteachers;
    }
    int Facultate::setnumberteachers(int x) {
        return this->numberteachers=x;
    }
    int Facultate::getnumberobjects ()const{
        return this->numberobjects;
    }
    int Facultate::setnumberobjects(int x) {
        return this->numberobjects=x;
    }
    int Facultate::getnumberstudents ()const{
        return this->numberstudents;
    }
    int Facultate::setnumberstudents(int x) {
        return this->numberstudents=x;
    }
void Facultate::citire() {
    std::cout << "Numele facultatii este:";
    std::cin >> name;

    std::cout << "Numarul de studenti din facultate este:";
    std::cin >> numberstudents;
    st.reserve(numberstudents);
    for (int i = 0; i < numberstudents; i++) {
        Student* s=new Student;
        s->citires();
        st.push_back(s);
    }
    for (const auto &Student : st) {
        Student->afisares();
    }

    std::cout << "Numarul de profesori din facultate este:";
    std::cin >> numberteachers;
    t.reserve(numberteachers);
    for (int i = 0; i < numberteachers; i++) {
        Teachers *teacher=new Teachers;
        teacher->citiret();
        t.push_back(teacher);
    }
    for (const auto &Teacher : t) {
        Teacher->afisaret();
    }

    std::cout << "Numar materii:";
    std::cin >> numberobjects;
    ob.reserve(numberobjects);
    for (int i = 0; i < numberobjects; i++) {
        Materie *m=new Materie;
        m->citirem();
        ob.push_back(m);
    }
    for (const auto &Materie : ob) {
        Materie->afisarem();
    }
}
void Facultate::cleanup() {
    for (auto& studentPtr : st) {
        delete studentPtr;
    }
    st.clear();

    for (auto& teacherPtr : t) {
        delete teacherPtr;
    }
    t.clear();

    for (auto& materiePtr : ob) {
        delete materiePtr;
    }
    ob.clear();
}

    void Facultate::afisare() {
        std::cout << "Numele facultatii:" << name << std::endl;
        if (numberteachers > 0 && numberteachers < 10)
            std::cout << "Numar profesori:" << numberteachers << std::endl;
        if (numberobjects > 0 && numberobjects < 6)
            std::cout << "Numar profesori:" << numberobjects << std::endl;
        if (numberstudents > 0 && numberstudents < 100)
            std::cout << "Numar studenti:" << numberstudents << std::endl;
    }
    std::ostream &operator<<(std::ostream &out, const Facultate &fc) {
        out << "Facultatea are numele: " << fc.name << std::endl;
        out << "Numarul studentilor este: " << fc.numberstudents << std::endl;
        out << "Numarul materiilor este: " << fc.numberobjects << std::endl;
        out << "Numarul profesorilor din facultate este: " << fc.numberteachers << std::endl;
        return out;
    }
    std::istream &operator>>(std::istream &is, Facultate &fc) {
        std::cout << "Facultatea are numele: ";
        is >> fc.name;
        std::cout << "Numarul studentilor este: ";
        is >> fc.numberstudents;
        std::cout << "Numarul materiilor este: ";
        is >> fc.numberobjects;
        std::cout << "Numarul profesorilor din facultate este: ";
        is >> fc.numberteachers;
        return is;
    }
