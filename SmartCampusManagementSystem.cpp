#include<iostream>
#include<ctime>
using namespace std;
class Person {
public:
    string id;
    string name;
    string dept;
    string contact;

};
class Student : public Person{
public:
    void getinfo(){
    cout<<"--->ID = "<<id<<endl;
    cout<<"--->Name = "<<name<<endl;
    cout<<"--->Department = "<<dept<<endl;
    cout<<"--->Contact Number = "<<contact<<endl;}

    void registration(){
    cout<<"Enter Student ID: ";
    cin>>id;
    cout<<"Enter Student name: ";
    cin>>name;
    cout<<"Enter Students Department: ";
    cin>>dept;
    cout<<"Enter Students Contact Number: ";
    cin>>contact;
    }

    void displaystudents(){
    cout<<"---ID: "<<id<<endl;
    cout<<"---Name: "<<name<<endl;
    cout<<"---Department: "<<dept<<endl;
    cout<<"---Contact Number: "<<contact<<endl;
    }
   };
class Teacher: public Person{public:

 void teacherregistration(){
    cout<<"Enter Teacher's ID: ";
    cin>>id;
    cout<<"Enter Teacher's name: ";
    cin>>name;
    cout<<"Enter Teacher's Department: ";
    cin>>dept;
    cout<<"Enter Teacher's Contact Number: ";
    cin>>contact;
    }
    void displayteachers(){
    cout<<"---ID: "<<id<<endl;
    cout<<"---Name: "<<name<<endl;
    cout<<"---Department: "<<dept<<endl;
    cout<<"---Contact Number: "<<contact<<endl;
    }
};

//library managment
class Library{
public:
    string ISBN;
    string title;
    string author;
    string copies;
    int duedate=15;
    int returndate;
    double fine;

    void calculatefine(){
    if (returndate>duedate){
        fine=(returndate-duedate)*1;
        cout<<"Fine for Late return: $"<<fine<<" (1 dollar per day) "<<endl;
    }else{
    cout<<"You returned Book within due date. Congratulations."<<endl;}}

    void registerbook(){
    cout<<"Enter the ISBN: ";
    cin>>ISBN;
    cout<<"Enter the Title of Book: ";
    cin>>title;
    cout<<"Enter the Author's Name: ";
    cin>>author;
    cout<<"Enter the Number of copies of book: ";
    cin>>copies;
    time_t now=time(0);
    cout<<"Thank you. You registered Book on "<<ctime(&now);};

    void issuebook(){
        ISBN="";
        title="";
        author="";
        copies="";

   cout<<"Book Issued Successfully. Enjoy Reading.\n";
    time_t now=time(0);
    cout<<"Thank you. You Issued Book on "<<ctime(&now);
    };

     void displaybook(){
    cout<<"ISBN is: "<<ISBN<<endl;
    cout<<"Title is: "<<title<<endl;
    cout<<"The name of Author is: "<<author<<endl;
    cout<<"The number of copies of book is: "<<copies<<endl;
    };

    void returnbook(){

    cout<<"Enter the ISBN: ";
    cin>>ISBN;
    cout<<"Enter the Title of Book: ";
    cin>>title;
    cout<<"Enter the Author's Name: ";
    cin>>author;
    cout<<"Enter the Number of copies of book: ";
    cin>>copies;
    cout<<"The Number of days You had the book: ";
    cin>>returndate;
    calculatefine();
    time_t now=time(0);
    cout<<"Thank you. You returned book on "<<ctime(&now);}

};

