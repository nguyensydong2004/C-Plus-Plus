#include "InvoiceItem.h"


InvoiceItem::InvoiceItem(string id, string desc, int qty, double unitPrice) {
    this->id = id;
    this->desc = desc;
    this->qty = qty;
    this->unitPrice = unitPrice;
}
string InvoiceItem::getId() {
    return id;
}
string InvoiceItem::getDesc() {
    return desc;
}
int InvoiceItem::getQty() {
    return qty;
}
void InvoiceItem::setQty(int qty) {
    this->qty = qty;
}
double InvoiceItem::getUnitPrice() {
    return unitPrice;
}
void InvoiceItem::setUnitPrice(double unitPrice) {
    this->unitPrice = unitPrice;
}
double InvoiceItem::getTotal() {
    return unitPrice*qty;
}
string InvoiceItem::toString() {
    return "InvoiceItem[id=" + id + ", desc =" + desc + ", qty =" +to_string(qty) + ", unitPrice=" + to_string(unitPrice) + "]";
}