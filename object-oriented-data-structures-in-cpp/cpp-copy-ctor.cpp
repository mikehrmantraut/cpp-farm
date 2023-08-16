#include <iostream>
#include <string>

class Student
{
    public:
    Student()
    {
        name = "mike";
        surname = "ehrmanthraut";
        std::cout << "Default constructor invoked!" << std::endl;
    };
    Student(const Student &student){
        name = student.name;
        surname = student.surname;
        std::cout << "Copy constructor invoked!" << std::endl;
    }

    private:
    std::string name;
    std::string surname;

};

int main()
{
    Student s;
    Student copy(s);

}
