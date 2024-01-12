#ifndef OOP_FACULTATE_H
#define OOP_FACULTATE_H
#include <string>
#include <vector>
#include "../headers/Student.h"
#include "../headers/Materie.h"
#include "../headers/Teachers.h"
class Facultate{
protected:
    std::string name;
    int numberteachers;
    int numberobjects;
    int numberstudents;
public:
    ~Facultate()=default;
    explicit Facultate(const std::string &local_name="n/a",int local_numberteachers=0, int local_numberobjects=0,int local_numberstudents=0);
   /* std::string getname() const;
    void setnume(const std::string &local_name);
    int getnumberteachers ()const;
    int setnumberteachers(int x);
    int getnumberobjects ()const;
    int setnumberobjects(int x);
    int getnumberstudents ()const;
    int setnumberstudents(int x);*/
    virtual void citire();
    virtual void afisare();
    friend std::ostream &operator<<(std::ostream &out, const Facultate &fc);
    friend std::istream &operator>>(std::istream &is, Facultate &fc);
};

#endif
