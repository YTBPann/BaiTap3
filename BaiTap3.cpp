#include <iostream>
using namespace std;

// Define a class called "Person"
class Person {
private:
    string name;
    int age;

public:
    // Constructor to initialize name and age
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Member function to display information
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Create an object of the "Person" class
    Person person1("John", 30);

    // Call the member function to display information
    person1.displayInfo();

    return 0;
}
