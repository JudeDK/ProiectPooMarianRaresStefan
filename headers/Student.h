#ifndef OOP_STUDENT_H
#define OOP_STUDENT_H
#include <string>
class Student{
protected:
    std::string Name;
    std::string Cnp;
    double Average;
public:
    Student()=default;
    static bool is_valid_cnp(const std::string &local_cnp);
    Student(const std::string &local_name, const std::string &local_cnp,double local_average);
 /*   std::string getname() const;
    void setname(const std::string &local_name);
    std::string getcnp() const;
    bool setcnp(const std::string &local_cnp);
    double getaverage() const;
    bool setaverage(double med);*/
    virtual void citires();
    virtual void afisares();
    friend std::ostream &operator<<(std::ostream &out, const Student &st);
    friend std::istream &operator>>(std::istream &is, Student &st);
    ~Student()=default;
};
#endif
