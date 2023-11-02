#include <iostream>
#include <string>


using namespace std;

class Materie {
private:
    string nume;
    string profesor;

public:
    ~Materie(){cout<<"A fost apelat \n";}

    explicit Materie(const string& name = "Fizica", const string& profesor = "Popescu") {
        this->nume = name;
        this->profesor = profesor;
    }

    string getnume() const {
        return this->nume;
    }

    void setnume(const string &name) {
        this->nume = name;
    }

    string getprofesor() const {
        return this->profesor;
    }

    void setprofesor(const string &prof) {
        this->profesor = prof;
    }

    friend ostream &operator<<(ostream &out, const Materie &m);

    friend istream &operator>>(istream &, Materie&);

};
istream  &operator>>(istream &is,  Materie &m) {
    cout << "Materia este: " ;
    is >> m.nume;
    cout << "Materia este predata de: ";
    is >> m.profesor;
    return is;
}
ostream &operator<<(ostream &out, const Materie &m) {
    out << "Materia este: " << m.nume << endl;
    out << "Materia este predata de: " << m.profesor << endl;
    return out;
}
class Student {
private:
    string nume;
    string cnp;
    double medie{};  // Adaugăm o variabilă pentru medie
public:
    Student()=default;
    ~Student() { cout << "A fost apelat" << endl; }

    static bool is_valid_cnp(const string &cnp) {
        return cnp.length() == 13 && cnp.find_first_not_of("0123456789") == string::npos;
    }

    Student(const string &nume , const string &cnp,double medie ) {
        this->nume = nume;
        if (!is_valid_cnp(cnp)) {
            cout << "CNP invalid! CNP-ul trebuie sa aiba 13 cifre." << endl;
        }
        this->cnp = cnp;
        if (medie >= 0 && medie <= 10) {
            this->medie = medie;
        } else {
            cout << "Medie invalida! Medie trebuie sa fie intre 0 si 10." << endl;
        }
    }

    string getnume() const {
        return this->nume;
    }

    void setnume(const string &name) {
        this->nume = name;
    }

    string getcnp() const {
        return this->cnp;
    }

    bool setcnp(const string &cenepe) {
        if (is_valid_cnp(cenepe)) {
            this->cnp = cenepe;
            return true;  // CNP valid
        } else {
            cout << "CNP invalid! CNP-ul trebuie sa aiba 13 cifre." << endl;
            return false;  // CNP invalid
        }
    }
    double getmedie() const {
        return medie;
    }
    bool setmedie(double med) {
        if (medie >= 0 && med <= 10) {
            this->medie = med;
            return true;
        } else {
            cout << "Medie invalida! Medie trebuie sa fie intre 0 si 10." << endl;
            return false;
        }
    }


    friend ostream &operator<<(ostream &out, const Student &st);
    friend istream &operator>>(istream &is, Student &st);
};


ostream &operator<<(ostream &out, const Student &st) {
    out << "Studentul este: " << st.nume << endl;
    out << "Studentul are cnp: " << st.cnp << endl;
    out << "Studentul are media: "<<st.medie<<endl;
    return out;
}

istream  &operator>>(istream &is,  Student &st) {
    cout << "Studentul este: " ;
    is >> st.nume;
    cout << "Studentul are cnp: ";
    is >> st.cnp;
    cout << "Studentul are media: ";
    is >> st.medie;
    return is;
}
class Facultate{
private:
    string nume;
    int numarprofesori;
    int numarmaterii;
    int numarstudenti;
public:

    ~Facultate(){cout<<"A fost apelat \n";}
    explicit Facultate(const string &nume="Da",int numarprofesori=1, int numarmaterii=1,int numarstudenti=1){
        this->nume=nume;
        this->numarmaterii=numarmaterii;
        this->numarprofesori=numarprofesori;
        this->numarstudenti=numarstudenti;
    }
    string getnume() const {
        return this->nume;
    }

    void setnume(const string &name) {
        this->nume = name;
    }
    int getnumarprofesori ()const{
        return this->numarprofesori;
    }
    int setnumarprofesori(int x) {
        return this->numarprofesori=x;
    }
    int getnumarmaterii ()const{
        return this->numarmaterii;
    }
    int setnumarmaterii(int x) {
        return this->numarmaterii=x;
    }
    int getnumarstudenti ()const{
        return this->numarstudenti;
    }
    int setnumarstudenti(int x) {
        return this->numarstudenti=x;
    }
    friend ostream &operator<<(ostream &out, const Facultate &fc);
    friend istream &operator>>(istream &is, Facultate &fc);
};
ostream &operator<<(ostream &out, const Facultate &fc) {
    out << "Facultatea are numele: "<< fc.nume<<endl;
    out << "Numarul studentilor este: " << fc.numarstudenti << endl;
    out << "Numarul materiilor este: " << fc.numarmaterii << endl;
    out << "Numarul profesorilor din facultate este: "<<fc.numarprofesori<<endl;
    return out;
}

istream  &operator>>(istream &is,  Facultate &fc) {
    cout << "Facultatea are numele: ";
    is>>fc.nume;
    cout << "Numarul studentilor este: ";
    is>>fc.numarstudenti;
    cout << "Numarul materiilor este: ";
    is>>fc.numarmaterii;
    cout << "Numarul profesorilor din facultate este: ";
    is>>fc.numarprofesori;
    return is;
}
int main() {
    Materie m1("Chimie", "Ionescu");
    cout << m1;
    Materie m2;
    m2.setnume("Analiza");
    m2.setprofesor("Mircea");

    cout << "Materia este : " << m2.getnume() << " \n";
    cout << "Materia este predata de : " << m2.getprofesor() << " \n";

    Student s1("Alex","1234567890123",8.3);
    cout << s1;

    Student s2;
    s2.setnume("Mihai");
    s2.setcnp("12");
    s2.setmedie(8.56);
    cout << "Numele studentului este : "<< s2.getnume()<< "\n";
    cout << "Studentul are CNP: "<< s2.getcnp()<<"\n";
    cout << "Studentul are media: "<< s2.getmedie()<<"\n";

    Facultate f1("Facultatea de matematica si informatica",2,2,2);
    cout << f1;
    Facultate f2;
    f2.setnume ("Facultatea de Constructii Bucuresti");
    f2.setnumarmaterii (3);
    f2.setnumarprofesori (2);
    f2.setnumarstudenti (60);
    cout<< "Numele:"<< f2.getnume()<<endl;
    cout<< "Numarul profesorilor:"<< f2.getnumarprofesori()<<endl;
    cout<< "Numarul materiilor:"<< f2.getnumarmaterii()<<endl;
    cout<< "Numarul studentiilor:"<< f2.getnumarstudenti()<<endl;
    return 0;
}