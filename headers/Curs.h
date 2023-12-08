#ifndef OOP_CURS_H
#define OOP_CURS_H
#include "../headers/Materie.h"
class Curs : Materie{
protected:
    int ore_curs;
    int nr_cursuri;
public:
    Curs(const int &local_ore_curs=1,const int &local_nr_cursuri=1);
    ~Curs()=default;
    int getore_curs() const;
    void setore_curs(int &local_ore_curs);
    int getnr_cursuri()const;
    void setnr_cursuri(int &local_nr_cursuri);
    virtual void citirem()override;
    virtual void afisarem()override;
    friend std::ostream &operator<<(std::ostream &out, const Curs &c);
    friend std::istream &operator>>(std::istream &is, Curs&c);
};
#endif
