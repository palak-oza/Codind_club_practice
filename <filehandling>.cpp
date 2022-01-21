#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class Student 
{
    private : 
        int admno;
        char name[50];
    public:
        void get_data()
        {
            cout<<"\nEnter admisson no : ";
            cin>>admno;
            cout<<"\nEnter name of student : ";
            cin>>name;
        } 
        void show_data()
        {
            cout<<"\nAdmission No : "<<admno;
            cout<<"\nStudents Name : "<<name<<endl;
        }
        int retAdmno()
        {
            return admno;
        }
};

void write_record()             //Function to Write to the file 
{
    ofstream outFile;
    outFile.open("student.dat",ios::binary | ios::app);

    Student obj;
    obj.get_data();
    outFile.write(reinterpret_cast<char *>(&obj), sizeof(obj));
    outFile.close();
}



void display_record()                         //Function to Read from the file 
{
    ifstream inFile;
    inFile.open("student.dat",ios::binary);
    Student obj;
    while(inFile.read((char *)&obj,sizeof(obj))){
        obj.show_data();
    }
    inFile.close();
}

void search_record (int n)	//Function to Search from the file
{
    ifstream inFile;
    inFile.open("student.dat",ios::binary);
    int Flag=0;

    Student obj;
    while((inFile.read((char*)&obj,sizeof(obj)))){
        if(obj.retAdmno() == n){
           obj.show_data();
           Flag = 1; 
           break;
        }
    }
    if(Flag == 0){
        cout<<"\nNo Record Present\n";
    }else{
        cout<<"\nRecord found";
    }
    inFile.close();
}

void delete_record(int n)	//Function to Delete from the file 
{
    Student obj;
    ifstream inFile;
    inFile.open("student.dat",ios::binary);
    
    ofstream outFile;
    outFile.open("temp.dat",ios::out | ios::binary);

    while (inFile.read((char*)&obj,sizeof(obj))){
        if(obj.retAdmno()!= n)
        {
            outFile.write((char*)&obj, sizeof(obj));
        }
        Else
        {
            cout<<"Record Deleted\n";
        }
    }
    inFile.close();
    outFile.close();

    if(remove("student.dat") != 0)
    {
       cout<<"File could Not be Removed…\n";
    }
    if(rename("temp.dat","student.dat") != 0)
    {
       cout<<"File could Not be Renamed…\n";
    }
}

void modify_record(int n)                //Function to make Modification into the file 
{
    fstream file;
    file.open("student.dat", ios::in | ios::out);

    Student obj;
    while(file.read((char*)&obj, sizeof(obj)))
    {
        if(obj.retAdmno() == n){
            cout<<"\nEnter the new details of the student: ";
            obj.get_data();
            int pos = 1 * sizeof(obj);
            file.seekp(-pos, ios::cur);
            file.write((char*)&obj, sizeof(obj));
        }
    } 
    file.close();
}

int main()           //Main Function
{
    int n,no,choice;
    char ch;
    do
   {
        cout<<"\n1. Insert Record\n";
        cout<<"\n2. Display Record\n";
        cout<<"\n3. Search Record\n";
        cout<<"\n4. Delete Record\n";
        cout<<"\n5. Modify Record\n";
        cout<<"\nEnter Your Choice : ";
        cin>>choice;
        switch(choice)
       {
            case 1:
                cout <<"\nHow many objects you want to write\n";
                cin>>n;
                for(int i=0;i<n;i++)
                {
                    write_record();
                }
                break;
            case 2:
                cout<<"\nList of Records";
                display_record();
                break;
            case 3:
                cout<<"\nEnter the admission no to search: ";
                cin>>no;
                cout<<"\nSearch Result";
                search_record(no);
                break;
            case 4:
                cout<<"\nEnter the admission no to delete: ";
                cin>>no;
                cout<<"\n Delete Record \n";
                delete_record(no);
                break;
            case 5:
                cout<<"\nEnter the admission no to modify: ";
                cin >> no;
                cout<<"\n# Modify Record\n";
                modify_record(no);
                break;
        }
        cout<<"\nDo you Want to perform further operations:(y/n) ";
        cin>>ch;
    }while(ch == 'y');
    return 0;
}
