#include <iostream>
#include "headers/Curs.h"
#include "headers/Materie.h"
#include "headers/Facultate.h"
#include "headers/Teachers.h"
#include "headers/Student.h"
#include "headers/StudentBursier.h"
#include <memory>
int main() {
    // creare materii
    Materie Fiz ("fizica","Andrei");
    Materie POO ("Programare orientata pe obiecte","Mircea");
    Materie Programare ("Programarea calculatoarelor","Andreea");
    // creare cursuri
    Curs Fizica(2,1);
    Curs OOP(3,1);
    Curs PROGRAMARE (4,2);
    //creare studenti
    Student s1 ("Rares","1295810274921",6.43);
    Student s2 ("Bogdan","9150482619235",7.54);
    Student s3 ("Denis","9502174639103",5.55);
    //creare Proefesori
    Teachers FiZicA("Andrei","fizica");
    Teachers pOo ("Mircea","Programare orientata pe obiecte");
    Teachers Pr0gramare ("Andreea","Programarea calculatoarelor");
    //creare Studenti Bursieri
    StudentBursier s4 ("Rares","1295810274921",9.57,600);
    StudentBursier s5 ("Bogdan","9150482619235",8.96,400);
    StudentBursier s6 ("Denis","9502174639103",9.20,500);
    //creare obiecte share_ptr
    std::shared_ptr<Student> student1= std::make_shared<Student>(s1);
    std::shared_ptr<Student> student2= std::make_shared<Student>(s1);
    std::shared_ptr<Student> student3= std::make_shared<Student>(s1);

    std::shared_ptr<Curs> Curs1= std::make_shared<Curs>(Fizica);
    std::shared_ptr<Curs> Curs2= std::make_shared<Curs>(OOP);
    std::shared_ptr<Curs> Curs3= std::make_shared<Curs>(PROGRAMARE);

    std::shared_ptr<Materie> Materie1= std::make_shared<Materie>(Fiz);
    std::shared_ptr<Materie> Materie2= std::make_shared<Materie>(POO);
    std::shared_ptr<Materie> Materie3= std::make_shared<Materie>(Programare);

    std::shared_ptr<Teachers> Profesor1= std::make_shared<Teachers>(FiZicA);
    std::shared_ptr<Teachers> Profesor2= std::make_shared<Teachers>(pOo);
    std::shared_ptr<Teachers> Profesor3= std::make_shared<Teachers>(Pr0gramare);

    std::shared_ptr<StudentBursier> Bursier1= std::make_shared<StudentBursier>(s4);
    std::shared_ptr<StudentBursier> Bursier2= std::make_shared<StudentBursier>(s5);
    std::shared_ptr<StudentBursier> Bursier3= std::make_shared<StudentBursier>(s6);

    std::cout << "Welcome" << std::endl;
    std::cout << "Alegeti o varianta:" << std::endl;
    std::cout << "1.Informatii curs:" << std::endl;
    std::cout << "2:Informatii materie:" << std::endl;
    std::cout << "3:Informatii studenti:" << std::endl;
    std::cout << "4.Informatii bursieri:" << std::endl;
    std::cout << "5.Informatii profesori:" << std::endl;

    int optiune;
    std::cin >> optiune;
    switch (optiune) {
        case 1:
            // Informatii despre cursuri
            std::cout << "Alegeti un curs (intre 1 si 3): ";
            int indexCurs;
            std::cin >> indexCurs;
            switch (indexCurs) {
                case 1:
                    std::cout << *Curs1 << std::endl;
                    break;
                case 2:
                    std::cout << *Curs2 << std::endl;
                    break;
                case 3:
                    std::cout << *Curs3 << std::endl;
                    break;
                default:
                    std::cout << "Optiune invalida pentru curs." << std::endl;
            }
            break;

        case 2:
            // Informatii despre materii
            std::cout << "Alegeti o materie (intre 1 si 3): ";
            int indexMaterie;
            std::cin >> indexMaterie;
            switch (indexMaterie) {
                case 1:
                    std::cout << *Materie1 << std::endl;
                    break;
                case 2:
                    std::cout << *Materie2 << std::endl;
                    break;
                case 3:
                    std::cout << *Materie3 << std::endl;
                    break;
                default:
                    std::cout << "Optiune invalida pentru materie." << std::endl;
            }
            break;

        case 3:
            // Informatii despre studenti
            std::cout << "Alegeti un student (intre 1 si 3): ";
            int indexStudent;
            std::cin >> indexStudent;
            switch (indexStudent) {
                case 1:
                    std::cout << *student1 << std::endl;
                    break;
                case 2:
                    std::cout << *student2 << std::endl;
                    break;
                case 3:
                    std::cout << *student3 << std::endl;
                    break;
                default:
                    std::cout << "Optiune invalida pentru student." << std::endl;
            }
            break;

        case 4:
            // Informatii despre bursieri
            std::cout << "Alegeti un student bursier (intre 1 si 3): ";
            int indexBursier;
            std::cin >> indexBursier;
            switch (indexBursier) {
                case 1:
                    std::cout << *Bursier1 << std::endl;
                    break;
                case 2:
                    std::cout << *Bursier2 << std::endl;
                    break;
                case 3:
                    std::cout << *Bursier3 << std::endl;
                    break;
                default:
                    std::cout << "Optiune invalida pentru student bursier." << std::endl;
            }
            break;

        case 5:
            // Informatii despre profesori
            std::cout << "Alegeti un profesor (intre 1 si 3): ";
            int indexProfesor;
            std::cin >> indexProfesor;
            switch (indexProfesor) {
                case 1:
                    std::cout << *Profesor1 << std::endl;
                    break;
                case 2:
                    std::cout << *Profesor2 << std::endl;
                    break;
                case 3:
                    std::cout << *Profesor3 << std::endl;
                    break;
                default:
                    std::cout << "Optiune invalida pentru profesor." << std::endl;
            }
            break;

        default:
            std::cout << "Optiune invalida." << std::endl;
    }
    return 0;
}
 //// DE AICI INCEPE TEMA 3
