#ifndef CDDTYPE_H
#define CDDTYPE_H

#include <iostream>
#include <string>
#include "employerFactory.hpp"

class CDDType:public EmployerFactory{
    public :
        Employer * createEmployer()override;
     
};




#endif //CDDTYPE_H