
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string>
#include <list>
#include <vector>
#include <queue>

//#include "Source.h"

using namespace std;
void gotoxy(short x, short y);
void PrintMultipleTable(int num);
void ITOA(int n, char s[]);
void FindPrimeNumber();
void GenaratePrimeNum();
void PrintStars();
void PrimeFactor();
void Triangle();
void SomeFunction();
void SomeFunction2();
void SomeFunction3();

int main()
{
    int x1 = 9;
    int const z = x1; // x is now const
    

    //int x1 = 9;
    //ptr = &x1;

    /*int x1 = 9;
    const int const &a = x1;*/
    // a = 4;
    // const int const b = a;
    // b = a;

    //int const * const ptr = &a;
    //ptr = &a;

    //*ptr = *ptr + 1;
    
    /*Student st1;
    strcpy_s(st1.fName, "Usman");
    strcpy_s(st1.lName, "Khan");
    cout << st1.lName << ", " << st1.fName << endl;*/
    // SomeFunction2();
    // SomeFunction3();

















    return 0;
    Triangle();
    return 0;


    /*for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << '*' << " ";
        }
        cout << endl;
    }
    return 0;*/
    /* int num = -1;
    cout << "Enter number: ";
    cin >> num;
    cout << "You entered:" << num << endl;*/
    /*char arr[5];
    fgets(arr, 4, stdin);
    cout << arr;*/
    /*int arr[] = { 10, 20, 30, 40 };
    for (int x : arr)
        cout << x << endl;*/

    //for (int i = 1; i < 11;)
    //{
    //    printf("%2d * %2d = %2d \n", num, i, num * i);
    //    i++;
    //    break;
    //}
    // printf("The length is of string is: %d", (int)strlen("aaaa"));
    //getchar();
    // PrintMultipleTable(4);
    // GenaratePrimeNum();
    
    // FindPrimeNumber();
    // return 0;
    string strList[10];
    strList[0] = "Hello";
    string str23423;
    /*str23423 = "Hellop";
    str23423 += " Usman";*/
    
    cout << str23423 << endl << "It's length is : " << str23423.size() << endl
        << "IsEmpty: " << str23423.empty() << endl;
    cout << strList[0].at(0) << endl;
    cout << strList[0] << endl;
    return 0;

    char arr5[15];

    //cout << sizeof(arr5);
    ITOA(42, arr5);

    return 0;
    _itoa_s(42, arr5, sizeof(arr5), 8);
    cout << "Number in string format is :" << arr5 << endl;
    puts("H s a f d");
    list <int> ::iterator it;
    queue<int> iqueue;

    char arr2[2][25] = {"Hello", "World"};
    for (int index = 0; index < 2; index = index + 1)
    {
        cout << arr2[index] << endl;
    }
    const char * ptr12 = NULL;
    ptr12 = arr2[0];
    int x = _getch();
    return 0;

    char str[] = { 'U', 's', 'm', 'a', 'n', '\0'};
    char str2[] = { "Usman" };
    char str3[10];
    str3[0] = 'a';
    str3[1] = '\0';
    const char* str4 = nullptr;
    str4 = "Muhammad Usman Ghani Khan";
    str4++;
    cout << str3 << endl;
    cout << str4;

    return 0;
    //char ch;
    int count = 0;

    //cout << "Press a key";
    //cin >> ch;
    //cin.get(ch);
    
    cout << "Enter a character: " ;
    // char ch2 = _getch();
    char ch2 = cin.get();
    cin.ignore();
    cout << ch2 << endl;
    cout << "Enter another character: " ;
    // char ch1 = _getch();
    // system("CLS");
    cin.clear();
    char ch1;
    cin.get(ch1); cin.ignore();
    cout << ch1 << endl;
    // system("CLS");
    cin.clear();
    cout << "Enter string: ";
  
    char arr[15];
    cin.getline(arr, 14);
    //cin >> arr;
    cout << "You entered: " << arr << endl;
    cin.clear();  //system("CLS");
    cout << "Enter another string: ";
    cin.getline(arr, 14);
    //cin >> arr;
    cout << "You entered: " << arr;
    return 0;
}

void PrimeFactor()
{
    int num = 20;
    int quotient = num;

    while (quotient != 1)
    {
        // factors = 2, 2, 5 
        int remainder = -1;
        int index = 2;
        int temp;
        while (remainder != 0)
        {
            quotient = num / index;
            remainder = num % index;
            temp = index;
            index = index + 1;
        }

        cout << temp << " <--Factor" << endl;
        cout << quotient << " <--quotient " << endl;
    }

}
void ITOA(int n, char s[])
{
    int i, sign;

    if ((sign = n) < 0)  /* record sign */
        n = -n;          /* make n positive */
    i = 0;
    do 
    {       /* generate digits in reverse order */
        int a = n % 10;
        int b = a + '0';
        s[i++] = b;   /* get next digit */
    } while ((n /= 10) > 0);     /* delete it */

    s[i] = '\0';

}
void gotoxy(short x, short y)
{
    COORD p = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}

void FindPrimeNumber()
{
    int num = 13;
    int index = 2;
    int remainder = -1;
    bool isPrime;

    while (remainder != 0 and index < num)
    {
        remainder = num % index;

        if (remainder == 0)
        {
            isPrime = false;
            break;
        }
        else
        {
            isPrime = true;
        }
        index++;
    }
}

