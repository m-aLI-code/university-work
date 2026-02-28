#include<iostream>
using namespace std;

int main(){
    
    // PROGRAM NO. 1 :

    cout<<"PROGRAM NO. 1 = Check leap year or not : "<<endl;
    int year;
    cout<<"Enter a year = ";
    cin>>year;
    if ( ( year % 400 == 0 ) || ( year % 4 == 0 && year % 100 != 0) ){
        cout<<"Input year is leap year. \n\n";
    }
    else 
        cout<<"Input year is not a leap year. \n\n";

    // PROGRAM NO. 2 : 

    cout<<"PROGRAM NO. 2 = Input number of late days  and check library fine : "<<endl;
    int lateDays;
    cout<<"Enter number of late days = ";
    cin>>lateDays;
    if  ( lateDays < 0 ){
        cout<<"Negative number entered. Operation failed !\n\n";
    }
    else if ( lateDays == 0 ){
        cout<<"No fine.\n\n";
    }
    else if ( lateDays <= 5 ){
        cout<<"Fine = 50.\n\n";
    }
    else if ( lateDays <= 10 ){
        cout<<"Fine = 100.\n\n";
    }
    else if ( lateDays > 10 && lateDays <= 30 ){
        cout<<"Fine = 200.\n\n";
    }
    else
        cout<<"Membership cancelled.\n\n";
    
    // PROGRAM NO. 3 : 

    cout<<"PROGRAM NO. 3 = Get gender, years of service and qualification of employee and print his/her salary : "<<endl;
    char gender, qualification;
    int serviceYears;
    cout<<"Enter your gender ( only m for male and f for female  ) = ";
    cin>>gender;
    cout<<"Enter years of services = ";
    cin>>serviceYears;
    cout<<"Enter qualification ( only g for graduate and p for post-graduate )";
    cin>>qualification;
    if ( gender == 'm'){
        if ( serviceYears >= 10 ){
            if ( qualification == 'p'){
                cout<<"Salary = 15,000 Rs.\n\n";
            }
            else if( qualification == 'g'){
                cout<<"Salary = 12,000 Rs.\n\n";
            }
        }
        else if( serviceYears < 10 ){
            if ( qualification == 'p'){
                cout<<"Salary = 10,000 Rs.\n\n";
            }
            else if( qualification == 'g'){
                cout<<"Salary = 7,000 Rs.\n\n";
            }
        }
    }
    else if ( gender == 'f'){
        if ( serviceYears >= 10 ){
            if ( qualification == 'p'){
                cout<<"Salary = 12,000 Rs.\n\n";
            }
            else if( qualification == 'g'){
                cout<<"Salary = 10,000 Rs.\n\n";
            }
        }
        else if( serviceYears < 10 ){
            if ( qualification == 'p'){
                cout<<"Salary = 7,000 Rs.\n\n";
            }
            else if( qualification == 'g'){
                cout<<"Salary = 6,000 Rs.\n\n";
            }
        }
    }

    // PROGRAM NO.4 : 

    cout<<"PROGRAM NO. 4 = Get division and number of subjects failed and print how many grace will be awarded to him/her per subject failed : "<<endl;
    int division, subjectsFailedNo;
    cout<<"Enter division ( only 1,2,3 allowed ) = ";
    cin>>division;
    cout<<"Enter no. of subjects failed = ";
    cin>>subjectsFailedNo;
    if ( division == 1 ){
        if ( subjectsFailedNo > 3 ){
            cout<<"No grace marks.\n\n";
        }
        else if ( subjectsFailedNo <= 3 ){
            cout<<"5 grace marks per subject.\n\n";
        }
    }
    else if ( division == 2 ){
        if ( subjectsFailedNo > 2 ){
            cout<<"No grace marks.\n\n";
        }
        else if ( subjectsFailedNo <= 2 ){
            cout<<"4 grace marks per subject.\n\n";
        }
    }
    else if ( division == 3 ){
        if ( subjectsFailedNo > 1 ){
            cout<<"No grace marks.\n\n";
        }
        else if ( subjectsFailedNo == 1 ){
            cout<<"5 grace marks per subject.\n\n";
        }
    }

    // PROGRAM NO. 5 :

    cout<<"PROGRAM NO. 5 = Print running sum of first 25 natural  numbers : "<<endl;
    int sum = 1;
    for ( int i = 2 ; i <= 25; i++ ){
        sum += i;
        cout<<"Sum of "<<i-1<<" and "<<i<<" = "<<sum<<endl;
    }
    cout<<"Total sum of first 25 natural numbers = "<<sum<<endl<<endl;

    // PROGRAM NO. 6 : 

    cout<<"PROGRAM NO. 6 = Input 1 to 7 and print its corresponding day : "<<endl;
    int dayNumber;
    cout<<"Enter number of day ( only 1 to 7 numbers allowed ) = ";
    cin>>dayNumber;
    if ( dayNumber == 1 ){
        cout<<"Day = Monday \n\n";
    }
    else if ( dayNumber == 2 ){
        cout<<"Day = Tuesday \n\n";
    }
    else if ( dayNumber == 3 ){
        cout<<"Day = Wednesday \n\n";
    }
    else if ( dayNumber == 4 ){
        cout<<"Day = Thursday \n\n";
    }
    else if ( dayNumber == 5 ){
        cout<<"Day = Friday \n\n";
    }
    else if ( dayNumber == 6 ){
        cout<<"Day = Saturday \n\n";
    }
    else if ( dayNumber == 7 ){
        cout<<"Day = Sunday \n\n";
    }

    // PROGRAM N0. 7 : 

    cout<<"PROGRAM NO. 7 = Input a character and check it is vowel or consonant : "<<endl;
    char ch;
    cout<<"Enter a character = ";
    cin>>ch;
    if ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ){
        cout<<"Input character is vowel.\n\n";
    }
    else 
        cout<<"Input character is not a vowel.\n\n";

    // PROGRAM NO. 8 :

    cout<<"PROGRAM NO. 8 = Input two numbers and perform addition, subtration, multiplictation and division according to user choice : "<<endl;
    int num1, num2, choice;
    cout<<"Enter first number = ";
    cin>>num1;
    cout<<"Enter second number = ";
    cin>>num2;
    cout<<"Enter your choice ( only 1,2,3,4 allowed ) : \n1) Addition \n2) Subtraction \n3) Multiplication \n4) Division \n";
    cin>>choice;
    if ( choice == 1 ){
    int addition = num1 + num2;
        cout<<"Addition of "<<num1<<" and "<<num2<<" = "<<addition<<" .\n\n";
    }
    if ( choice == 2 ){
    int subtraction = num1 - num2;
        cout<<"Subtraction of "<<num1<<" and "<<num2<<" = "<<subtraction<<" .\n\n";
    }
    if ( choice == 3 ){
    int multiplication = num1 * num2;
        cout<<"Multiplication of "<<num1<<" and "<<num2<<" = "<<multiplication<<" .\n\n";
    }
    if ( choice == 4 ){
        if ( num2 != 0){
            int division = num1 / num2;
            cout<<"Division of "<<num1<<" and "<<num2<<" = "<<division<<" .\n\n";
        }
        else 
            cout<<"Division operation failed. Integer cannot be divided by zero ( 0 ) !\n\n";
    }

    // PROGRAM NO. 9 :

    cout<<"PROGRAM NO. 9 = Input 1 to 12 and print number of days in corresponding month :"<<endl;
    int monthNumber;
    cout<<"Enter number of month ( only 1 to 12 allowed ) ";
    cin>>monthNumber;
    if ( monthNumber == 1 || monthNumber == 3 || monthNumber == 5 || monthNumber == 7 || monthNumber == 8 || monthNumber == 10 || monthNumber == 12 ){
        cout<<"Days in corresponding month number "<<monthNumber<<" = 31\n\n";
    }
    else if ( monthNumber == 2 ){
        cout<<"Days in corresponding month number "<<monthNumber<<" = 28 \n Days in corresponding month number "<<monthNumber<<" if it is a leap year = 29\n\n";
    }
    else if (  monthNumber == 4 || monthNumber == 6 || monthNumber == 9 || monthNumber == 11 ){
        cout<<"Days in corresponding month number "<<monthNumber<<" = 30\n\n";
    }
    

    // PROGRAM NO. 10 : 

    cout<<"PROGRAM NO. 10 : Input a grade ( A,B,C,D,F ) and print message corresponding to grade : "<<endl;
    char grade;
    cout<<"Enter a grade ( only A,B,C,D,F allowed ) = ";
    cin>>grade;
    if ( grade == 'A' ){
        cout<<"Excellent !\n\n";
    }
    else if ( grade == 'B' ){
        cout<<"Good !\n\n";
    }
    else if ( grade == 'C' ){
        cout<<"Average !\n\n";
    }
    else if ( grade == 'D' ){
        cout<<"Poor !\n\n";
    }
    else if ( grade == 'F' ){
        cout<<"Fail !\n\n";
    }

    cout<<"LAB ENDS..."<<endl;

    return 0;
}