//Attendance system
class attendance{
public:
    string rollno;
    char ap;
int student(){int psum,asum=0;

for(int i=1;i<=60;i++){cout<<"Student Attendance Management.\n";

        cout<<"1.Enter Your Attendance.\n";
        cout<<"2.Total Presentees.\n";
        cout<<"3.Total Absentees.\n";
        cout<<"4.Exit...\n";int a;
cout<<"---Select: ";cin>>a;
switch(a){
    case 1:
        cout<<"-->Student "<<i<<endl;
    cout<<"Enter your Roll no: ";cin>>rollno;
    cout<<"Enter P for present and A for absent: ";cin>>ap;
    if(ap=='P'){psum++;};
    if(ap=='A'){asum++;};
break;
    case 2:
        cout<<"---------->The total number of Presentees is: "<<psum<<" student/students."<<endl;break;
    case 3:
            cout<<"---------->The total attendance is: "<<asum<<" student/students."<<endl;break;
    case 4:
            return 0;
default:cout<<"Invalid option. Try again.\n";}

         };};

        //Teachers
int teacher(){int psum=0;int asum=0;

for(int i=1;i<=60;i++){cout<<"Teacher Attendance Management.\n";

        cout<<"1.Enter Your Attendance.\n";
        cout<<"2.Total Presentees.\n";
        cout<<"3.Total Absentees.\n";
        cout<<"4.Exit...\n";int a;
cout<<"---Select:";cin>>a;
switch(a){
    case 1:
        cout<<"-->Teacher "<<i<<endl;
    cout<<"Enter your Teacher ID: ";cin>>rollno;
    cout<<"Enter P for present and A for absent : ";cin>>ap;
    if(ap=='P'){psum++;};
    if(ap=='A'){asum++;};
break;
    case 2:
        cout<<"---------->The total number of Presentees is: "<<psum<<" teacher/teachers."<<endl;break;
    case 3:
        cout<<"---------->The total number Absentees is: "<<asum<<" teacher/teachers."<<endl;break;
        case 4:
        return 0;
        default:cout<<"Invalid option. Try again.\n";}
        };};
};

