#include <iostream>
#include <string>

using namespace std;

// Employee class
class Employee {
private:
    int eid;
    string ename;
    double salary;

public:
    // Constructor to initialize Employee
    Employee() : eid(0), ename(""), salary(0.0) {}

    // Function to set employee details
    void setEmployeeDetails(int id, string name, double sal) {
        eid = id;
        ename = name;
        salary = sal;
    }

    // Function to display employee details
    void displayEmployeeDetails() {
        cout << "Employee ID: " << eid << endl;
        cout << "Employee Name: " << ename << endl;
        cout << "Salary: " << salary << endl;
    }
};

// Company class
class Company {
private:
    string companyName;
    string location;
    Employee employees[10]; // Array to hold 10 employees
    int employeeCount;

public:
    // Constructor to initialize Company
    Company() : companyName(""), location(""), employeeCount(0) {}

    // Function to set company details
    void setCompanyDetails(string name, string loc) {
        companyName = name;
        location = loc;
    }

    // Function to add an employee to the company
    void addEmployee(int id, string name, double salary) {
        if (employeeCount < 10) {
            employees[employeeCount].setEmployeeDetails(id, name, salary);
            employeeCount++;
        } else {
            cout << "Cannot add more employees. Maximum limit reached." << endl;
        }
    }

    // Function to display company details
    void displayCompanyDetails() {
        cout << "Company Name: " << companyName << endl;
        cout << "Location: " << location << endl;
        cout << "Number of Employees: " << employeeCount << endl;
        cout << "Employee Details: " << endl;
        for (int i = 0; i < employeeCount; i++) {
            employees[i].displayEmployeeDetails();
            cout << "--------------------------" << endl;
        }
    }
};

int main() {
    // Create a company object
    Company myCompany;

    // Set company details
    myCompany.setCompanyDetails("Tech Corp", "Kathmandu");

    // Add employees to the company
    myCompany.addEmployee(101, "John Doe", 50000);
    myCompany.addEmployee(102, "Jane Smith", 55000);
    myCompany.addEmployee(103, "Emily Davis", 60000);

    // Display company and employee details
    myCompany.displayCompanyDetails();

    return 0;
}
