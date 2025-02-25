#ifndef EMPLOYER_H
#define EMPLOYER_H

#include<iostream>
#include <string>


class Employer{
    public:
        Employer();
        ~Employer();
        virtual void saveEmployer()=0; // pour créer un employer
        virtual void deleteEmployer()=0; // pour rompre un contrat un employer 
        virtual void updateEmployer()=0; // pour modifier les informations d'un employer
        virtual void showEmployer ()=0;

        //getter et setter
        std::string getName() const;
        std::string getDateSignature()const;
        std::string getBornDate()const;
        std::string getGender() const;
        std::string getTrainigLevel()const;

        void setName(std::string& name);
        void setDateSignature(std::string& dateSignature);
        void setBornDate(std::string& bornDate);
        void setGender(std::string& gender );
        void setTrainingLevel(std::string& trainingLevel);

    private:
        std::string name;
        std::string dateSignature;
        std::string bornDate;
        std::string gender; 
        std::string trainingLevel;


};



#endif //EMPLOYER_H
