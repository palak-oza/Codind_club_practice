#include<iostream>                                                //header files
#include <cstring>
using namespace std;

class student
{
    private: 
        char name[20], std[3],div[5],dob[11],blood_grp[5],cont_add[5],phone_num[11],licence_No[16];
        int roll_No; 
    public:
        static int stdcnt;			 //Static variable
        student();      			//Default Constructor 
        student(char name1[20],int roll_No1,char std1[3],char div1[5],char dob1[11],char blood_grp1[5],char cont_add1[5],char phone_num1[11],char license_No1[16]);                       //Parameterized Constructor
        void display();
        friend class studFrnd; 	      //Friend Class 
    student(student &temp);	     //Copy Constructor
    inline void get();  		     //Inline 
    static void show_cnt()                  //Static Member Function
{
      cout<<"Number of objects are : "<<stdcnt;
    }
};

  student::student() 			//Default Constructor
{
  roll_No = 0;
  strcpy(name,"MAHESH");
  strcpy(std,"SE");
  strcpy(div,"Comp");
  strcpy(dob,"DD/MM/YYYY");
  strcpy(blood_grp,"AB");
  strcpy(cont_add,"Pune");
  strcpy(phone_num,"1234567890");
  strcpy(licence_No,"MH143456789");
  stdcnt++; //
}
student::student(char name1[20],int roll_No1,char std1[],char div1[],char dob1[],char   blood_grp1[],char cont_add1[],char phone_num1[],char license_No1[])			//Parameterized Constructor
{
  strcpy(this->name,name1);						//this pointer 
  this->roll_No = roll_No1;
  strcpy(this->std,std1);
  strcpy(this->div,div1);
  strcpy(this->dob,dob1);
  strcpy(this->blood_grp,blood_grp1);
  strcpy(this->cont_add,cont_add1);
  strcpy(this->phone_num,phone_num1);
  strcpy(this->licence_No,license_No1);
  stdcnt++;
}
student::student(student &temp)		//Copy Constructor
{
  strcpy(name,temp.name);
  roll_No = temp.roll_No;
  strcpy(std,temp.std);
  strcpy(div,temp.div);
  strcpy(dob,temp.dob);
  strcpy(blood_grp,temp.blood_grp);
  strcpy(cont_add,temp.cont_add);
  strcpy(phone_num,temp.phone_num);
  strcpy(licence_No,temp.licence_No);
  stdcnt++;
}
inline void student::get()		//Copy Constructor
{
    cout<<"Enter name :";
    cin>>name;
    cout<<"Enter roll no :";
    cin>>roll_No;
    cout<<"Enter class :";
    cin>>std;
    cout<<"Enter division :";
    cin>>div;
    cout<<"Enter DOB :";
    cin>>dob;
    cout<<"Enter Blood group :";
    cin>>blood_grp;
    cout<<"Enter Address :";
    cin>>cont_add;
    cout<<"Enter phone number :";
    cin>>phone_num;
  try						 //Exception Handling
  {
    while(strlen(phone_num) != 10)
    {
      int a = strlen(phone_num);
      throw a;
    }
  }
catch(int a)
  {
    cout<<"invalid Phone number";
  }
  cout<<"Enter license number :";
  cin>>licence_No;
}
class studFrnd				//Friend class
{
  public:
    void put(student temp){
      cout<<temp.name<<"\t"<<temp.roll_No<<"\t"<<temp.std<<"    "<<temp.div<<"  "<<temp.dob<<"      "<<temp.blood_grp<<"           "<<temp.cont_add<<"          "<<temp.phone_num<<"   "<<temp.licence_No<<endl;
    }
};

void student:: display(){
  cout<<name<<"\t"<<roll_No<<"\t"<<std<<"    "<<div<<"  "<<dob<<"      "<<blood_grp<<"           "<<cont_add<<"          "<<phone_num<<"   "<<licence_No<<endl;
}

int student::stdcnt=0; 			//Static Variable
int main()				//Main Function
{
    student s1;				//Default Constructor
    student s2("PALAK",35,"SE","comp","05/01/2002","A+","I2IT","9090909090","MH-123456732");
//Parameterized Constructor
student s3(s2);				 //Copy Constructor
    student s4;
    int n;
    cout<<"enter the number of objects : ";
    cin>>n;
    student a[n]; 				//Array of Objects
    student* stdPtr[n];			//Array of Pointers to Objects
    int cnt = 0;
    char choice; 
    do{
      stdPtr[cnt] = new student;		 //new operator
      stdPtr[cnt]->get();
      cnt++;
      cout<<"Enter Another Student (y/n) : ";	//User Defined input
      cin>>choice;
    }while(choice=='y');
    cout<<"Using Array of object"<<endl;
    for(int i=0;i<n;i++){
        a[i].get();
    }
    cout<<”\nInline function get ”;
    s4.get();
    // Friend class
    studFrnd sf;
    cout<<"\nName  "<<" RollNo "<<" Class "<<" Div "<<"  Date Of Birth "<<" Blood Group "<<" Cont_add "<<"   Phone No "<<"  License No "<<endl;
    sf.put(s1);
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    for(int i=0;i<n;i++){
        a[i].display();
    }
    for(int i=0;i<cnt;i++){
      delete(stdPtr[i]);			 //Delete operator
    }
    student::show_cnt(); 			//Static Member Function
    return 0;
}
