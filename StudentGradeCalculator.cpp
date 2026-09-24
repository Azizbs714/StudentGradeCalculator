#include <iostream>
#include <string>
using namespace std;

double calculateAverage(int grade1, int grade2, int grade3)
{
    return (grade1 + grade2 + grade3) / 3.0;
}
int Add(int number1, int number2)
{
    return number1 + number2;
}
int main()
{
    string studentName = "Azizos";
    int grade1 = 85;
    int grade2 = 90;
    int grade3 = 80;
    int maxNumOfSubjects = 3;




    double average = calculateAverage(grade1, grade2, grade3);
    cout << "Welcome To The App Average Calculation : " << endl;
    cout << "Student: " << studentName << endl;
    cout << "Max Number of Subjects: " << maxNumOfSubjects << endl;
    cout << "Grade 1: " << grade1 << endl;
    cout << "Grade 2: " << grade2 << endl;
    cout << "Grade 3: " << grade3 << endl;
    cout << "Average: " << average << endl;

    return 0;
}