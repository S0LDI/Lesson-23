#include <iostream>
#include <string>
#include <vector>

class PersonalData {
private:
    std::string firstName;
    std::string lastName;
    std::string birthDate;
    std::string phoneNumber;

public:
    PersonalData(const std::string& first, const std::string& last, const std::string& birth, const std::string& phone)
        : firstName(first), lastName(last), birthDate(birth), phoneNumber(phone) {}

    void displayPersonalData() const {
        std::cout << "Name: " << firstName << " " << lastName << std::endl;
        std::cout << "Birth Date: " << birthDate << std::endl;
        std::cout << "Phone Number: " << phoneNumber << std::endl;
    }
};

class ProfessionalData {
private:
    std::string lastJob;
    std::string startDate;
    double hourlyRate;

public:
    ProfessionalData(const std::string& job, const std::string& start, double rate)
        : lastJob(job), startDate(start), hourlyRate(rate) {}

    void displayProfessionalData() const {
        std::cout << "Last Job: " << lastJob << std::endl;
        std::cout << "Start Date: " << startDate << std::endl;
        std::cout << "Hourly Rate: $" << hourlyRate << std::endl;
    }
};

class Profession {
private:
    std::string name;
    std::vector<std::string> skills;

public:
    Profession(const std::string& profName, const std::vector<std::string>& profSkills)
        : name(profName), skills(profSkills) {}

    void displayProfessionData() const {
        std::cout << "Profession: " << name << std::endl;
        std::cout << "Skills: ";
        for (const std::string& skill : skills) {
            std::cout << skill << ", ";
        }
        std::cout << std::endl;
    }
};

int main() {
    PersonalData person1("John", "Doe", "01/15/1980", "555-123-4567");
    ProfessionalData profData1("Software Engineer", "01/01/2005", 50.0);
    Profession profession1("Programmer", { "C++", "Java", "Python" });

    PersonalData person2("Alice", "Smith", "05/20/1990", "555-987-6543");
    ProfessionalData profData2("Graphic Designer", "03/15/2010", 35.0);
    Profession profession2("Designer", { "Photoshop", "Illustrator", "InDesign" });

    
    person1.displayPersonalData();
    profData1.displayProfessionalData();
    profession1.displayProfessionData();

    
    person2.displayPersonalData();
    profData2.displayProfessionalData();
    profession2.displayProfessionData();

    return 0;
}