void GenaratePrimeNum()
{
    /*for (int i=1; i<=10; i++)
    {
        cout << "Outer Loop i Iteration : " << i << endl;
        int j = 1;
        cout << "   while loop:" << i << endl;
        while (j <= i)
        {
            cout << "           Inner Loop j iteration: " << j << endl;
            j++;
        }
    }*/
    for (int i = 1; i <= 10; i++)
    {
        int num = i;
        int index = 2;
        int remainder = -1;
        bool isPrime;
        
        while (remainder != 0 and index < num)
        {
            remainder = num % index;

            if (remainder == 0)
            {
                isPrime = false;
                break;
            }
            else
            {
                isPrime = true;
            }
            index++;
        }
        
        cout << num << " " << isPrime << endl;
    }
}

void PrintStars()
{
    for (int j = 1; j <= 5; j++) // j = 1
    {
        /*for (int i = 1; i <= 5; i++)
        {
            cout << "*" << " ";
        }*/
        cout << endl;
    }
    int quotient = 0;
    while (quotient < 0);
    int num = 0;
    
    if (num == 1)
        cout << "Hello";
    
}

void Swap()
{
    int a = 5; // -> 10
    int b = 10; // -> 5
    int temp = a;
    a = b; // 
    b = temp;
}

/*
1           Previous Sum is 0
1 2         Previous Sum is 1
1 2 3       Previous Sum is 3
1 2 3 4     Previous Sum is 6
1 2 3 4 5   Previous Sum is 10
1 2 3 4 5 6 Previous Sum is 15
*/
/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
void Triangle()
{
    int sum = 0;
    for (int i = 1; i <= 6; i++) // will execute 6 times
    {
        int count = 0;
        for (int j = 1; j <= i; j++) // will iterate 36 times, executes 6 times
        {
            count = count + 1;
            cout << count << " ";
        }
        cout << endl;
        cout << "Previous Sum is ";
        cout << endl;
    }
}

void SomeFunction()
{
    for (int i = 0; i < 5; i++) // Iterations->5 -> 0, 1, 2, 3, 4
    {
        // when i=0, how many iterations the inner loop will have->0
        // when i=1, how many iterations the inner loop will have->0
        // when i=2, how many iterations the inner loop will have->0
        // when i=3, how many iterations the inner loop will have->0
        // when i=4, how many iterations the inner loop will have->0
        for (int j = 0; j < 5; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void CalcSum(int ptr[]) // int *ptr
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + ptr[i]; // *(ptr + i);
    }
    cout << sum << endl;
}
void DoSomething2(int num1)
{
    cout << num1;
}
void DoSomething3(int *ptrNum)
{
    cout << *ptrNum;
}

void SomeFunction2()
{
    int x = 1;
    while (x > 0)
    {
        cout << "Enter a positive number";
        cin >> x;
    }
    
    do
    {
        cout << "Enter a positive number";
        cin >> x;
    } 
    while (x > 0);

    //int  arr1[] = { 10, 20, 30, 40, 50 };

    //int arraySize;
    //
    //cout << "Enter size of array";
    //cin >> arraySize;

    //cout << "Array is given as : " << arraySize;
    //int *ptr;
    //ptr = new int[arraySize];
    //
    //delete ptr;
    /*int num = 2;
    int *ptr = &num;*/

    /*CalcSum(arr1);
    int x = 10;
    DoSomething2(x);
    DoSomething3(&x);*/
}

struct Subject
{
    string Name;
    int credits;
    int Grade;
};
struct Student
{
    int RollNum;
    string StudentName;
    string StudentFName;
    Subject Subjects[2];
};
void PrintStudent(Student S)
{
    cout << "Student Roll Num: " << S.RollNum << endl;
    cout << "Student Name : " << S.StudentName << endl;
    cout << "Student Father's Name : " << S.StudentFName << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "Subject " << S.Subjects[i].Name << " has Credits " << S.Subjects[i].credits << endl;
        cout << "Grade secured is :" << S.Subjects[i].Grade << endl;
    }
}
Student InputStudent()
{
    Student tempStudent;
    string str1;

    cout << "Enter Student Roll Num: ";
    cin >> tempStudent.RollNum;

    cout << "Enter Student Name: ";
    cin >> str1;
    tempStudent.StudentName = str1;

    cout << "Enter Student's Father Name: ";
    cin >> str1;

    tempStudent.StudentFName = str1;
    
    cout << "For Student [" << tempStudent.StudentName << "]" << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter Name of the Subject";
        cin >> tempStudent.Subjects[i].Name;

        cout << "Enter Credits of that Subject";
        cin >> tempStudent.Subjects[i].credits;

        cout << "Enter Grade for " << tempStudent.Subjects[i].Name << " :";
        cin >> tempStudent.Subjects[i].Grade;
        
    }
    
    return tempStudent;
}
void SomeFunction3()
{
    Student arrStudent[2];

    for (int i = 0; i < 2; i++)
    {
        arrStudent[i] = InputStudent();
    }
    
    for (int i = 0; i < 2; i++)
    {
        PrintStudent(arrStudent[i]);
    }
}
