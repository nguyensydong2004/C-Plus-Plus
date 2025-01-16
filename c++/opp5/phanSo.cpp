#include <iostream>

using namespace std;

class PhanSo
{
private:
    int tuSo, mauSo;
public:
    PhanSo(int tuSo, int mauSo){
        this->mauSo = mauSo;
        this->tuSo = tuSo;
    }
    int getTuSo() {return tuSo;}
    int getMauSo() {return mauSo;}
    string toString() {return to_string(tuSo) + "/" + to_string(mauSo);}
    PhanSo operator+ (PhanSo ps) {
        int mau=mauSo*ps.getMauSo();
        int tu=tuSo*ps.getMauSo() + ps.getTuSo()*mauSo;
        PhanSo tmp(tu,mau);
        return tmp;
    }
    PhanSo operator- (PhanSo ps) {
        int mau=mauSo*ps.getMauSo();
        int tu=tuSo*ps.getMauSo() - ps.getTuSo()*mauSo;
        PhanSo tmp(tu,mau);
        return tmp;
    }
    PhanSo operator* (PhanSo ps) {
        double tu=1.0*tuSo*ps.getTuSo();
        double mau=1.0*mauSo*ps.getMauSo();
        PhanSo tmp(tu,mau);
        return tmp;
    }
    PhanSo operator/ (PhanSo ps) {
        double tu=1.0*mauSo*ps.getMauSo();
        double mau=1.0*tuSo*ps.getTuSo();
        PhanSo tmp(tu,mau);
        return tmp;
    }

};

int main() {
    PhanSo ps1(1, 2);
    PhanSo ps2(2,5);
    PhanSo ps3 = ps1 + ps2;
    cout << ps3.toString() << endl;
    PhanSo ps4 = ps1 - ps2;
    cout << ps4.toString() << endl;
    PhanSo ps5 =ps1*ps2;
    return 0;
}