int main(){int choice;
Teacher t1,t2,t3,t4,t5,t6,t7,t8,t9,t10;
Student s1,s2,s3,s4,s5,s6,s7,s8,s9,s10;


cout<<"--------------CEA Project By Ilyan Khan 24CSE24--------------\n";
cout<<"1.Student and Faculty Management.\n";
cout<<"2.Library Management.\n";
cout<<"3.Attendance System.\n";
cout<<"4.Exit...\n";
cout<<"---Select the option: ";int x;cin>>x;
while(1){
switch(x){
    case 1:{
cout<<"------------Student & Faculty Management------------\n";
cout<<"1.Registration for Students...\n";
cout<<"2.Search Students...\n";
cout<<"3.Update Student...\n";
cout<<"4.Total 24CSE students...\n";
cout<<"5.Registration for teachers...\n";
cout<<"6.Display teachers...\n";
cout<<"7.Update teacher...\n";
cout<<"8.Exit...\n";
cout<<"-----Select the options----->: ";cin>>choice;
switch(choice){
     case 1:
int st;cout<<"Start registration from 1 to onwards.\n";
cout<<"Register student: ";cin>>st;

switch(st){
case 1:
cout<<"Student 1."<<endl;
s1.registration();break;

case 2:
cout<<"Student 2."<<endl;
s2.registration();break;

case 3:
cout<<"Student 3."<<endl;
s3.registration();break;

case 4:
cout<<"Student 4."<<endl;
s4.registration();break;

case 5:
cout<<"Student 5."<<endl;
s5.registration();break;

case 6:
cout<<"Student 6."<<endl;
s6.registration();break;

case 7:
cout<<"Student 7."<<endl;
s7.registration();break;

case 8:
cout<<"Student 8."<<endl;
s8.registration();break;

case 9:
cout<<"Student 9."<<endl;
s9.registration();break;

case 10:
cout<<"Student 10."<<endl;
s10.registration();break;

case 11:
    return 0;
default:
    cout<<"Invalid choice. Try again.\n";
break;}
break;
     case 2:
{int n;
cout<<"You want to display student of serial number : ";cin>>n;

switch(n){
case 1:
s1.displaystudents();break;

case 2:
s2.displaystudents();break;

case 3:
s3.displaystudents();break;

case 4:
s4.displaystudents();break;

case 5:
s5.displaystudents();break;

case 6:
s6.displaystudents();break;

case 7:
s7.displaystudents();break;

case 8:
s8.displaystudents();break;

case 9:
s9.displaystudents();break;

case 10:
s10.displaystudents();break;

case 11:
    return 0;
default:
    cout<<"Invalid choice. Try again.\n";

};break;};
      case 3:{int a;
cout<<"Update The Student Information...\n";
cout<<"Select The Student From 1 to 10: ";cin>>a;
switch(a){
case 1:
s1.registration();break;

case 2:
s1.registration();break;

case 3:
s1.registration();break;

case 4:
s1.registration();break;

case 5:
s1.registration();break;

case 6:
s1.registration();break;

case 7:
s1.registration();break;

case 8:
s1.registration();break;

case 9:
s1.registration();break;

case 10:
s1.registration();break;

case 11:
    return 0;};};break;
      case 4:
    {int s;
        cout<<"The Roll numbers of 24CSE students.\n";
    cout<<"Select the student with Roll Number (100 for Exit): ";
    cin>>s;
switch(s){
case 1:
{Student s1;
s1.id="24CSE01";
s1.name="Arishmah";
s1.dept="Computer Systems";
s1.contact="03181313100";
s1.getinfo();
break;}

case 2:
{Student s2;
s2.id="24CSE02";
s2.name="Paras";
s2.dept="Computer Systems";
s2.contact="03259295648";
s2.getinfo();break;}

case 3:
{Student s3;
s3.id="24CSE03";
s3.name="Sameer Gilal";
s3.dept="Computer Systems";
s3.contact="03163702103";
s3.getinfo();break;}

case 4:
{Student s4;
s4.id="24CSE04";
s4.name="Aamir khan";
s4.dept="Computer Systems";
s4.contact="03000538896";
s4.getinfo();break;}

case 5:
{Student s5;
s5.id="24CSE05";
s5.name="M.Hamza";
s5.dept="Computer Systems";
s5.contact="03180028801";
s5.getinfo();break;}

case 6:
{Student s6;
s6.id="24CSE06";
s6.name="Masood ali";
s6.dept="Computer Systems";
s6.contact="03146180173";
s6.getinfo();break;}

case 7:
{Student s7;
s7.id="24CSE07";
s7.name="Aleena Chachar";
s7.dept="Computer Systems";
s7.contact="03412913819";
s7.getinfo();break;}

case 9:
{Student s8;
s8.id="24CSE09";
s8.name="Ume Rubab";
s8.dept="Computer Systems";
s8.contact="";
s8.getinfo();break;}

case 10:
{Student s9;
s9.id="24CSE010";
s9.name="Zaheer";
s9.dept="Computer Systems";
s9.contact="03133407607";
s9.getinfo();break;}

case 12:
{Student s10;
s10.id="24CSE12";
s10.name="Sohail Ahmed";
s10.dept="Computer Systems";
s10.contact="03150376024";
s10.getinfo();break;}

case 13:
{Student s11;
s11.id="24CSE13";
s11.name="Ali Zohaib";
s11.dept="Computer Systems";
s11.contact="03192078311";
s11.getinfo();break;}

case 14:
{Student s12;
s12.id="24CSE14";
s12.name="Hishmat Rai";
s12.dept="Computer Systems";
s12.contact="03497230823";
s12.getinfo();break;}

case 15:
{Student s13;
s13.id="24CSE15";
s13.name="Fazal Rehman";
s13.dept="Computer Systems";
s13.contact="03123431034";
s13.getinfo();break;}

case 16:
{Student s14;
s14.id="24CSE16";
s14.name="Sameer Channa";
s14.dept="Computer Systems";
s14.contact="03263006180";
s14.getinfo();break;}

case 17:
{Student s15;
s15.id="24CSE17";
s15.name="Ghulam Nabi";
s15.dept="Computer Systems";
s15.contact="03001003260";
s15.getinfo();break;}

case 18:
{Student s16;
s16.id="24CSE18";
s16.name="Talha Rajput";
s16.dept="Computer Systems";
s16.contact="03208022832";
s16.getinfo();break;}

case 19:
{Student s17;
s17.id="24CSE19";
s17.name="Talha Memon";
s17.dept="Computer Systems";
s17.contact="03051442765";
s17.getinfo();break;}

case 20:
{Student s18;
s18.id="24CSE20";
s18.name="M.Kaifi";
s18.dept="Computer Systems";
s18.contact="03079830968";
s18.getinfo();break;}

case 21:
{Student s19;
s19.id="24CSE21";
s19.name="Shahzaib Arain";
s19.dept="Computer Systems";
s19.contact="03342162163";
s19.getinfo();break;}

case 22:
{Student s20;
s20.id="24CSE22";
s20.name="Ali Raza Memon";
s20.dept="Computer Systems";
s20.contact="03469279725";
s20.getinfo();break;}

case 23:
{Student s21;
s21.id="24CSE23";
s21.name="Abdul Qadir Soomro";
s21.dept="Computer Systems";
s21.contact="03353777523";
s21.getinfo();break;}

case 24:
{Student s22;
s22.id="24CSE24";
s22.name="Ilyan khan";
s22.dept="Computer Systems";
s22.contact="03213379342";
s22.getinfo();break;}

case 25:
{Student s23;
s23.id="24CSE25";
s23.name="M.Mujtaba";
s23.dept="Computer Systems";
s23.contact="03464912360";
s23.getinfo();break;}

case 28:
{Student s24;
s24.id="24CSE28";
s24.name="Ayaz Teghani";
s24.dept="Computer Systems";
s24.contact="03003274471";
s24.getinfo();break;}

case 29:
{Student s25;
s25.id="24CSE29";
s25.name="Asadullah";
s25.dept="Computer Systems";
s25.contact="03042507588";
s25.getinfo();break;}

case 34:
{Student s26;
s26.id="24CSE34";
s26.name="Hassnain Ali";
s26.dept="Computer Systems";
s26.contact="03308199252";
s26.getinfo();break;}

case 35:
{Student s27;
s27.id="24CSE35";
s27.name="Zuhaib Hussian";
s27.dept="Computer Systems";
s27.contact="03461996643";
s27.getinfo();break;}

case 36:
{Student s28;
s28.id="24CSE36";
s28.name="Tanveer Khoso";
s28.dept="Computer Systems";
s28.contact="03413417080";
s28.getinfo();break;}

case 38:
{Student s29;
s29.id="24CSE38";
s29.name="Hassam Wassan";
s29.dept="Computer Systems";
s29.contact="03003208940";
s29.getinfo();break;}

case 40:
{Student s30;
s30.id="24CSE40";
s30.name="Fayaz Ali";
s30.dept="Computer Systems";
s30.contact="03079830968";
s30.getinfo();break;}

case 42:
{Student s31;
s31.id="24CSE42";
s31.name="Asim Arain";
s31.dept="Computer Systems";
s31.contact="03363968772";
s31.getinfo();break;}

case 43:
{Student s32;
s32.id="24CSE43";
s32.name="Abdul Hannan";
s32.dept="Computer Systems";
s32.contact="03363328139";
s32.getinfo();break;}

case 44:
{Student s18;
s18.id="24CSE44";
s18.name="Abdul Raheem";
s18.dept="Computer Systems";
s18.contact="03322647095";
s18.getinfo();break;}

case 45:
{Student s33;
s33.id="24CSE45";
s33.name="Muhammad Taha";
s33.dept="Computer Systems";
s33.contact="03043152589";
s33.getinfo();break;}

case 47:
{Student s34;
s34.id="24CSE47";
s34.name="Sadia Samreen";
s34.dept="Computer Systems";
s34.contact="03044488525";
s34.getinfo();break;}

case 48:
{Student s35;
s35.id="24CSE48";
s35.name="Abdul Haq";
s35.dept="Computer Systems";
s35.contact="03108315638";
s35.getinfo();break;}

case 49:
{Student s36;
s36.id="24CSE49";
s36.name="Afifan Memon";
s36.dept="Computer Systems";
s36.contact="03171299170";
s36.getinfo();break;}

case 50:
{Student s37;
s37.id="24CSE50";
s37.name="Siraj Mahar";
s37.dept="Computer Systems";
s37.contact="03053741215";
s37.getinfo();break;}

case 51:
{Student s38;
s38.id="24CSE51";
s38.name="Uzair Samtio";
s38.dept="Computer Systems";
s38.contact="03128923959";
s38.getinfo();break;}

case 52:
{Student s39;
s39.id="24CSE52";
s39.name="Sohail Abbas";
s39.dept="Computer Systems";
s39.contact="03023286254";
s39.getinfo();break;}

case 53:
{Student s40;
s40.id="24CSE53";
s40.name="Sikandar Ali";
s40.dept="Computer Systems";
s40.contact="03033398359";
s40.getinfo();break;}

case 55:
{Student s41;
s41.id="24CSE55";
s41.name="Abdullah Langah";
s41.dept="Computer Systems";
s41.contact="03023216768";
s41.getinfo();break;}

case 56:
{Student s42;
s42.id="24CSE56";
s42.name="Saud UR Rehman";
s42.dept="Computer Systems";
s42.contact="";
s42.getinfo();break;}

case 58:
{Student s43;
s43.id="24CSE58";
s43.name="Ali Hussain";
s43.dept="Computer Systems";
s43.contact="03088392838";
s43.getinfo();break;}

case 59:
{Student s44;
s44.id="24CSE59";
s44.name="Mudasir Salam";
s44.dept="Computer Systems";
s44.contact="03145032361";
s44.getinfo();break;}

case 60:
{Student s45;
s45.id="24CSE60";
s45.name="Asmatullah khan";
s45.dept="Computer Systems";
s45.contact="03702468848";
s45.getinfo();break;}

case 100:
    break;

default:
    cout<<"Sorry, No student with that roll number.Try again."<<endl;
};
    }break;
     case 5:
         {
int b;cout<<"Start registration from 1 to onwards.\n";
cout<<"Register teacher: ";cin>>b;
switch(b){
case 1:
t1.teacherregistration();break;

case 2:
t2.teacherregistration();break;

case 3:
t3.teacherregistration();break;

case 4:
t4.teacherregistration();break;

case 5:
t5.teacherregistration();break;

case 6:
t6.teacherregistration();break;

case 7:
t7.teacherregistration();break;

case 8:
t8.teacherregistration();break;

case 9:
t9.teacherregistration();break;

case 10:
t10.teacherregistration();break;}};break;

     case 6:{
int c;
cout<<"Update The Student Information...\n";
cout<<"Select The Student From 1 to 10: ";cin>>c;
switch(c){
case 1:
t1.displayteachers();break;

case 2:
t2.displayteachers();break;

case 3:
t3.displayteachers();break;

case 4:
t4.displayteachers();break;

case 5:
t5.displayteachers();break;

case 6:
t6.displayteachers();break;

case 7:
t7.displayteachers();break;

case 8:
t8.displayteachers();break;

case 9:
t9.displayteachers();break;

case 10:
t10.displayteachers();break;

case 11:
    return 0;

default:
    cout<<"Invalid choice. Try Again.\n";};};
    break;
      case 7:{int d;
cout<<"Update The Teacher Information...\n";
cout<<"Select The Teacher From 1 to 10: ";cin>>d;
switch(d){
case 1:
t1.teacherregistration();break;

case 2:
t2.teacherregistration();break;

case 3:
t3.teacherregistration();break;

case 4:
t4.teacherregistration();break;

case 5:
t5.teacherregistration();break;

case 6:
t6.teacherregistration();break;

case 7:
t7.teacherregistration();break;

case 8:
t8.teacherregistration();break;

case 9:
t9.teacherregistration();break;

case 10:
t10.teacherregistration();break;

case 11:
return 0;

default:
cout<<"Invalid choice. Try again."<<endl;};
};break;
      case 8:
return 0;
default:
    cout<<"Invalid choice. Try again.\n";
};};break;
case 2:
{
    Library b1,b2,b3,b4,b5,b6,b7,b8,b9,b10;



    while(1){
    int a;

    cout<<"----------Library management System.----------\n";
    cout<<"1.Register Book.\n";
    cout<<"2.Display Books.\n";
    cout<<"3.Issue Book. \n";
    cout<<"4.Return Book. \n";
    cout<<"5.Exit...\n";
    cout<<"Select the option: ";
    cin>>a;
switch(a){
    case 1:{
        cout<<"Enter the number of Book You want to Register: ";int a;cin>>a;
        cout<<"---Book "<<a<<endl;
        switch(a){
case 1:
b1.registerbook();break;

case 2:
b2.registerbook();break;

case 3:
b3.registerbook();break;

case 4:
b4.registerbook();break;

case 5:
b5.registerbook();break;

case 6:
b6.registerbook();break;

case 7:
b7.registerbook();break;

case 8:
b8.registerbook();break;

case 9:
b9.registerbook();break;

case 10:
b10.registerbook();break;

case 11:
    break;

default:
    cout<<"invalid Choice. Try again.\n";}break;}
    case 2:{
        cout<<"Enter the number of Book You want to Display: ";int a;cin>>a;
        cout<<"---Book "<<a<<endl;
        switch(a){
case 1:
b1.displaybook();break;

case 2:
b2.displaybook();break;

case 3:
b3.displaybook();break;

case 4:
b4.displaybook();break;

case 5:
b5.displaybook();break;

case 6:
b6.displaybook();break;

case 7:
b7.displaybook();break;

case 8:
b8.displaybook();break;

case 9:
b9.displaybook();break;

case 10:
b10.displaybook();break;

case 11:
    break;

default:
    cout<<"Invalid Choice. Try again.\n";

break;}}break;

case 3:{
cout<<"Enter the number of Book You want to Issue: ";int a;cin>>a;
        cout<<"---Book "<<a<<endl;
        switch(a){
case 1:
b1.issuebook();break;

case 2:
b2.issuebook();break;

case 3:
b3.issuebook();break;

case 4:
b4.issuebook();break;

case 5:
b5.issuebook();break;

case 6:
b6.issuebook();break;

case 7:
b7.issuebook();break;

case 8:
b8.issuebook();break;

case 9:
b9.issuebook();break;

case 10:
b10.issuebook();break;

case 11:
    break;

default:
    cout<<"Invalid Choice. Try again.\n";};}break;
case 4:{
    cout<<"Enter the number of Book You want to Return: ";int a;cin>>a;
        cout<<"---Book "<<a<<endl;
        switch(a){
case 1:
b1.returnbook();break;

case 2:
b2.returnbook();break;

case 3:
b3.returnbook();break;

case 4:
b4.returnbook();break;

case 5:
b5.returnbook();break;

case 6:
b6.returnbook();break;

case 7:
b7.returnbook();break;

case 8:
b8.returnbook();break;

case 9:
b9.returnbook();break;

case 10:
b10.returnbook();break;

case 11:
    break;

default:
    cout<<"Invalid Choice. Try again.\n";}break;}

case 5:
        return 0;
};};
}break;
case 3:
    {
         cout<<"---------------Attendance System.---------------\n";
while(1){
attendance a1,b1;
cout<<"1.Students Attendance.\n";
cout<<"2.Teachers Attendance.\n";
cout<<"3.Exit...\n";
cout<<"---Select: ";int s;cin>>s;
switch(s){
    case 1:
a1.student();

break;

case 2:
b1.teacher();break;

case 3:
    return 0;
default:
    cout<<"Invalid option. Try again.\n";};};
return 0;
    }


    case 4:
    return 0;
default:
    cout<<"Invalid Choice. Try again.\n";

};}
return 0;}
