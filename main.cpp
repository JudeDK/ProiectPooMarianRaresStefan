#include <iostream>
#include <string>
class Materie {
private:
    std::string name;
    std::string teacher;

public:
    ~Materie(){std::cout<<"A fost apelat \n";}

    explicit Materie(const std::string& local_name = "Fizica", const std::string& local_teacher = "Popescu") {
        this->name = local_name;
        this->teacher = local_teacher;
    }

    std::string getname() const {
        return this->name;
    }

    void setname(const std::string &local_name) {
        this->name = local_name;
    }

    std::string getteacher() const {
        return this->teacher;
    }

    void setteacher(const std::string &local_teacher) {
        this->teacher = local_teacher;
    }

    friend std::ostream &operator<<(std::ostream &out, const Materie &m);
    friend std::istream &operator>>(std::istream &, Materie&);

};
std::istream  &operator>>(std::istream &is,  Materie &m) {
    std::cout << "Materia este: " ;
    is >> m.name;
    std::cout << "Materia este predata de: ";
    is >> m.teacher;
    return is;
}
std::ostream &operator<<(std::ostream &out, const Materie &m) {
    out << "Materia este: " << m.name << std::endl;
    out << "Materia este predata de: " << m.teacher << std::endl;
    return out;
}
class Student {
private:
    std::string name;
    std::string cnp;
    double average{};
public:
    Student()=default;
    static bool is_valid_cnp(const std::string &local_cnp) {
        return local_cnp.length() == 13 && local_cnp.find_first_not_of("0123456789") == std::string::npos;
    }

    Student(const std::string &local_name , const std::string &local_cnp,double average) {
        this->name = local_name;
        if (!is_valid_cnp(cnp)) {
            std::cout << "CNP invalid! CNP-ul trebuie sa aiba 13 cifre." << std::endl;
        }
        this->cnp = local_cnp;
        if (average >= 0 && average <= 10) {
            this->average = average;
        } else {
            std::cout << "Medie invalida! Medie trebuie sa fie intre 0 si 10." << std::endl;
        }
    }
    std::string getname() const {
        return this->name;
    }
    void setname(const std::string &local_name) {
        this->name = local_name;
    }
    std::string getcnp() const {
        return this->cnp;
    }
    bool setcnp(const std::string &local_cnp) {
        if (is_valid_cnp(local_cnp)) {
            this->cnp = local_cnp;
            return true;  // CNP valid
        } else {
            std::cout << "CNP invalid! CNP-ul trebuie sa aiba 13 cifre." << std::endl;
            return false;  // CNP invalid
        }
    }
    double getaverage() const {
        return average;
    }
    bool setaverage(double med) {
        if (average >= 0 && med <= 10) {
            this->average = med;
            return true;
        } else {
            std::cout << "Medie invalida! Medie trebuie sa fie intre 0 si 10." << std::endl;
            return false;
        }
    }
    friend std::ostream &operator<<(std::ostream &out, const Student &st);
    friend std::istream &operator>>(std::istream &is, Student &st);
    ~Student() { std::cout << "A fost apelat" << std::endl; }
};
std::ostream &operator<<(std::ostream &out, const Student &st) {
    out << "Studentul este: " << st.name << std::endl;
    out << "Studentul are cnp: " << st.cnp << std::endl;
    out << "Studentul are media: "<<st.average<<std::endl;
    return out;
}
std::istream  &operator>>(std::istream &is,  Student &st) {
    std::cout << "Studentul este: " ;
    is >> st.name;
    std::cout << "Studentul are cnp: ";
    is >> st.cnp;
    std::cout << "Studentul are media: ";
    is >> st.average;
    return is;
}
class Facultate{
private:
    std::string name;
    int numberteachers;
    int numberobjects;
    int numberstudents;
public:
    ~Facultate(){std::cout<<"A fost apelat \n";}
    explicit Facultate(const std::string &local_name="n/a",int local_numberteachers=0, int local_numberobjects=0,int local_numberstudents=0){
        this->name=local_name;
        this->numberobjects=local_numberobjects;
        this->numberteachers=local_numberteachers;
        this->numberstudents=local_numberstudents;
    }
    std::string getname() const {
        return this->name;
    }

    void setnume(const std::string &local_name) {
        this->name = local_name;
    }
    int getnumarprofesori ()const{
        return this->numberteachers;
    }
    int setnumarprofesori(int x) {
        return this->numberteachers=x;
    }
    int getnumarmaterii ()const{
        return this->numberobjects;
    }
    int setnumarmaterii(int x) {
        return this->numberobjects=x;
    }
    int getnumarstudenti ()const{
        return this->numberstudents;
    }
    int setnumarstudenti(int x) {
        return this->numberstudents=x;
    }
    friend std::ostream &operator<<(std::ostream &out, const Facultate &fc);
    friend std::istream &operator>>(std::istream &is, Facultate &fc);
};
std::ostream &operator<<(std::ostream &out, const Facultate &fc) {
    out << "Facultatea are numele: "<< fc.name<<std::endl;
    out << "Numarul studentilor este: " << fc.numberstudents << std::endl;
    out << "Numarul materiilor este: " << fc.numberobjects << std::endl;
    out << "Numarul profesorilor din facultate este: "<<fc.numberteachers<<std::endl;
    return out;
}

std::istream  &operator>>(std::istream &is,  Facultate &fc) {
    std::cout << "Facultatea are numele: ";
    is>>fc.name;
    std::cout << "Numarul studentilor este: ";
    is>>fc.numberstudents;
    std::cout << "Numarul materiilor este: ";
    is>>fc.numberobjects;
    std::cout << "Numarul profesorilor din facultate este: ";
    is>>fc.numberteachers;
    return is;
}
int main() {
    Materie m1("Chimie", "Ionescu");
    std::cout << m1;
    Materie m2;
    m2.setname("Analiza");
    m2.setteacher("Mircea");
    std::cout << "Materia este : " << m2.getname() << " \n";
    std::cout << "Materia este predata de : " << m2.getteacher() << " \n";
    std::cout << std::endl << std::endl;
    Student s1("Alex","1234567890123",8.3);
    std::cout << s1;
    Student s2;
    s2.setname("Mihai");
    s2.setcnp("5082710481244");
    s2.setaverage(8.56);
    std::cout << "Numele studentului este : "<< s2.getname()<< "\n";
    std::cout << "Studentul are CNP: "<< s2.getcnp()<<"\n";
    std::cout << "Studentul are media: "<< s2.getaverage()<<"\n";
    Student s3;
    s3=s2;
    std::cout << s3;
    std::cout << std::endl << std::endl;
    Facultate f1("Facultatea de matematica si informatica",2,2,2);
    std::cout << f1;
    Facultate f2;
    f2.setnume ("Facultatea de Constructii Bucuresti");
    f2.setnumarmaterii (3);
    f2.setnumarprofesori (2);
    f2.setnumarstudenti (60);
    std::cout<< "Numele: "<< f2.getname()<<std::endl;
    std::cout<< "Numarul profesorilor: "<< f2.getnumarprofesori()<<std::endl;
    std::cout<< "Numarul materiilor: "<< f2.getnumarmaterii()<<std::endl;
    std::cout<< "Numarul studentiilor: "<< f2.getnumarstudenti()<<std::endl;
    std::cout << std::endl << std::endl;
    return 0;
}