#include "cdi.hpp"

CDI::CDI(){};
void CDI::saveEmployer(){
    //code saved here
    std::cout<<"saved !"<<std::endl;
}
void CDI::updateEmployer(){
    //code update here
    std::cout<<"updated !"<<std::endl;
}

void CDI::deleteEmployer(){
    //code deleted or stop contrat here 
    std::cout<<"deleted !"<<std::endl;
}
void CDI::showEmployer(){
    std::cout<<"Employer Name : " <<this->getName()<<std::endl;
    std::cout<<"Employer Date born : "<<this->getBornDate()<<std::endl;
    std::cout<<"Employer Date signature : " <<this->getDateSignature()<<std::endl;
    std::cout<<"Employer gender : " <<this->getGender()<<std::endl;
    std::cout<<"Employer Tarining level : "<<this->getTrainigLevel()<<std::endl;
}