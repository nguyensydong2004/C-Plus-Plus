#include<iostream>
#include<cmath>

using namespace std;

class Diem
{
private:
    int x,y;
public:
    Diem() {
        x = 0;
        y = 0;
    }
    Diem(int x, int y) {
        this->x = x;
        this->y = y;
    }
    int getX() {return x;}
    int getY() {return y;}
    double khoangCach(Diem p) {
        return sqrt(pow(x-p.getX(), 2) + pow(y-p.getY(), 2));
    }
};

class Tamgiac
{
private:
    Diem a,b,c;
public:
    Tamgiac(Diem a, Diem b, Diem c){
        this->a = a;
        this->b = b;
        this->c = c;
    };
    double ChuVi() {
        return a.khoangCach(b) + a.khoangCach(c) + b.khoangCach(c);
    }

};

int main() {
    Diem a(0,0);
    Diem b(0,4);
    Diem c(5,0);
    Tamgiac tg(a, b, c);
    cout << "Chu vi tam giac: " <<tg.ChuVi();
    return 0;
}


