#include<iostream>                  //including header files
using namespace std;               //declaring the scope of program
class complex                     //class name "complex"
{
 public:
 float real,img;          //declared variable of type float


complex(){}              //default constructor
    complex operator+ (complex);
    complex operator* (complex);
    friend ostream &operator<<(ostream &,complex&);
    friend istream &operator<<(istream &,complex&);

};

 complex complex:: operator + (complex obj)
{
 complex temp;
 temp.real=real+obj.real;
 temp.img=img+obj.img;
 return (temp);
}
 istream &operator >> (istream &is,complex &obj)
{
 is>>obj.real;
 is>>obj.img;
 return is;
}
 ostream &operator<<(ostream &out,complex &obj)
{
 out<<""<<obj.real;
 out<<"+"<<obj.img<<"i";
 return out;
}
 complex complex :: operator * (complex obj)
{
   complex temp;
        temp.real=real*obj.real-img*obj.img;
        temp.img=real*obj.img+img*obj.real;
        return (temp);
}


int main()
{
 complex a,b,c,d;
 cout<<"\nEnter first complex number\n";
 cout<<"\nEnter real and imaginary:\t\n";
 cin>>a;
 cout<<"\n\nEnter second complex number \n";
 cout<<"\nEnter real and imaginary:\t\n";
 cin>>b;
 cout<<"\n\tArithmetic operations";
 c=a+b;
 cout<<"\nAddition = ";
 cout<<c;
 d=a*b;
 cout<<"\nMultiplication=";
 cout<<d;
 cout<<endl;
 return 0;

}
