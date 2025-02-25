#include "cdd.hpp"

CDD::CDD(){};
void CDD::saveEmployer(){
     //code saved here
     std::cout<<"saved !"<<std::endl;
}

void CDD::updateEmployer(){
    //code here
    std::cout<<"updated !"<<std::endl;
}
void CDD::deleteEmployer(){
    std::cout<<"deleted !"<<std::endl;
}

void CDD::showEmployer(){
    std::cout<<"Employer Name : " <<this->getName()<<std::endl;
    std::cout<<"Employer Date born : "<<this->getBornDate()<<std::endl;
    std::cout<<"Employer Date signature : " <<this->getDateSignature()<<std::endl;
    std::cout<<"Employer gender : " <<this->getGender()<<std::endl;
    std::cout<<"Employer Tarining level : "<<this->getTrainigLevel()<<std::endl;
}