#include <iostream>
using namespace std;
int main(){

    // Print hello world on the screen

    cout<<"PROGRAM NO. 1 : "<<endl;
    cout<<"Hello world !"<<endl<<endl;

    // Print name, roll no, department

    cout<<"PROGRAM NO. 2 : "<<endl;
    cout<<"Name : M.Ali"<<endl;
    cout<<"Roll no. : 0565"<<endl;
    cout<<"Department : Computer Science"<<endl<<endl;

    // Print a small poem

    cout<<"PROGRAM NO. 3 : "<<endl;
    cout<<"Roses are red."<<endl;
    cout<<"Voilets are blue."<<endl;
    cout<<"C++ is fun."<<endl;
    cout<<"And so are you."<<endl<<endl;

    // Print a motivational quote

    cout<<"PROGRAM NO. 4 : "<<endl;
    cout<<"\"The future belongs to those who believe in the beauty of their dreams.\""<<endl<<endl;

    // Print a multiplication table of 5

    cout<<"PROGRAM NO. 5 : "<<endl;
    cout<<"5 X 1 = 5"<<endl;
    cout<<"5 X 2 = 10"<<endl;
    cout<<"5 X 3 = 15"<<endl;
    cout<<"5 X 4 = 20"<<endl;
    cout<<"5 X 5 = 25"<<endl;
    cout<<"5 X 6 = 30"<<endl;
    cout<<"5 X 7 = 35"<<endl;
    cout<<"5 X 8 = 40"<<endl;
    cout<<"5 X 9 = 45"<<endl;
    cout<<"5 X 10 = 50"<<endl<<endl;

    // Print a box using stars or asteriks

    cout<<"PROGRAM NO. 6 : "<<endl;
    cout<<"*****"<<endl;
    cout<<"*****"<<endl;
    cout<<"*****"<<endl;
    cout<<"*****"<<endl<<endl;
    
    // Input two numbers from user and print its sum
    
    cout<<"PROGRAM NO. 7 : "<<endl;
    int num1,num2;
    cout<<"Enter first number = ";
    cin>>num1;
    cout<<"Enter second number = ";
    cin>>num2;
    int sum = num1 + num2;
    cout<<"The sum of two given numbers = "<<sum<<endl<<endl;

    // Input two numbers from user and print its average
    
    cout<<"PROGRAM NO. 8 : "<<endl;
    cout<<"Enter first number = ";
    cin>>num1;
    cout<<"Enter second number = ";
    cin>>num2;
    float average = (num1 + num2)/2.0;
    cout<<"The average of two given numbers = "<<average<<endl<<endl;

    // Input a number from user and print that it is even or odd
    
    cout<<"PROGRAM NO. 9 : "<<endl;
    int num;
    cout<<"Enter a number = ";
    cin>>num;
    if(num % 2 == 0)
    cout<<"Input number is even."<<endl<<endl;
    
    else
    cout<<"Input number is odd."<<endl<<endl;

    // Input length and width of a rectangle and print its area
    
    cout<<"PROGRAM NO. 10 : "<<endl;
    int length,width;
    cout<<"Enter length of a rectangle = ";
    cin>>length;
    cout<<"Enter width of a rectangle = ";
    cin>>width;
    int area = length * width;
    cout<<"The area of a rectangle having length "<<length<<" and width "<<width<<" = "<<area<<endl<<endl;

    cout<<"LAB ENDS....."<<endl;

    return 0;
}
