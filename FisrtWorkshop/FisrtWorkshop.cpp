// FirstYisusWorkShop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


//1. Write a program that expects a number as input, then print a message that says if the number is prime or not
bool bIsPrime(int Num)
{
    for (int i = 2; i <= Num / 2; i++)
    {
        if (Num % i == 0)
        {

            return false;
        }
        else
        {

            return true;
        }
    }
}

//2. Identity and fix the bug in each of the following codes fragments:
void CheckTheBug()
{
    //A.
    int age = 0;
    cin >> age;

    if (age >= 65)
    {
        cout << "Age is greater than or equal to 65" << '\n';
    }
    else
    {
        cout << "Ages is less than 65" << '\n';
    }


    //B.
    int x = 1;
    int total = 0;
    while (x <= 10)
    {
        total += x;
        ++x;
    }


    while (x > 0)
    {
        std::cout << total << '\n';
        x++;
    }
    //Primero, el segundo while tenia una variable que no estaba declarada. 
}


//3. Write a program that generates a random number between 1 - 100, then expects a number as input, 
//checks if the number is equal to the random number and prints a message saying if it is the number or not.
bool CheckRandomNumber(int CheckNum)
{
    time_t t;
    srand((unsigned)time(&t));

    int Num[100] = {};


    for (int i = 0; i < 100; i++)
    {
        Num[i] = 1 + rand() % 100;

        //cout << Num[i] << '\n';

        if (CheckNum == Num[i])
        {
            return true;
        }
    }
    return false;
}


//4. Write a program that expects a number as input, this number is the grade of an exam, 
//print a message saying if the person approved or not the exam.
void CheckGradeExam(float Grade)
{
    if (Grade <= 2.999999999)
    {
        cout << "Su nota: " << Grade << " Mi loco dele pa preescolar\n";
    }
    else if (Grade >= 3.f && Grade <= 3.99)
    {
        cout << "pasar es pasar cucho\n";
    }
    else if (Grade >= 4.f && Grade <= 5.f)
    {
        cout << "Asi se hace viejo\n";
    }
}


//5. Write a function called pow, this function will have 2 parameters, base and power, both of type integer. 
//The function must calculate the power of the number base by exponent power and return its result.
int Pow(int Base, int Power)
{
    int Num = 1;
    for (int i = 0; i < Power; i++)
    {
        Num *= Base;
    }

    printf("The POW is: \n");
    return Num;
}


//6. Write a function called summation, this function will have a single parameter that is an array of integers. 
//The function must sum all the number in the array an return the result
int SumArray()
{
    int Array[5] = { 2, 3, 6, 10 };

    int Sum = 0;

    for (int i = 0; i < 5; i++)
    {
        Sum += Array[i];
    }

    printf("The suma Array is: \n");
    return Sum;
}

int main()
{
    //Point 1
    cout << "Check if number is prime" << '\n';
    int NumToCheck = 0;
    cout << "Enter a Number:\n";
    cin >> NumToCheck;
    if (bIsPrime(NumToCheck))
    {
        printf("The number is prime\n");
    }
    else
    {
        printf("The number isn't prime\n");
    }

    //Point 2
    //CheckTheBug();


    //Point 3
    int CheckRanNum = 0;
    cout << "Enter a number to check i an list of random numbers: " << '\n';
    cin >> CheckRanNum;

    if (CheckRandomNumber(NumToCheck))
    {
        cout << "Your number is on the list\n";
    }
    else
    {
        cout << "Your number is not on the list\n ";
    }


    //point 4
    float EnterGrade = 0.f;
    cout << "Enter your grade: ";
    cin >> EnterGrade;
    if (EnterGrade >= 5.1)
    {
        cout << "eche caremonda, numeros del 1-5" << '\n';
    }
    else
    {
        CheckGradeExam(EnterGrade);
    }

    //Point 5
    cout << Pow(2, 3) << '\n';

    //Point 6
    cout << SumArray();
}
