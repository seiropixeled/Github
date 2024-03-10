#include <iostream>
#include <string>
using namespace std;

class User
{
private:
    string name;
    int birthYear;
    double salary;

public:
    // Constructor to initialize User object with name, birth year, and salary
    User(string n, int year, double sal) : name(n), birthYear(year), salary(sal) {}

    // Checking if this user is elder than another user
    bool isElderThan(const User &other) const
    {
        return birthYear < other.birthYear; // Comparing birth years
    }

    // Calculating the average salary of 2 users
    double getAverageSalary(const User &other) const
    {
        return (salary + other.salary) / 2.0; // To calculate average salary
    }

    // Incrementing the salary of user by a given percentage
    void incrementSalary(double percentage)
    {
        salary *= (1 + percentage / 100.0); // Increase salary by percentage
    }

    // Displaying details of the user
    void displayDetails() const
    {
        cout << "Name: " << name << endl;
        cout << "Birth Year: " << birthYear << endl;
        cout << "Salary: Rs. " << salary << endl;
    }
};

int main()
{
    string name1, name2;
    int birthYear1, birthYear2;
    double salary1, salary2;
    cout << "For user 1:" << endl;
    // Prompt the user to enter details for user1
    cout << "Enter name: ";
    cin >> name1;
    cout << "Enter birth year: ";
    cin >> birthYear1;
    cout << "Enter salary: ";
    cin >> salary1;

    // Prompt the user to enter details for user2
    cout << "For user 2:" << endl;
    cout << "Enter name: ";
    cin >> name2;
    cout << "Enter birth year: ";
    cin >> birthYear2;
    cout << "Enter salary: ";
    cin >> salary2;

    // Create User objects with the provided input
    User user1(name1, birthYear1, salary1);
    User user2(name2, birthYear2, salary2);

    // Compare the ages of the two users and display the result
    if (user1.isElderThan(user2))
        cout << endl
             << name1 << " is elder than " << name2 << "." << endl;
    else if (user2.isElderThan(user1))
        cout << name2 << " is elder than " << name1 << "." << endl;
    else
        cout << "Both " << name1 << " and" << " " << name2 << " have the same age." << endl;

    // Calculate and display the average salary of the two users
    cout << "Average salary: Rs." << user1.getAverageSalary(user2) << endl;

    // Increment the salaries of the users by a percentage
    user1.incrementSalary(5);
    user2.incrementSalary(10);

    // Display the details of both users after incrementing salaries
    cout << "\nAfter incrementing salaries:\n";
    user1.displayDetails();
    user2.displayDetails();

    return 0;
    
}
