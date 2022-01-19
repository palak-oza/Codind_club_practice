#include<iostream>                        //header files
using namespace std;
class complex
{
private:
    int real, imag;
public:
     complex() 			// Default Constructor.
    {
    real=0;
    imag=0;
    }
    complex operator +(complex m2);				//function definitions
    complex operator *(complex m2);
    friend ostream & operator <<(ostream &output, complex &m2);
    friend istream & operator >>(istream &input, complex &m2);
};

    complex complex :: operator +(complex m2)   		// Add function operator overloading 
{
   complex temp;
    temp.real = real + m2.real;
    temp.imag = imag + m2.imag;
    return temp;
}
    complex complex :: operator*(complex m2)	  	// Multiplication function operator overloading
{
    complex temp ;
    temp.real = real*m2.real - imag*m2.imag;
    temp.imag = real*m2.imag + imag*m2.real;
    return temp;
} 
  ostream & operator <<(ostream &output, complex &m2)		//Output function operator overloading
{
  output<<m2.real<<" + ";
  output<<m2.imag<<" i";
  return output;
}
  istream & operator >>(istream &input, complex &m2)		     //Input function operator overloading  
{
  cout<<"Enter the real part of number : ";
  input>>m2.real;
  cout<<"Enter the imaginary part of number : ";
  input>>m2.imag;
  return input;
} 

    int main(){ 					// Main Function
    complex n,n1,n2,n3;
    cin>>n1;
    cin>>n2;
    cout<<"\n the default complex number is "<<n<<endl;
    cout<<"the complex number is "<<n1<<endl;
    cout<<"the  complex number is "<<n2<<endl;
    cout<<"The sum of two complex number is : ";
    n3 = n1 + n2; 
    cout<<n3<<endl;
    cout<<"\nThe Multiplication of two complex number is : ";
    n3 = n1 * n2;
    cout<<n3<<endl;
    return 0;
}
