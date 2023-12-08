#ifndef OOP_STUDENT_H
#define OOP_STUDENT_H
#include <string>
class Student{
protected:
    std::string name;
    std::string cnp;
    double notabac;
    double notaadmitere;
    double average{};
public:
    Student()=default;
    static bool is_valid_cnp(const std::string &local_cnp);
    explicit Student(const std::string &local_name , const std::string &local_cnp,double &local_average, const int &local_notabac, const int &local_notaadmitere);
    std::string getname() const;
    void setname(const std::string &local_name);
    std::string getcnp() const;
    bool setcnp(const std::string &local_cnp);
    double getnotabac() const;
    void setnotabac(double &local_notabac);
    double getnotaadmitere()const;
    void setnotaadmitere(double &local_notaadmitere);
    double getaverage() const;
    bool setaverage(double med);
    virtual void citires();
    virtual void afisares();
    void AfisareMedie() const;
    void calculMedie();
    friend std::ostream &operator<<(std::ostream &out, const Student &st);
    friend std::istream &operator>>(std::istream &is, Student &st);
    ~Student()=default;
};
#endif
