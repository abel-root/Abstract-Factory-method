#ifndef CDITYPE_H
#define CDITYPE_H
#include "./employerFactory.hpp"

class CDIType:public EmployerFactory {

    public :
         Employer * createEmployer() override;
};





#endif //CDITYPE_H