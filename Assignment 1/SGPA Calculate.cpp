// Write a program to calculate the SGPA and the merit position of a student. You must use the concept of OOP.



//Bismillahir Rahmanir Rahim//

#include<bits/stdc++.h>
using namespace std;

class Course {
    int c_number;
    double c_gpa;
    double c_credits;
public:
    void set_c_info(int cNumber, double cGpa, double cCredits) {
        this->c_number = cNumber;
        this->c_gpa = cGpa;
        this->c_credits = cCredits;
    }

    double get_credit() {
        return c_credits;
    }

    double get_gp() {
        return this->c_gpa * this->c_credits;
    }
};
class Student {
///Using composition concept
private:
    Course course[3];
    int student_id, merit, find_id;
    bool check = true;

    double total_credits() {
        double tc = 0.0;
        for (int i = 0; i < 3; i++)
            tc += course[i].get_credit();
        return tc;
    }

    double total_earned_creadit() {
        double tec = 0.0;
        for (int i = 0; i < 3; i++)
            tec += course[i].get_gp();

        return tec;
    }

public:
    void set_id(int studentId) {
        this->student_id = studentId;
    }

    int get_id() {
        return student_id;
    }

    void set_courses(Course c[3]) {
        for (int i = 0; i < 3; i++)
            course[i] = c[i];
    }

    double get_cgpa() {
        return total_earned_creadit() / total_credits();
    }

    void set_merit(int Merit) {
        this->merit = Merit;
    }

    int get_merit() {
        return merit;
    }

    int get_findId() {
        return find_id;
    }

    void set_bool(bool Check) {
        this->check = Check;
    }

    friend istream &operator>>(istream &, Student &);

    friend ostream &operator<<(ostream &out, Student student);

    friend bool operator==(const Student &c1, const Student &c2);

};

istream& operator>>(istream& in, Student& student) {
    if (student.check) {
        cout << "Enter Student ID: ";
        in >> student.student_id;
        student.set_id(student.student_id);
        double c_gpa, c_credits;
//    double total_credits = 0, total_gpa = 0;

        Course course[3];
        for (int i = 0; i < 3; i++) {
            cout << "Enter Course " << i + 1 << " Grad point and credits: ";
            in >> c_gpa >> c_credits;

            course[i].set_c_info(i + 1, c_gpa, c_credits);

            /*total_credits+=c_credits;
            total_gpa+=(c_gpa*c_credits);
            student.course[i].set_c_info(i+1,c_gpa,c_credits);*/
        }
        student.set_courses(course);
        return in;
    } else {
        in >> student.find_id;
        return in;
    }
}

bool operator== (const Student &c1, const Student &c2) {
    return c1.student_id == c2.find_id;
}

ostream& operator<<(ostream& out, Student student) {
    out << "Student ID: " << student.get_id() << endl;
    out << "Cgpa: " << student.get_cgpa() << endl;
    out << "Merit Position: " << student.get_merit() << endl;
    return out;
}
void merit_processing(Student student[],int N) {
///Traversing
    for (int i = 0; i < N; i++) {
        int merit = 0;
        ///Traversing again for searching hou many student cGPA is greater than i th Student cgpa
        for (int j = 0; j < N; j++) {
            if (student[i].get_cgpa() < student[j].get_cgpa()) merit++;
        }
        student[i].set_merit(merit + 1);
    }
}

int main() {
//    freopen("input.txt", "r", stdin);
    cout << "Enter the number of Student: ";
    int number_of_student;
    cin >> number_of_student;
    int find_id;
    Student student[number_of_student];
    ///Traverse data to input student information
    for (int i = 0; i < number_of_student; i++) {
        cin >> student[i];
    }
    merit_processing(student, number_of_student);
    cout << "\nLets print\nEnter the student ID: ";
    Student obj;
    obj.set_bool(false);
    cin >> obj;
    cout << "Output : \n";
    for (int i = 0; i < number_of_student; i++) {
        if (student[i].get_id() == obj.get_findId()) {
            cout << student[i] << endl;
            return 0;
        }
    }
    cout << "There is no student in this class whose ID -> " << obj.get_findId() << endl;
    return 0;
}
