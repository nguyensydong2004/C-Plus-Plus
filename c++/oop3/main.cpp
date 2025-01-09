#include <iostream>
#include "InvoiceItem.cpp"



using namespace std;


int main() {
    InvoiceItem a("1", "Mot", 3, 5000);
    cout << a.toString() << endl;
    a.setQty(4);
    a.setUnitPrice(3000);
    cout << a.toString() << endl;
    cout << "Total:" << a.getTotal() << endl;
    
    string id, desc;
    int qty, unitPrice;
    cout << "Input ID: " ;
    cin >> id;
    cout << "Input Desc: ";
    cin >> desc;
    cout << "Input Qty: ";
    cin >> qty;
    cout << "Input UnitPrice: ";
    cin >> unitPrice;
    InvoiceItem b(id, desc, qty, unitPrice);
    cout << b.toString() << endl;
    cout << "Total:" << b.getTotal() << endl;
    return 0;
}

