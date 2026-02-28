#include<iostream>
using namespace std;

int main(){
    
    // PROGRAM NO. 1 : 

    cout<<"PROGRAM NO. 1 = Swap two numbers without a temporary variable : "<<endl;
    int num1, num2;
    cout<<"Enter first number = ";
    cin>>num1;
    cout<<"Enter second number = ";
    cin>>num2;
    cout<<"Input numbers before swap are "<<num1<<" and "<<num2<<" . \n";
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout<<"Input numbers after swap are "<<num1<<" and "<<num2<<" .\n\n";

    // PROGRAM NO. 2 : 

    cout<<"PROGRAM NO. 2 = Compare two numbers using all relational operators : "<<endl;
    int num3, num4;
    cout<<"Enter first number = ";
    cin>>num3;
    cout<<"Enter second number = ";
    cin>>num4;
    cout<<"Is "<<num3<< " > "<<num4<<" ? \nAns = "<<(num3 > num4)<<endl;
    cout<<"Is "<<num3<< " < "<<num4<<" ? \nAns = "<<(num3 < num4)<<endl;
    cout<<"Is "<<num3<< " >= "<<num4<<" ? \nAns = "<<(num3 >= num4)<<endl;
    cout<<"Is "<<num3<< " <= "<<num4<<" ? \nAns = "<<(num3 <= num4)<<endl;
    cout<<"Is "<<num3<< " == "<<num4<<" ? \nAns = "<<(num3 == num4)<<endl;
    cout<<"Is "<<num3<< " != "<<num4<<" ? \nAns = "<<(num3 != num4)<<endl<<endl;

    // PROGRAM NO. 3 : 

    cout<<"PROGRAM NO. 3 = Check that input integer is positive, negative or zero : "<<endl;
    int num5;
    cout<<"Enter an integer = ";
    cin>>num5;
    if(num5 > 0){
        cout<<"Given integer is positive.\n\n";
    }
    else if(num5 < 0){
        cout<<"Given integer is negative.\n\n";
    }
    else 
    cout<<"Given integer is zero.\n\n";

    // PROGRAM NO. 4 : 

    cout<<"PROGRAM NO. 4 = Demonstrate pre increment and post increment : "<<endl;
    int num6;
    cout<<"Enter an integer = ";
    cin>>num6;
    cout<<"Given integer before post and pre increment is "<<num6<<" .\n";
    cout<<"Pre increment = "<<++num6<<" .\n";
    cout<<"Post increment = "<<num6++<<" .\n";
    cout<<"After post increment = "<<num6<<" .\n\n";

    // PROGRAM NO. 5 : 

    cout<<"PROGRAM NO. 5 = Demonstrate pre decrement and post decrement : "<<endl;
    int num7;
    cout<<"Enter an integer = ";
    cin>>num7;
    cout<<"Given integer before post and pre decrement is "<<num7<<" .\n";
    cout<<"Pre decrement = "<<--num7<<" .\n";
    cout<<"Post decrement = "<<num7--<<" .\n";
    cout<<"After post decrement = "<<num7<<" .\n\n";

    // PROGRAM NO. 6 : 

    cout<<"PROGRAM NO. 6 = Demonstrate assignment operators : "<<endl;
    int num8;
    cout<<"Enter an integer = ";
    cin>>num8;
    cout<<"Given value = "<<num8<<endl;
    cout<<"After  i += 10 : "<<(num8 += 10)<<endl;
    cout<<"After  i -= 10 : "<<(num8 -= 10)<<endl;
    cout<<"After  i *= 10 : "<<(num8 *= 10)<<endl;
    cout<<"After  i /= 10 : "<<(num8 /= 10)<<endl;
    cout<<"After  i %= 10 : "<<(num8 %= 10)<<endl<<endl;

    // PROGRAM NO. 7 : 

    cout<<"PROGRAM NO. 7 = Print sum of three numbers after incrementing each by 1 : "<<endl;
    int Num1, Num2, Num3;
    cout<<"Enter first number = ";
    cin>>Num1;
    cout<<"Enter second number = ";
    cin>>Num2;
    cout<<"Enter third number = ";
    cin>>Num3;
    int sum  = (++Num1) + (++Num2) + (++Num3);
    cout<<"Sum of given three numbers after incrementing each by 1 is "<<sum<<" .\n\n";

    // PROGRAM NO. 8 : 

    cout<<"PROGRAM NO. 8 = Compare two numbers and print which one is greatest or they are equal : "<<endl;
    int Num4, Num5;
    cout<<"Enter first number = ";
    cin>>Num4;
    cout<<"Enter second number = ";
    cin>>Num5;
    if( Num4 == Num5 ){
        cout<<"Both given numbers are equal.\n\n";
    }
    else if( Num4 > Num5 ){
        cout<<"First number ("<<Num4<<") is greater.\n\n";
    }
    else 
    cout<<"Second number ("<<Num5<<") is greater.\n\n";

    // PROGRAM NO. 9 : 

    cout<<"PROGRAM NO. 9 = Input a number and increase it by 10 using assignment operator : "<<endl;
    int Num6;
    cout<<"Enter a number = ";
    cin>>Num6;
    Num6 += 10;
    cout<<"Given number after increase by 10 = "<<Num6<<" .\n\n";

    // PROGRAM NO. 10 : 

    cout<<"PROGRAM NO. 10 = Input a number and half it using an assignment operator : "<<endl;
    float Num7;
    cout<<"Enter a number = ";
    cin>>Num7;
    Num7 /= 2;
    cout<<"Input number afte half = "<<Num7<<" .\n\n";

    // PROGRAM NO. 11 : 

    cout<<"PROGRAM NO. 11 = Demonstrate gross salary of an employee : "<<endl;
    float basicSalary, grossSalary;
    cout<<"Enter basic salary = ";
    cin>>basicSalary;
    float houseRentAllowance = ( 40.00 / 100.00 ) * basicSalary;
    float transportAllowance = ( 20.00 / 100.00 ) * basicSalary;
    
    grossSalary = basicSalary + houseRentAllowance + transportAllowance;

    cout<<"House rent allowance = "<<houseRentAllowance<<" .\n";
    cout<<"Transport allowance = "<<transportAllowance<<" .\n";
    cout<<"Gross salary = "<<grossSalary<<" .\n\n";

    // PROGRAM NO. 12 : 

    cout<<"PROGRAM NO. 12 = Input five digit integer and print its reverse : "<<endl;
    int Num8;
    cout<<"Enter five digit integer but not start with zero = ";
    cin>>Num8;
    int reverseNumber = 0;
    int reverse;
    for(int m = 0; m <=4 ; m++){
    reverse = Num8 % 10;
    reverseNumber = 10 * reverseNumber + reverse;
    Num8 /= 10;
    }
    cout<<"Reverse number = "<<reverseNumber<<" .\n\n";

    // PROGRAM NO. 13 : 

    cout<<"PROGRAM NO. 13 = Input radius of circle and print its diameter, circumference and area : "<<endl;
    float radius;
    cout<<"Enter radius of circle = ";
    cin>>radius;
    float diameter = 2 * radius;
    float circumference = 2 * 3.14159 * radius;
    float area = 3.14159 * radius * radius;
    cout<<"Diameter of a circle = "<<diameter<<" .\n";
    cout<<"Circumference of a circle = "<<circumference<<" .\n";
    cout<<"Area of a circle = "<<area<<" .\n\n";

    // PROGRAM NO. 14 : 

    cout<<"PROGRAM NO. 14 = Input three sides of a triangle and print its type by side: "<<endl;
    float firstSide, secondSide, thirdSide;
    cout<<"Enter first side of a triangle = ";
    cin>>firstSide;
    cout<<"Enter second side of a triangle = ";
    cin>>secondSide;
    cout<<"Enter third side of a triangle = ";
    cin>>thirdSide;
    if( firstSide + secondSide > thirdSide && secondSide + thirdSide > firstSide && firstSide + thirdSide > secondSide){
         if ( firstSide == secondSide && secondSide == thirdSide){
            cout<<"Equilateral triangle. \n\n";
         }
         else if ( firstSide == secondSide || secondSide == thirdSide || firstSide == thirdSide){
            cout<<"Isoceles triangle. \n\n";
         }
         else if ( firstSide * firstSide == secondSide * secondSide + thirdSide * thirdSide || secondSide * secondSide == firstSide * firstSide + thirdSide * thirdSide || thirdSide * thirdSide == firstSide * firstSide + secondSide * secondSide ){
            cout<<"Right angle triangle. \n\n";
         }
         else 
            cout<<"Scalene triangle. \n\n";
         }    
    else
    cout<<"Not a valid triangle.\n\n";
    
    // PROGRAM NO. 15 :

    cout<<"PROGRAM NO. 15 = Check insurance status of driver using its marital status, age and gender : "<<endl;
    char maritalStatus, gender;
    int age;
    cout<<"Enter marital status ( only m for married and u for unmarried ) = ";
    cin>>maritalStatus;
    cout<<"Enter age = ";
    cin>>age;
    cout<<"Enter gender ( only m for male and f for female ) = ";
    cin>>gender;
    if( maritalStatus != 'm' && maritalStatus != 'M'){
        if ( gender == 'm' || gender == 'M'){
            if ( age > 30){
                cout<<"Driver is insured.\n\n";
            }
            else 
            cout<<"Driver is not insured.\n\n";
        }
        else{
            if ( gender == 'f' || gender == 'F'){
                if ( age > 25 ){
                    cout<<"Driver is insured.\n\n";
                }
                else
                cout<<"Driver is nor insured.\n\n";
            }
        }
    }
    else
    cout<<"Driver is insured.\n\n";

    cout<<"LAB ENDS...... "<<endl;

    return 0;
}
