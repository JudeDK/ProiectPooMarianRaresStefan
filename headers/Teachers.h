#ifndef OOP_TEACHERS_H
#define OOP_TEACHERS_H
class Teachers{
protected:
    std::string nume;
    std::string materie;
public:
    Teachers()=default;
    ~Teachers()=default;
    Teachers (const std::string &local_nume, const std::string &local_materie);
    int getnume ()const;
    int setnume(const std::string &local_nume);
    int getmaterie ()const;
    int setmaterie(const std::string &local_materie);
    void citiret();
    void afisaret();
    friend std::ostream &operator<<(std::ostream &out, const Teachers &t);
    friend std::istream &operator>>(std::istream &is,Teachers &t);
};
#endif
