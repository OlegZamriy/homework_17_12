#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string fullName;
    std::string birthDate;
    std::string contactPhone;
    std::string city;
    std::string country;
    std::string universityName;
    std::string universityCity;
    std::string universityCountry;
    std::string groupNumber;

public:
    Student();
    Student(const std::string& name, const std::string& date, const std::string& phone,
        const std::string& studentCity, const std::string& studentCountry,
        const std::string& uniName, const std::string& uniCity, const std::string& uniCountry,
        const std::string& group);

    void inputStudentData();
    void displayStudentData() const;

    // Аксесори
    std::string getFullName() const;
    std::string getBirthDate() const;
    std::string getContactPhone() const;
    std::string getCity() const;
    std::string getCountry() const;
    std::string getUniversityName() const;
    std::string getUniversityCity() const;
    std::string getUniversityCountry() const;
    std::string getGroupNumber() const;
};

#endif // STUDENT_H
