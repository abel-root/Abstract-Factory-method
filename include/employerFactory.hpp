#ifndef EMPLOYERFACTORY_H
#define EMPLOYERFACTORY_H
#include "employer.hpp"

class EmployerFactory{

    public:
        virtual Employer * createEmployer()=0;
};



#endif //EMPLOYERFACTORY_H