#include <iostream>
using namespace std;
void menu();
void Options();
void Options1();
string name1, name2, name3;
   float rollNo1, rollNo2, rollNo3, room1, room2, room3;
   int option;
main()
{
   
   
   menu();
   Options();
   Options1();
}

void menu()
{
   cout << "#####################################################################" << endl;
   cout << "#                      MESS MANAGEMENT SYSTEM                       #" << endl;
   cout << "#####################################################################" << endl;
}
void Options()
{
   cout << "1.Add student 1" << endl;
   cout << "2.Add student 2" << endl;
   cout << "3.Add student 3" << endl;
   cout << "4.Show list of all students" << endl;
   cout << "5.Show price list of food" << endl;
   cout << "6.Show weekly menu of food" << endl;
   cout << "Select your option :" << endl;
   cin >> option;
}
void Options1()
{
   if (option == 1)
   {
      cout << "You have Entered Option 1" << endl;
      cout << "Enter name of student1: "<<endl;
      cin >> name1;
      cout << "Enter Roll No. of student1: "<<endl;
      cin >> rollNo1;
      cout << "Enter Room No. of student1: "<<endl;
      cin >> room1;
   }
   if (option == 2)
   {
      cout << "You have Entered Option 2" << endl;
      cout << "Enter name of student2: " << endl;
      cin >> name2;
      cout << "Enter Roll No. of student2: " << endl;
      cin >> rollNo2;
      cout << "Enter Room No. of student2: " << endl;
      cin >> room2;
   }
   if (option == 3)
   {
      cout << "You have Entered Option 3" << endl;
      cout << "Enter name of student3: " << endl;
      cin >> name3;
      cout << "Enter Roll No. of student3: " << endl;
      cin >> rollNo3;
      cout << "Enter Room No. of student3: " << endl;
      cin >> room3;
   }
   if (option == 4)
   {
      cout << "You have Entered Option 4"<<endl;
      cout << "name1"<< "\t" << "rollNo1"<< "\t"
           << "room1"<<endl;
      cout << "name2"
           << "\t"
           << "rollNo2"
           << "\t"
           << "room2"<<endl;
      cout << "name3"
           << "\t"
           << "rollNo3"
           << "\t"
           << "room3"<<endl;
   }
   if (option == 5)
   {
      cout << "You have Entered Option 5"<<endl;
      cout << "     Chicken                 170       " << endl;
      cout << "     Dal chicken             150       " << endl;
      cout << "     Bryaini                 180       " << endl;
      cout << "     Aloo gosht              170       " << endl;
      cout << "     Chineese rice           180       " << endl;
      cout << "     Sabzi                   140       " << endl;
      cout << "     Sabzi plao              170       " << endl;
      cout << "     Chana plao              140       " << endl;
      cout << "     Sabzi dish              140       " << endl;
      cout << "     Haleem                  150       " << endl;
      cout << "     Surprise                200       " << endl;
      cout << "     Kari pakora             130       " << endl;
      cout << "     White chana             140       " << endl;
      cout << "     Aloo anda               120       " << endl;
   }
   if (option == 6)
   {
      cout << "You have Entered Option 6"<<endl;
      cout << "   Day                       Lunch                    Dinner       " << endl;
      cout << "                                                                   " << endl;
      cout << "  Monday                    Chicken                 Chana plao     " << endl;
      cout << "  Tuesday                 Dal chicken               Sabzi dish     " << endl;
      cout << "  Wednesday                 Bryaini                   Haleem       " << endl;
      cout << "  Thursday                Aloo gosht                 Surprise      " << endl;
      cout << "  Friday                 Chineese rice              Kari pakora    " << endl;
      cout << "  Saturday                   Sabzi                  White chana    " << endl;
      cout << "  Sunday                   Sabzi plao               Aloo anda      " << endl;
   }
}