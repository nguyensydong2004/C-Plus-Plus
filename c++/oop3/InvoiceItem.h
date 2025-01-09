#include <iostream>
#include <string>
using namespace std;

class InvoiceItem
{
private:
    string id;
    string desc;
    int qty;
    double unitPrice;
public:
    InvoiceItem(string id, string desc, int qty, double unitPrice);
    string getId();
    string getDesc();
    int getQty();
    void setQty(int qty);
    double getUnitPrice();
    void setUnitPrice(double unitPrice);
    double getTotal();
    string toString();
};

