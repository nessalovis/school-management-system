#include <iostream>
#include <string>
#include <conio.h>
#include <dos.h>
#include <stdio.h>

using namespace std;

int main() {
    mainmenu:

    int optstu;
    int choice;
    int select;
    int stuid;
    int iD;
    int styr;
    int option;
    string name[15];
    string newName[15];
    string stucrs;
    string newCrs;
    char grade;
    char sresponse;

	cout << "\t\t\tSCHOOL MANAGEMENT SYSTEM\n";
	cout << "\t\t\t************************\n";

	cout << "Enter your choice:\n";
	cout << "1. Student\n";
	cout << "2. Teacher\n";
	cout << "3. Exit program\n";

	cin >> choice;

	if (choice==1) {
        stumain:
        cout << "\t\tWelcome to Student Info Portal.\n";
        cout << "\t\t*******************************\n";

        cout << "Press 1 to Add Student\n";
        cout << "Press 2 to Edit Student\n";
        cout << "Press 3 to Delete Student\n";
        cout << "Press 4 to Add, edit or delete courses\n";
        cout << "Press 5 to Enter student grade\n";
        cout << "Press 6 to Print student academic record\n";
        cout << "Press 0 to Previous Menu\n";

        cin >> optstu;

            if (optstu == 1) {
                cout << "Enter ID Number : \n";
                cin >> stuid;

                cout << "Enter Full Name : \n";
                //cin >> name;

                cout << "Enter Year :  \n";
                cin >> styr;

                cout << "\n\n\tStudent Added!\n";
            }
            else if (optstu==2) {
                cout << "Press 1 to edit name\n";
                cout << "Press 2 to edit ID number\n";
                cout << "Press 3 to edit year\n";
                cin >> select;
                if (select==1) {
                    cout << "Enter new name" << endl;
                    cin >> newName;
                    cout << "Name changed successfully" << endl;
                    cout << "New name = " << newName << endl;
                }else if (select==2) {
                    cout << "Enter new ID number" << endl;
                    cin >> newID;
                    cout << "ID successfully changed" << endl;
                    cout << "New ID = " << newID << endl;
                }else if (select==3) {
                    cout << "Enter new year" << endl;
                    cin >> newYear;
                    cout << "Year successfully changed" << endl;
                    cout << "New year = " << newYear << endl;
                }
                /*cout << "\nEnter Reg No:  ";
                  cin >> viewid;
                    if (viewid==stuid) {
                        cout << "Name :";
						cout << stuname;
						cout << "\nStudent Course:";
						cout << stucrs;
                    }*/
            }
            else if (optstu==3) {
                cout << "Enter details of student to delete" << endl;
                cout << "\nID Number : ";
                cin >> stuid;

                cout << "\nName : ";
                cin >> stuname;

                cout << "\nYear :  ";
                cin >> styr;

                cout << "\n\n\tStudent successfully deleted!";
            }
            //Add, edit or delete courses
            else if (optstu==4) {
                cout << "Press 1 to add course\n";
                cout << "Press 2 to edit course\n";
                cout << "Press 3 to delete course\n";
                cin >> option;

                if (option==1) {
                    cout << "Enter course code and course name" << endl;
                    cin >> stucrs;
                    cout << "Course added successfully!" << endl;
                }
                if (option==2) {
                    cout << "Enter course code and name for new course" << endl;
                    cin >> newCrs;
                    cout << "Course edited successfully" << endl;
                    cout << "New course = " << newCrs << endl;
                }
                if (option==3) {
                    cout << "Enter course code name to delete course" << endl;
                    cin >> stucrs;
                    cout << "Course deleted successfully" << endl;
                }
            }
            //enter student grade
            else if (optstu==5) {
                cout << "Enter your grade" << endl;
                cin >> grade;
                cout << "Grade entered. Your grade is : " << grade << endl;
            }
            //print academic record
            else if (optstu==6) {
                cout << "Enter student ID number to display academic record" << endl;
                cin >> iD;
                if (iD==stuid) {
                    cout << stuname << endl;
                    cout << stuid << endl;
                    cout << stucrs << endl;
                    cout << stuyr << endl;
                }else if(iD!=stuid) {
                    cout << "Records not found" << endl;
                    cout << "Please enter your student ID" << endl;
                }
            }
            else if (optstu==0) {
                goto mainmenu;
            }

			cout << "\n\n\tSucessfully Done!";
			cout << "\n\tPress 'x' to go to main menu" << endl;
			cin >> sresponse;

			if (sresponse=='x') {
                goto stumain;
			}
	}



	else {
		goto endp;
	}

    endp:
    cout << "\n\n\tPress any key to Exit.";
    getch();

}
