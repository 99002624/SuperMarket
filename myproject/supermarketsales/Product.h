#ifndef PRODUCT_H_INCLUDED
#define PRODUCT_H_INCLUDED

#include "supermarket.h"

#include<iostream>
using namespace std;

class Product : public supermarket {

        int m_quantity;
        std::string m_invoiceId;
       // double m_Tax;
        double m_unitprice;
        float m_tax=0.05;
    public:
        Product();
        Product(std::string,std::string,double,int,string,double);
        double ComputeTax() override;
        int get_quantity();
        //double get_tax();
        std::string get_invoiceId();
        double get_unitprice();


#endif // PRODUCT_H_INCLUDED
