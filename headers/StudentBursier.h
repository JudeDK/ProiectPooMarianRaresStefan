#ifndef OOP_STUDENTBURSIER_H
#define OOP_STUDENTBURSIER_H
#include <iostream>
#include <string>
#include "../headers/Student.h"
class StudentBursier : public Student{
private:
    int bursa;
public:
    ~StudentBursier()=default;
    explicit StudentBursier(const std::string &local_name, const std::string &local_cnp,double local_average,const int local_bursa);
/*    int getbursa() const;
    void setbursa(int &local_bursa);*/
    friend std::ostream &operator<<(std::ostream &out, const StudentBursier &s);
    friend std::istream &operator>>(std::istream &is, StudentBursier &s);
};
#endif
