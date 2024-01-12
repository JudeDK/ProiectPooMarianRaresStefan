#ifndef OOP_MATERIE_H
#define OOP_MATERIE_H
#include <string>
class Materie {
protected:
    std::string teacher;
    std::string name;
public:
    ~Materie()=default;
    Materie ()=default;
    explicit Materie(const std::string& local_name , const std::string& local_teacher );
   /* std::string getname() const;
    void setname(const std::string &local_name);
    std::string getteacher() const;
    void setteacher(const std::string &local_teacher);*/
    virtual void citirem();
    virtual void afisarem();
    friend std::ostream &operator<<(std::ostream &out, const Materie &m);
    friend std::istream &operator>>(std::istream &is, Materie &m);
};
#endif