// #include <iostream>
//#include <utility>
//#include <vector>
//#include <algorithm>
//#include <memory>
//#include <functional>
//creare clasa template Locuinta
//template <typename T>
//class Locuinta
//{
//protected:
//    std::string NumeClient;
//    int SuprafataUtila;
//    double Discount;
//public:
//    Locuinta(const std::string& Nume, int Suprafata, double Disc) : NumeClient(Nume), SuprafataUtila(Suprafata), Discount(Disc)
//    {
//        if (SuprafataUtila < 0)
//        {
//            throw std::invalid_argument("Suprafata trebuie sa fie un numar pozitiv.");
//        }
//    }
//    //functie virtuala template
//    virtual T CalculeazaChirie() const = 0;
//    virtual void Afiseaza() const = 0;
//    virtual void Citeste(std::istream& is)
//    {
//        std::cout << "Numele clientului: ";
//        is >> this->NumeClient;
//        std::cout << "Suprafata utila: ";
//        is >> this->SuprafataUtila;
//        if (this->SuprafataUtila < 0)
//        {
//            throw std::invalid_argument("Suprafata trebuie sa fie un numar pozitiv.");
//        }
//        std::cout << "Discountul: ";
//        is >> this->Discount;
//    }
//    virtual ~Locuinta() = default ;
//    friend std::ostream& operator<<(std::ostream& os, const Locuinta& locuinta)
//    {
//        locuinta.Afiseaza();
//        return os;
//    }
//    friend std::istream& operator>>(std::istream& is, Locuinta& locuinta)
//    {
//        locuinta.citeste(is);
//        return is;
//    }
//};
// clasa Apartament care mosteneste public locuinta
//class Apartament : public Locuinta<double>
//{
//    int Etaj;
//public:
//    Apartament(const std::string& Nume, int Suprafata, double Disc, int Et) : Locuinta(Nume, Suprafata, Disc), Etaj(Et)
//    {
//        if (SuprafataUtila < 0)
//        {
//            throw std::invalid_argument("Suprafata trebuie sa fie un numar pozitiv.");
//        }
//    }
//    //definim functia virtuala CalculeazaChirie
//    double CalculeazaChirie() const override
//    {
//        return SuprafataUtila * 10 - Discount;
//    }
//    void Afiseaza() const override
//    {
//        std::cout << "Apartament:\n";
//        std::cout << "Nume client: " << NumeClient << "\n";
//        std::cout << "Suprafata utila: " << SuprafataUtila << " mp\n";
//        std::cout << "Discount: " << Discount << "\n";
//        std::cout << "Etaj: " << Etaj << "\n";
//        std::cout << "Chirie: " << CalculeazaChirie() << "\n";
//    }
//    void Citeste(std::istream& is)  override {
//        try {
//            Locuinta<double>::Citeste(is);
//            std::cout << "Etaj: ";
//            is >> Etaj;
//        } catch (const std::exception &e) {
//            std::cerr << "Eroare la citirea datelor: " << e.what() << std::endl;
//            throw;
//        }
//    }
//    friend std::ostream& operator<<(std::ostream& os, const Apartament& apartament)
//    {
//        os << "Apartament:\n";
//        os << "Nume client: " << apartament.NumeClient << "\n";
//        os << "Suprafata utila: " << apartament.SuprafataUtila << " mp\n";
//        os << "Discount: " << apartament.Discount << "\n";
//        os << "Etaj: " << apartament.Etaj << "\n";
//        os << "Chirie: " << apartament.CalculeazaChirie() << "\n";
//        return os;
//    }
//    friend std::istream& operator>>(std::istream& is, Apartament& apartament)
//    {
//        apartament.Citeste(is);
//        return is;
//    }
//};
// clasa Casa cara mosteneste public Locuinta
//template<typename T>
//class Casa : public Locuinta<double>
//{
//    T curte;
//public:
//    Casa(const std::string& Nume, int Suprafata, double Disc, T Ct) : Locuinta(Nume, Suprafata, Disc), curte(Ct) {
//        if (SuprafataUtila < 0)
//        {
//            throw std::invalid_argument("Suprafata trebuie sa fie un numar pozitiv.");
//        }
//
//    }
//    //definim functia virtuala CalculeazaChirie
//    double CalculeazaChirie() const override
//    {
//        return SuprafataUtila *  - Discount;
//    }
//    void Afiseaza() const override
//    {
//        std::cout << "Casa:\n";
//        std::cout << "Nume client: " << NumeClient << "\n";
//        std::cout << "Suprafata utila: " << SuprafataUtila << " mp\n";
//        std::cout << "Discount: " << Discount << "\n";
//        std::cout << "Suprafata curtii: " << curte << " mp\n";
//        std::cout << "Chirie: " << CalculeazaChirie() << "\n";
//    }
//    void Citeste(std::istream& is) override
//    {
//        try {
//            Locuinta<double>::Citeste(is);  // Apelăm funcția din clasa de bază pentru a citi numele, suprafața utilă și discountul
//            std::cout << "Suprafata curtii: ";
//            is >> curte;
//        } catch (const std::exception& e) {
//            std::cerr << "Eroare la citirea datelor: " << e.what() << std::endl;
//            throw;
//        }
//    }
//    friend std::ostream& operator<<(std::ostream& os, const Casa& casa)
//    {
//        os << "Casa:\n";
//        os << "Nume client: " << casa.numeClient << "\n";
//        os << "Suprafata utila: " << casa.suprafataUtila << " mp\n";
//        os << "Discount: " << casa.discount << "\n";
//        os << "Suprafata curtii: " << casa.curte << " mp\n";
//        os << "Chirie: " << casa.calculeazaChirie() << "\n";
//        return os;
//    }
//    friend std::istream& operator>>(std::istream& is, Casa& casa)
//    {
//        casa.citeste(is);
//        return is;
//    }
//};
// desgign pattern Factory pentru creare locuinte
//class LocuintaFactory
//{
//public:
//    // cream obiecte de tip Locuinta<double>
//    virtual std::shared_ptr<Locuinta<double>> creazaLocuinta(const std::string& nume, int suprafata, double disc) = 0;
//    virtual ~LocuintaFactory()= default ;
//};
// Subclasa Factory pentru crearea Apartamentelor
//class ApartamentFactory : public LocuintaFactory
//{
//public:
//    //suprascriere creeazaLocuinta si creare obiecte de tip Apartament
//    std::shared_ptr<Locuinta<double>> creazaLocuinta(const std::string& nume, int suprafata, double disc) override
//    {
//        int etaj;
//        std::cout << "Etaj: ";
//        std::cin >> etaj;
//        // cream un obiect de tip Apartament
//        return std::make_shared<Apartament>(nume, suprafata, disc, etaj);
//    }
//};
// Subclasa Factory pentru crearea Caselor
//class CasaFactory : public LocuintaFactory
//{
//public:
//    //suprascriere creeazaLocuinta si creare obiecte de tip Casa
//    std::shared_ptr<Locuinta<double>> creazaLocuinta(const std::string& nume, int suprafata, double disc) override
//    {
//        int suprafataCurte;
//        std::cout << "Suprafata curtii: ";
//        std::cin >> suprafataCurte;
//        return std::make_shared<Casa<int>>(nume, suprafata, disc, suprafataCurte);
//    }
//};
//class AgentieImobiliara
//{
//    // vector locuinte
//    std::vector<std::shared_ptr<Locuinta<double>>> locuinte;
//public:
//    // facem un pointer la locuinta si o adaugam in vectorul locuinte
//    void adaugaLocuinta(const std::shared_ptr<Locuinta<double>>& loc)
//    {
//        locuinte.push_back(loc);
//    }
//    // facem un pointer la un factory de locuinte si apeleaza functia creazaLocuinta
//    template<typename LocuintaFactoryType>
//    void adaugaLocuinta(const std::shared_ptr<LocuintaFactoryType>& factory)
//    {
//        std::string nume;
//        int suprafata;
//        double disc;
//
//        std::cout << "Nume client: ";
//        std::cin >> nume;
//
//        do {
//            std::cout << "Suprafata: ";
//            std::cin >> suprafata;
//            if (suprafata <= 0) {
//                std::cout << "Suprafata trebuie sa fie un numar pozitiv. Introduceti o valoare valida.\n";
//            }
//        } while (suprafata <= 0);
//        std::cout << "Discount: ";
//        std::cin >> disc;
//        auto locuinta = factory->creazaLocuinta(nume, suprafata, disc);
//        adaugaLocuinta(locuinta);
//    }
//
//    void afiseazaLocuinte(std::function<bool(const std::shared_ptr<Locuinta<double>>&, const std::shared_ptr<Locuinta<double>>&)> criteriuSortare = nullptr)
//    {
//        std::sort(locuinte.begin(), locuinte.end(), std::move(criteriuSortare));
//        for (const auto& locuinta : locuinte)
//        {
//            std::cout << *locuinta << "\n";
//        }
//    }
//};
//criteriu de sortare in sortul de mai sus dupa chirie
//auto criteriuSortare = [](const std::shared_ptr<Locuinta<double>>& loc1, const std::shared_ptr<Locuinta<double>>& loc2) {
//    return loc1->CalculeazaChirie() < loc2->CalculeazaChirie();
//};
//int main()
//{   //creare obiect de tip agentie imobiliara
//    AgentieImobiliara agentie;
//    // meniu interactiv
//    int optiune;
//    do
//    {
//        std::cout << "\n=========== Meniu ===========\n";
//        std::cout << "1. Adauga apartament\n";
//        std::cout << "2. Adauga casa\n";
//        std::cout << "3. Afiseaza locuinte in ordine crescatoare in functie de chirie\n";
//        std::cout << "4. Iesire\n";
//        std::cout << "Optiune: ";
//        std::cin >> optiune;
//        std::cout << "\n================================\n";
//        switch (optiune)
//        {
//            case 1:
//                agentie.adaugaLocuinta(std::make_shared<ApartamentFactory>());
//                break;
//            case 2:
//                agentie.adaugaLocuinta(std::make_shared<CasaFactory>());
//                break;
//            case 3:
//                agentie.afiseazaLocuinte(criteriuSortare);
//                break;
//            case 4:
//                std::cout << "La revedere!\n";
//                break;
//            default:
//                std::cout << "Optiune invalida!\n";
//                break;
//        }
//    }
//    while (optiune != 4);
//
//    return 0;
//}