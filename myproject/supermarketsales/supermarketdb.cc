#include "supermarketdb.h"

void supermarketdb:: addSales(std::string branch,std::string city,int quantity,std::string Id,double unitprice) {

    sales.push_back(Product(branch,city,quantity,Id,unitprice));

}

Product* supermarketdb::finddataById(std::string Id) {

    std::list<Product>::iterator iter;
    for(iter=sales.begin(); iter!=sales.end(); ++iter)
        if(iter->get_invoiceId()==Id)
            return &(*iter);
    return NULL;

}

void supermarketdb::removedata(std::string Id) {

    std::list<Product>::iterator iter;
    for(iter=sales.begin(); iter!=sales.end(); ++iter)
        if(iter->get_invoiceId()==Id)
            break;
    if(iter!=Product.end())
        Product.erase(iter);

}
