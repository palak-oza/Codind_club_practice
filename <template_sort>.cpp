#include<iostream> 
#include<conio.h> 
#include<stdio.h> 
using namespace std; 
template <class t> 
void selsort(t a[], int n) 
{ 
int i, j, min; 
t temp; 
for (i = 0; i < n; i++) 
{ 
min = i; 
for (j = i + 1; j < n; j++) 
{ 
if (a[j] < a[min]) 
{ 
min = j; 
} 
} 
temp = a[min]; 
a[min] = a[i]; 
a[i] = temp; 
} 
return; 
} 
template<class t> 
void display(t arr[], int n) 
{ 
int i; 
cout << "\nElements are: "; 
for (i = 0; i < n; i++) 
{ 
cout << arr[i]<<" "; 
} 
return; 
} 
int main() 
{ 
int ch,i,n,arr1[10]; 
float arr2[10]; 
do 
{
OOPS ASSIGNMENT -5 
cout << "\nMENU"; 
cout << "\n1.Integer type array sort"; 
cout << "\n2.Float type array sort"; 
cout << "\n3.exit"; 
cout << "\n choice: "; 
cin >> ch; 
cout << "\nEnter number of elements in array: "; 
cin >> n; 
switch (ch) 
{ 
case 1: 
for (i = 0; i < n; i++) 
{ 
cout << "\nEnter elements: "; 
cin >> arr1[i]; 
} 
selsort(arr1, n); 
display(arr1, n); 
break; 
case 2: 
for (i = 0; i < n; i++) 
{ 
cout << "\nEnter elements: "; 
cin >> arr2[i]; 
} 
selsort(arr2, n); 
display(arr2, n); 
break; 
case 3: 
exit(0); 
} 
} while (ch > 0 && ch < 4); 
_getch(); 
return(0); 
} 
