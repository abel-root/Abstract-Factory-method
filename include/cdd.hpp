#ifndef CDD_H
#define CDD_H
#include <iostream>
#include <string>
#include "employer.hpp"

class CDD : public Employer{
    public:
        CDD();
        void saveEmployer() override ;
        void deleteEmployer() override;
        void updateEmployer() override;
        void showEmployer () override;
    private:
        // 

};






#endif // CDD_H