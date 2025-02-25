#include "employer.hpp"

//construtor, destructor
Employer::Employer(){};
Employer::~Employer(){};

//setter 

void Employer::setBornDate(std::string& bornDate){
    this->bornDate=bornDate;
}
void Employer::setName(std::string & name){
    this->name=name;
}
void Employer::setGender(std::string& gender){
    this->gender=gender;
}
void Employer::setTrainingLevel(std::string& trainingLevel){
    this->trainingLevel=trainingLevel;
}
void Employer::setDateSignature(std::string& dateSignature){
    this->dateSignature=dateSignature;
}

//getter
std::string Employer::getName()const{
    return this->name;
}
std::string Employer::getGender()const{
    return this->gender;
}
std::string Employer::getBornDate()const{
    return this->bornDate;
}
std::string Employer::getDateSignature()const{
    return this->dateSignature;
}
std::string Employer::getTrainigLevel()const{
    return this->trainingLevel;
}