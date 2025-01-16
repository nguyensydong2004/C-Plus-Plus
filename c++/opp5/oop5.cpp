#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class MyPoint {
private:
    int x;
    int y;
public:
    MyPoint() {
        x = 0;
        y = 0;
    }
    MyPoint(int x, int y) {
        this->x = x;
        this->y = y;
    }
    int getX() { 
        return x; 
    }
    void setX(int x) { 
        this->x = x; 
    }
    int getY() { 
        return y; 
    }
    void setY(int y) { 
        this->y = y; 
    }
    string getXY() { 
        return "(" + to_string(x) + "," + to_string(y) + ")";
    }
    void setXY(int x, int y) { 
        this->x = x; 
        this->y = y;
    }
    double distance(MyPoint another) { 
        return sqrt(pow(x - another.x, 2) + pow(y - another.y, 2));
    }
    string toString() { 
        return "(" + to_string(x) + "," + to_string(y) + ")";
    }
};

class MyLine {
private:
    MyPoint begin;
    MyPoint end;
public:
    MyLine(int x1, int y1, int x2, int y2) {
        begin = MyPoint(x1, y1);
        end = MyPoint(x2, y2);
    }
    MyLine(MyPoint begin, MyPoint end) {
        this->begin = begin;
        this->end = end;
    }
    MyPoint getBegin() { 
        return begin; 
    }
    void setBegin(MyPoint begin) { 
        this->begin = begin; 
    }
    MyPoint getEnd() { 
        return end; 
    }
    void setEnd(MyPoint end) { 
        this->end = end; 
    }
    int getBeginX() { 
        return begin.getX(); 
    }
    void setBeginX(int x) { 
        begin.setX(x); 
    }
    int getBeginY() { 
        return begin.getY(); 
    }
    void setBeginY(int y) { 
        begin.setY(y); 
    }
    int getEndX() { 
        return end.getX(); 
    }
    void setEndX(int x) { 
        end.setX(x); 
    }
    int getEndY() { 
        return end.getY(); 
    }
    void setEndY(int y) { 
        end.setY(y); 
    }
    string getBeginXY() { 
        return begin.getXY(); 
    }
    void setBeginXY(int x, int y) { 
        begin.setXY(x, y); 
    }
    string getEndXY() { 
        return end.getXY(); 
    }
    void setEndXY(int x, int y) { 
        end.setXY(x, y); 
    }
    double getLength() { 
        return begin.distance(end); 
    }
    double getGradient() {
        int xDiff = end.getX() - begin.getX();
        int yDiff = end.getY() - begin.getY();
        return atan2(yDiff, xDiff);
    }
    string toString() {
        return "MyLine[begin=" + begin.toString() + ", end=" + end.toString() + "]";
    }
};

int main() {
    MyLine l1(1, 1, 8, 2);
    MyLine l2(3, 3, 10, 4);
    cout << l1.toString() << endl;
    cout << l2.toString() << endl;
    cout << "Line1: " << l1.toString() << endl;
    cout << "Length: " << l1.getLength() << endl;
    cout << "Gradient: " << l1.getGradient() << endl;
    cout << "Line2: " << l2.toString() << endl;
    cout << "Length: " << l2.getLength() << endl;
    cout << "Gradient: " << l2.getGradient() << endl;
    MyPoint p1(5, 6);
    MyPoint p2(7, 8);
    MyLine l3(p1, p2);
    cout << "Line3: " << l3.toString() << endl;
    cout << "Length: " << l3.getLength() << endl;
    cout << "Gradient: " << l3.getGradient() << endl;
    return 0;
}
