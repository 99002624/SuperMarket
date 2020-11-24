#include "Product.h"
#include<iostream>
using namespace std;

Product::Product():supermarket() {

        // m_Tax;
        m_quantity=0;
        m_invoiceId="";
        m_unitprice=0;;

}

Product::Product(std::string branch,std::string city,double rating,int quantity,std::string Id, double unitprice):supermarket(m_branch,m_city,m_rating) {

    m_quantity=quantity;
    m_invoiceId=Id;
    m_unitprice=unitprice;
}

double Product::ComputeTax(){

    double tax=m_quantiy*m_unitprice()*m_tax;
    return tax;
}

int Product::get_quantity() {

    return m_quantity;

}

std::string Product::get_invoiceId(){

        return m_invoiceId;

}

double Product::get_unitprice() {

    return m_unitprice;

}
