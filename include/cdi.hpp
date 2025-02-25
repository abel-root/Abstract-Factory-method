#ifndef CDI_H
#define CDI_H
#include "employer.hpp"
#include <iostream>
#include <string>

class CDI : public Employer{
    public:
        CDI();
     void saveEmployer() override ;
     void deleteEmployer() override;
     void updateEmployer() override;
     void showEmployer () override;

    private:

};



#endif //CDI_H