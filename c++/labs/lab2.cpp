#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    
    
    // Print size of data types using sizeof() operator

    cout<<"PROGRAM NO. 1 : "<<endl;
    cout<<"The size of int data type is "<<sizeof(int)<<endl;
    cout<<"The size of float data type is "<<sizeof(float)<<endl;
    cout<<"The size of double data type is "<<sizeof(double)<<endl;
    cout<<"The size of char data type is "<<sizeof(char)<<endl;
    cout<<"The size of bool data type is "<<sizeof(bool)<<endl<<endl;

    /* Input two numbers from user and print their addition,
       subtraction, multiplication, division and modulus */

    cout<<"PROGRAM NO. 2 : "<<endl;
    int f,g;
    cout<<"Enter first number = ";
    cin>>f;
    cout<<"Enter second number = ";      
    cin>>g;
    int addition = f + g;
    cout<<"The addition of "<<f<<" and "<<g<<" is "<<addition<<" ."<<endl;  
    int subtraction = f - g; 
    cout<<"The subtraction of "<<f<<" and "<<g<<" is "<<subtraction<<" ."<<endl;
    int multiplication = f * g;   
    cout<<"The multiplication of "<<f<<" and "<<g<<" is "<<multiplication<<" ."<<endl; 
    if(g != 0){
    float division =(float) f / g;  
    cout<<"The division of "<<f<<" and "<<g<<" is "<<division<<" ."<<endl;   
    int modulus = f % g;
    cout<<"The modulus of "<<f<<" and "<<g<<" is "<<modulus<<" ."<<endl<<endl;  
    }   
    else {
    cout<<"Division not possible (cannot divide by zero )"<<endl;
    cout<<"Modulus not possible (cannot modulus by zero )"<<endl<<endl;
    }

    // Input temperature in celcius and print result in fahrenheit

    cout<<"PROGRAM NO. 3 : "<<endl;
    int temperatureInCalcius;
    cout<<"Enter temperature in celcius = ";
    cin>>temperatureInCalcius;
    int temperatureInFahrenheit = ( temperatureInCalcius * 9 / 5 + 32);
    cout<<"Temperature in Fahrenheit = "<<temperatureInFahrenheit<<endl<<endl;

    // Input an integer and print its floating point version and its ASCII equivalent

    cout<<"PROGRAM NO. 4 : "<<endl;
    int a;
    cout<<"Enter an integer = ";
    cin>>a;
    float b = static_cast<float>(a);
    cout<<fixed<<setprecision(3);
    char c = static_cast<char>(a);        
    cout<<"Floating point of given integer is "<<b<<" ."<<endl;
    cout<<"ASCII equivalent of given integer is "<<c<<" ."<<endl<<endl;

    // Print result of mathematical equation

    cout<<"PROGRAM NO. 5 : "<<endl;
    int x,y,z;
    cout<<"Enter first number = ";
    cin>>x;
    cout<<"Enter second number = ";
    cin>>y;
    cout<<"Enter third number = ";
    cin>>z;
    int result = x + y * z - x / y + z % y;
    cout<<"The result of the equation ( x + y * z - x / y + z % y) is "<<result<<" ."<<endl<<endl;

    // Print ASCII values of all upper case alphabets
    
    cout<<"PROGRAM NO. 6 : "<<endl;
    cout<<"Alphabets       ASCII values "<<endl;
    for( char i = 'A'; i <= 'Z'; i++){
        int j = static_cast<int>(i);
        cout<<"  "<<i<<"             "<<j<<endl;
    }
    cout<<endl;

    // Interchange the contents of two variables using third variable as a sweeper

    cout<<"PROGRAM NO. 7 : "<<endl;
    char ch1 = 'D'; char ch2 = 'G';
    cout<<"Before swapping, the value of first character "<<ch1<<" and second character "<<ch2<<" ."<<endl;
    char temp;
    temp = ch1;
    ch1 = ch2;          
    ch2 = temp;            
    cout<<"After swapping, the value of first character "<<ch1<<" and second character "<<ch2<<" ."<<endl<<endl;

    // Input three numbers from user and print largest one

    cout<<"PROGRAM NO. 8 : "<<endl;
    int num1, num2, num3;
    cout<<"Enter first number = ";
    cin>>num1;
    cout<<"Enter second number = ";
    cin>>num2;
    cout<<"Enter third number = ";
    cin>>num3;
    if(num1 == num2 && num2 == num3){
        cout<<"All three numbers are equal."<<endl<<endl;
    }
    else if(num1 >= num2 && num1 >= num3){
        cout<<num1<<" is the largest number among three numbers."<<endl<<endl;
    }
    else if(num2 >= num1 && num2 >= num3){
        cout<<num2<<" is the largest number among three numbers."<<endl<<endl;
    }
    else
        cout<<num3<<" is the largest number among three numbers."<<endl<<endl;

    // Input two numbers from user and determine 1st number is multiple of 2nd or not

    cout<<"PROGRAM NO. 9 : "<<endl;
    int num4, num5;
    cout<<"Enter first number = ";
    cin>>num4;
    cout<<"Enter second number = ";
    cin>>num5;
    if(num5 == 0){
        cout<<"Cannot check multiple (division by zero)"<<endl<<endl;
    }
    else if(num4 % num5 == 0){
        cout<<num4<<" is a multiple of "<<num5<<" ."<<endl<<endl;
    }
    else 
        cout<<num4<<" is not a multiple of "<<num5<<" ."<<endl<<endl;

    // Print squares and cubes of integers from 0 to 9

    cout<<"PROGRAM NO. 10 : "<<endl;
    cout<<"Numbers    Squares    Cubes "<<endl;
    for(int k = 0; k <= 9; k++){
        cout<<k<<"             "<<k*k<<"           "<<k*k*k<<endl;
    }



    return 0;
}
