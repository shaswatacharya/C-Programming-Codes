#include<iostream>
using namespace std;

int main(){
    int s; // Variable to store the number of students
    float per; // Variable to store the percentage of each student
    
    cout << "Students:" << endl;
    cout << "Enter the No. of students: ";
    cin >> s; // Input the number of students

    cout << "Percentage:" << endl;
    for(int i = 0; i < s; i++){ // Loop through each student (use 'i < s' to iterate correctly)
        cout << "Enter percentage of student " << i + 1 << ": ";
        cin >> per; // Input the percentage of the current student

        // Check the percentage and print the corresponding grade
        if(per <= 100 && per >= 90){
            cout << "A+" << endl; // Grade A+ for 90% to 100%
        }
        else if(per < 90 && per >= 80){
            cout << "A" << endl; // Grade A for 80% to 89.99%
        }
        else if(per < 80 && per >= 70){
            cout << "B+" << endl; // Grade B+ for 70% to 79.99%
        }
        else if(per < 70 && per >= 60){
            cout << "B" << endl; // Grade B for 60% to 69.99%
        }
        else if(per < 60 && per >= 50){
            cout << "C+" << endl; // Grade C+ for 50% to 59.99%
        }
        else if(per < 50 && per >= 40){
            cout << "C" << endl; // Grade C for 40% to 49.99%
        }
        else if(per < 40 && per >= 0){
            cout << "Failed" << endl; // Failed for 0% to 39.99%
        }
        else {
            cout << "Invalid percentage" << endl; // Handle invalid percentage input
        }
    }
    
    return 0;
}

