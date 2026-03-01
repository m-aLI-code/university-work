#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){

    // PROGRAM NO. 1 : 

    cout<<"PROGRAM NO. 1 = Input a number and print its multiplication table using for loop : "<<endl;
    int num;
    cout<<"Enter an integer = ";
    cin>>num;
        for( int i=1; i<=10; i++){
            cout<<num<<" X "<<i<<" = "<<num*i<<endl;
        }
    cout<<endl;

    // PROGRAM NO. 2 : 

    cout<<"PROGRAM NO. 2 = Print the sum of first 10 natural numbers using loops : "<<endl;
    int sum = 0;
        for(int i=1; i<=10; i++){
            sum+=i;
        }
    cout<<"Sum of first 10 natural numbers = "<<sum<<endl<<endl;

    // PROGRAM NO. 3 :

    cout<<"PROGRAM NO. 3 = Input a number and print total sum from 1 to n using loops : "<<endl;
    int sum1 = 0;
    int num1;
    cout<<"Enter a number n = ";
    cin>>num1;
        for(int i=1; i<=num1; i++){
            sum1+=i;
        }
    cout<<"Sum of natural numbers till n = "<<sum1<<endl<<endl;
    
    // PROGRAM NO. 4 :

    cout<<"PROGRAM NO. 4 = Print the square of of positive integers from 1 to 20 : "<<endl;
    cout<<"Positive integers      Squares "<<endl;
        for(int i=1; i<=20; i++){
            cout<<"         "<<i<<"              "<<i*i<<endl;
        }
    cout<<endl;

    //  PROGRAM NO. 5 : 

    cout<<"PROGRAM NO. 5 = Print value of first number raised to the power of second number : "<<endl;
    int exponent, base, value;
    cout<<"Enter value of exponent = ";
    cin>>exponent;
    cout<<"Enter value of base = ";
    cin>>base;
    value = 1;
        for(int i=1; i<=exponent; i++){
            value *= base;
        }
    cout<<"Value of first number raised to the power of second number = "<<value<<endl<<endl;

    // PROGRAM NO. 6 : 

    cout<<"PROGRAM NO. 6 = Print the square of of positive integers from 1 to n using for loop : "<<endl;
    int num2;
    cout<<"Enter an integer n = ";
    cin>>num2;
    cout<<"Positive integers      Squares "<<endl;
        for(int i=1; i<=num2; i++){
            cout<<"         "<<i<<"              "<<i*i<<endl;
        }
    cout<<endl;

    // PROGRAM NO. 7 : 

    cout<<"PROGRAM NO. 7 = Print ASCII codes from A to Z using loop : "<<endl;
    cout<<"Alphabets       ASCII codes "<<endl;
        for(char ch='A'; ch<='Z'; ch++){
            int code = static_cast<int>(ch);
            cout<<"     "<<ch<<"                "<<code<<endl;
        }
    cout<<endl;

    // PROGRAM NO. 8 :

    cout<<"PROGRAM NO. 8 = Count number of digits in an integer using while loop = "<<endl;
    int num3;
    cout<<"Enter an integer ( Zero's at the start of an integer wil be ignored ) = ";
    cin>>num3;
    int count = 0;
        while(num3 > 0){
            num3/=10;
            count++;
        }
    cout<<"Number of digits in an integer = "<<count<<endl<<endl;
    
    // PROGRAM NO. 9 : 

    cout<<"PROGRAM NO. 9 = Take input continuously untill user enters negative number : "<<endl;
    int num4;
        do{
            cout<<"Enter an integer = ";
            cin>>num4;
        }
        while(num4>=0);
        cout<<"Program ends because negative number detected !! \n\n";

    // PROGRAM NO. 10 : 

    cout<<"PROGRAM NO. 10 = Give two random number to user ans ask its multiplication quiz and stop at wrong answer : "<<endl;
    int product;
    int num5;
    int num6;
    srand(time(0));
        do{
            num5 = rand() % 10 + 1; 
            num6 = rand() % 10 + 1; 
            cout<<"What is the product of "<<num5<<" and "<<num6<<"  = ";
            cin>>product;
        }
        while(num5*num6==product);
        cout<<"Wrong answer detected. Quiz ends here !! "<<endl<<endl;

    // PROGRAM NO. 11 : 

    cout<<"PROGRAM NO. 11 = Keep asking for input untill user enters 0 using do while loop : "<<endl;
    int num7;
        do{
            cout<<"Enter an integer = ";
            cin>>num7;
        }
        while(num7!=0);
        cout<<"Program ends because zero detected !! \n\n";

    // PROGRAM NO. 12 : 

    cout<<"PROGRAM NO. 12 = Show menu of add, subtract, multiply, exit and perform operation according to user choice : "<<endl;
    int num8, num9, choice;
        do{
            cout<<"1. Add\n2. Subtract\n3. Multiplication\n4. Exit\n";
            cout<<"Enter your choice which operation you want to perform = ";
            cin>>choice;
            cout<<"Enter first number = ";
            cin>>num8;
            cout<<"Enter second number = ";
            cin>>num9;
            cout<<endl;
                if(choice == 4){
                    cout<<"Program stops. Exit operation successfully performed !!"<<endl<<endl;
                    break;
                }
                    switch(choice){
                        case 1 :
                            {
                                int add = num8 + num9;
                                cout<<"Addition of "<<num8<<" and "<<num9<<" = "<<add<<endl<<endl;
                                break;
                            }
                            

                        case 2 :
                            {
                                int subtract = num8 - num9;
                                cout<<"Subtraction of "<<num8<<" and "<<num9<<" = "<<subtract<<endl<<endl;
                                break;
                            }

                        case 3 :
                            {
                                int multiply = num8 * num9;
                                cout<<"Multiplication of "<<num8<<" and "<<num9<<" = "<<multiply<<endl<<endl;
                                break;
                            }

                        default :
                            cout<<"Invalid choice !!"<<endl<<endl;
                            break;
                    }
        }
        while(choice!=4);

    // PROGRAM NO. 13 :

        cout<<"PROGRAM NO. 13 = Input positive numbers continuously and stop when the user enters 0 or a negative number : "<<endl;
        int num10;
            do{
            cout<<"Enter an integer = ";
            cin>>num10;
            }
            while(num10>0);
            cout<<"Program ends because zero or negative number detected !! \n\n";

    // PROGRAM NO. 14 : 

        cout<<"PROGRAM NO. 14 = Input two numbers and print their sum untill user enters \"n\" : "<<endl;
        int num11, num12;
        char ch;
            do{
                cout<<"Enter first number = ";
                cin>>num11;
                cout<<"Enter second number = ";
                cin>>num12;
                sum = num11 + num12;
                cout<<"Sum of "<<num11<<" and "<<num12<<" = "<<sum<<endl;
                cout<<"Wanna continue or stop ? Enter \"n\" for stop = ";
                cin>>ch;
            }
            while(ch!='n' && ch!='N');
            cout<<"Program stopped on choice of user !!"<<endl<<endl;
        
    // PROGRAM NO. 15 :

        cout<<"PROGRAM NO. 15 = Show menu of square and triangle shapes and exit and perform action on user choice : "<<endl;
        int wish;
            do{
                cout<<"1. Square\n2. Triangle\n3. Exit\nChoice = ";
                cin>>wish;
                    if(wish==3){
                    cout<<"Program exits on wish of user !! "<<endl<<endl;
                    break;
                    }
                        switch(wish){
                            case 1 :
                                {
                                    for(int i=1; i<=4; i++){
                                        for(int j=1; j<=4; j++){
                                            cout<<"*";
                                        }
                                        cout<<endl;
                                    }
                                    cout<<endl;
                                    break;
                                }
                            case 2 :
                                {
                                    for(int i=1; i<=4; i++){
                                        for(int j=1; j<=i; j++){
                                            cout<<"*";
                                        }
                                        cout<<endl;
                                    }
                                    cout<<endl;
                                    break;
                                }
                            default :
                                cout<<"Invalid input !!"<<endl<<endl;
                        }

            }
            while(wish != 3);
    
    // PROGRAM NO. 16 : 

    cout<<"PROGRAM NO. 16 = Input size of square and print hollow square : "<<endl;
    int size;
    cout<<"Enter size of a square = ";
    cin>>size;
        for(int i=1; i<=size; i++){
            for(int j=1; j<=size; j++){
                if(i==1 || i==size || j==1 || j==size){
                    cout<<"*";
                }
                else
                    cout<<" ";
            }
            cout<<endl;
        }
    cout<<endl;
            
    // PROGRAM NO. 17 :
    
    cout<<"PROGRAM  NO. 17 =  Print right angle triangle and its reverse shape : "<<endl;
    cout<<"Triangle with asteriks = "<<endl;
        for(int i=1; i<=4; i++){
            for(int j=1; j<=i; j++){
                cout<<"*";
            }
            cout<<endl;
        }
    cout<<"Reverse triangle = "<<endl;
        for(int i=1; i<=4; i++){
            for(int j=4; j>=i; j--){
                cout<<"*";
            }
            cout<<endl;
        }
    cout<<endl;

    // PROGRAM NO. 18 :

    cout<<"PROGRAM NO. 18 = Print a pyramid using asteriks : "<<endl;
        for(int i=1; i<=6; i++){
            for(int j=6-i; j>0; j--){
                cout<<" ";
            }
            for(int k=1; k<=i; k++){
                cout<<"* ";
            }
                cout<<endl;
        }
    
    // PROGRAM NO. 19 :

    cout<<"PROGRAM NO. 19 = Print a pyramid with numbers increased by 1 : "<<endl;
    int num13=0;
        for(int i=1; i<=4; i++){
            for(int j=4-i; j>0; j--){
                cout<<" ";
            }
            for(int k=1; k<=i; k++){
                cout<<num13<<" ";
                num13++;

            }
                cout<<endl;
        }
    
    // PROGRAM NO. 20 :

    cout<<"PROGRAM NO. 20 = Print a pyramid with numbers repeat on same row and increase by 1 in next row  : "<<endl;
    int num14=0;
        for(int i=1; i<=4; i++){
            for(int j=4-i; j>0; j--){
                cout<<" ";
            }
            for(int k=1; k<=i; k++){
                cout<<num14<<" ";
                

            }
                num14++;
                cout<<endl;
        }
    
    return 0;
}