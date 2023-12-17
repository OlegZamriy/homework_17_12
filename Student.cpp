#include "Student.h"
#include <iostream>

Student::Student() {}

Student::Student(const std::string& name, const std::string& date, const std::string& phone,
    const std::string& studentCity, const std::string& studentCountry,
    const std::string& uniName, const std::string& uniCity, const std::string& uniCountry,
    const std::string& group)
    : fullName(name), birthDate(date), contactPhone(phone), city(studentCity), country(studentCountry),
    universityName(uniName), universityCity(uniCity), universityCountry(uniCountry), groupNumber(group) {}

void Student::inputStudentData() {
    std::cout << "Enter full name: ";
    std::getline(std::cin, fullName);

    std::cout << "Enter birth date: ";
    std::getline(std::cin, birthDate);

    std::cout << "Enter contact phone: ";
    std::getline(std::cin, contactPhone);

    std::cout << "Enter city: ";
    std::getline(std::cin, city);

    std::cout << "Enter country: ";
    std::getline(std::cin, country);

    std::cout << "Enter university name: ";
    std::getline(std::cin, universityName);

    std::cout << "Enter university city: ";
    std::getline(std::cin, universityCity);

    std::cout << "Enter university country: ";
    std::getline(std::cin, universityCountry);

    std::cout << "Enter group number: ";
    std::getline(std::cin, groupNumber);
}

void Student::displayStudentData() const {
    std::cout << "Full Name: " << fullName << std::endl;
    std::cout << "Birth Date: " << birthDate << std::endl;
    std::cout << "Contact Phone: " << contactPhone << std::endl;
    std::cout << "City: " << city << std::endl;
    std::cout << "Country: " << country << std::endl;
    std::cout << "University Name: " << universityName << std::endl;
    std::cout << "University City: " << universityCity << std::endl;
    std::cout << "University Country: " << universityCountry << std::endl;
    std::cout << "Group Number: " << groupNumber << std::endl;
}

std::string Student::getFullName() const {
    return fullName;
}

std::string Student::getBirthDate() const {
    return birthDate;
}

std::string Student::getContactPhone() const {
    return contactPhone;
}

std::string Student::getCity() const {
    return city;
}

std::string Student::getCountry() const {
    return country;
}

std::string Student::getUniversityName() const {
    return universityName;
}

std::string Student::getUniversityCity() const {
    return universityCity;
}

std::string Student::getUniversityCountry() const {
    return universityCountry;
}

std::string Student::getGroupNumber() const {
    return groupNumber;
}
