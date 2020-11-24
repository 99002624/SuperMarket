#ifndef SUPERMRKETDB_H_INCLUDED
#define SUPERMRKETDB_H_INCLUDED

#include "Product.h"
#include<list>
class supermarketdb {

    std::list<Product>sales;
    public:
    void addSales(std::string,std::string,int,std::string,double);
    Product* finddataById(std::string);
    void removedata(std::string);
    //int countAll();
    //int countTripsByOperator(std::string);

    //double computeMaxFare();

#endif // SUPERMRKETDB_H_INCLUDED
