#include<iostream> 
#include<conio.h> 
#include<algorithm> 
#include<vector> 
using namespace std; 
class item 
{ 
public: 
int code; 
char name[20]; 
float cost; 
int quantity; 
void getdata(); 
void putdata(); 
bool operator == (const item& i1) 
{ 
if (code == i1.code) 
{ 
return 1; 
} 
else 
{ 
return 0; 
} 
} 
}; 
void item::getdata() 
{ 
cout << "\nEnter code of the item: "; 
cin >> code; 
cout << "\nEnter name of the item: "; 
cin >> name; 
cout << "\nEnter cost per unit of the item: "; 
cin >> cost; 
cout << "\nEnter quantity of the item: "; 
cin >> quantity; 
return; 
} 
void item::putdata() 
{ 
cout << "\ncode of the item is: " << code; 
cout << "\nName of the item is: " << name;
OOPS ASSIGNMENT -5 
cout << "\nCost of item per unit is: " << cost; 
cout << "\nQuantity of item required is: " << quantity; 
return; 
} 
void searchdata(vector<item> &items) 
{ 
item t; 
vector<item> ::iterator it; 
cout << "\nEnter code of the item to be searched: "; 
cin >> t.code; 
it = find(items.begin(), items.end(), t); 
if (it == items.end()) 
{ 
cout << "\nRecord for the searched item could not be found"; } 
else 
{ 
cout << "\nitem found...Record details are: " << "\n"; 
(*it).putdata(); 
} 
return; 
} 
bool compare(const item& i1, const item& i2) 
{ 
return i1.code < i2.code; 
} 
void sortdata(vector<item> &items) 
{ 
sort(items.begin(), items.end(), compare); 
return; 
} 
int main() 
{ 
vector <item> items; 
vector <item> ::iterator v; 
char ans; 
int ch; 
item obj1; 
do 
{ 
cout << "\nMENU"; 
cout << "\n1.Enter Data "; 
cout << "\n2.Display data"; 
cout << "\n3.search item"; 
cout << "\n4.Sort data"; 
cout << "\n5.Exit"; 
cout << "\nChoose from above : "; 
cin >> ch; 
switch (ch) 
{ 
case 1: 
  obj1.getdata(); 
  items.push_back(obj1); 
  break; 
case 2: 
  cout << "\n DATA IS: "; 
  for (v = items.begin(); v != items.end(); v++)
  OOPS ASSIGNMENT -5 
  { 
  (*v).putdata(); 
  } 
  break; 
case 3: 
  searchdata(items); 
  break; 
case 4: 
  sortdata(items); 
  break; 
case 5: 
  exit(0); 
  } 
  } while (ch>0 && ch<5); 
  getch(); 
  return(0); 
} 
