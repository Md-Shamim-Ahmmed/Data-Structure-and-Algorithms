// Write a program to calculate the SGPA and the merit position of a student. You must use the concept of OOP.



//Bismillahir Rahmanir Rahim//

#include <bits/stdc++.h>
using namespace std;

class calculate_the_CGPA_and_the_merit_position {
private:

    int n;
    vector<pair<double, int>> input_list;   // here first element is CGPA & second element is Student ID.
    static bool SortBaseOnFirstElement(const pair<double, int> &a, const pair<double, int> &b) {
        return a.first > b.first;           //Sort the input_list based on first element
    }
    
    static bool SortBaseOnSecondElement(const pair<double, int> &a, const pair<double, int> &b) {
        return a.second < b.second;         //Sort the input_list based on second element
    }
    
    void read() {
        cin >> n;
        while (n--) {
            int student_id;
            double cgpa = 0.0;
            cout << "Student ID: ";
            cin >> student_id;
            for (int i = 0; i < 3; i++) {
                double gpa;
                again_read:
                cout << "Course " << i + 1 << ": ";
                cin >> gpa;
                if (gpa < 0) {
                    cout << "GPA can not less than 0.\nSo aganin enter ,\n";
                    goto again_read;
                } else if (gpa > 4){
                    cout << "GPA can not greater than 4.\nSo aganin enter ,\n";
                    goto again_read;
                } else
                    cgpa += gpa;
            }
            cgpa /= 3;
            input_list.emplace_back(cgpa, student_id);
            cout << '\n';
        }
//        As some of time we fime same result more than one student.
//        So first we sort our pair list based on student ID,
//        then we sort our pair list based on cgpa.
//        for example if student id 190101's cgpa is 3.75 & 190109's cgpa is 3.75
//        when we sort a pair vector then we find :
//        190109's cgpa is 3.75
//        190101's cgpa is 3.75
//        but
//        We khow that it's not good for CGPA calculate
//        becase for cgpa calculate
//        the sorting from must be
//        190101's cgpa is 3.75
//        190109's cgpa is 3.75
//        thats why we sort first sort based on student id & then sort based on cgpa

        sort(input_list.begin(), input_list.end(), SortBaseOnSecondElement);
        sort(input_list.begin(), input_list.end(), SortBaseOnFirstElement);
//        sort(input_list.begin(), input_list.end(), greater<>());
//        sort(input_list.begin(), input_list.end(), less<>());
    }
    
    void print() {
        int student_id;
        cout << "Enter the student ID: ";
        cin >> student_id;
        cout << "\nOutput:\n";
        for (auto it : input_list) {
            static int pos = 1;
            if (it.second == student_id) {
                cout << "CGPA of Student ID  " << student_id << " is " << fixed << setprecision(2) << it.first << '\n';
                cout << "Merit position: " << pos << '\n';
                return;
            }
            pos++;
        }
        
        cout << "There is no one student in this class whose student ID is " << student_id << ".\n";
        //    for (auto it : input_list)
        //        cout << it.second << " " << fixed << setprecision(2) << it.first << '\n';
        //    cout << "\n\n";
    }
public:

    void input() {
        cout << "Input : \n" << "Enter total number of Student : ";
        read();
    }
    
    void output() {
        print();
    }
};

int main() {
    // freopen("input.txt", "r", stdin);
    calculate_the_CGPA_and_the_merit_position obj;
    obj.input();
    obj.output();
    return 0;
}
