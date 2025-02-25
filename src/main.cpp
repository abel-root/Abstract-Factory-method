#include <iostream>
#include <string>
#include "cddType.hpp"
#include "cdiType.hpp"

int main(){
    CDIType * CDIEmployer= new CDIType();
    CDDType * CDDEmployer=new CDDType();

    //cdi
    Employer* cdi = CDIEmployer->createEmployer();
    std::string name2="Kouakou Abel";
    cdi->setName(name2);
    std::string  sex="Mal";
    cdi->setGender(sex);
    std::string dateNaissance2="1996/12/29";
    cdi->setBornDate(dateNaissance2);
    std::string dateSign2="01/03/2025";
    cdi->setDateSignature(dateSign2);
    std::string level2="Master 5 ";
    cdi->setTrainingLevel(level2);

    std::cout<<"-----------Infos cdi -------------\n\n\n";

    cdi->saveEmployer();
    cdi->showEmployer();
    cdi->deleteEmployer();
    cdi->updateEmployer();
    


    //cdd
    Employer* cdd = CDDEmployer->createEmployer();
    std::string name1="Kouakou KONAN";
    cdd->setName(name1);
    std::string  gender1="Masculin";
    cdd->setGender(gender1);
    std::string dateNaissance1="1995/10/20";
    cdd->setBornDate(dateNaissance1);
    std::string dateSign1="03/03/2025";
    cdd->setDateSignature(dateSign1);
    std::string level1="Master 2 ";
    cdd->setTrainingLevel(level1);

    std::cout<<"-----------Infos cdd -------------\n";

    cdd->saveEmployer();
    cdd->deleteEmployer();
    cdd->showEmployer();
    cdd->updateEmployer();



    return 0;
}