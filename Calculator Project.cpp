#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<iomanip>
using namespace std;

sumsub()
{
    string num;
    double i,sub=0,sum=0;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tI n p u t  n u m b e r s : ";
    while(true)
    {
        cin>>num;
        if(isalpha(num[0]))
        {
            break;
        }
        i=stod(num);
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   ";
        sum=sum+i;
    }
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
    cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   T O T A L = "<<sum-sub<<"\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
    cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    cout<<"\n\n\n\n\n\n";
}
int mult()
{
    string num;
    double i,mult=1;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tI n p u t  n u m b e r s : ";
    while(true)
    {
        cin>>num;
        if(isalpha(num[0]))
        {
            break;
        }
        i=stod(num);
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   ";
        mult=mult*i;
        cout<<"*";
    }
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
    cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   M U L T = "<<fixed<<setprecision(3)<<mult<<"\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
    cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    cout<<"\n\n\n\n\n\n";
}
int Div()
{
    double divit;
    double frstNumber, scndNumber;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tI n p u t  n u m b e r s : ";
    cin >> frstNumber;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t  ";
    cout << "/";
    cin >> scndNumber;
    divit = frstNumber / scndNumber;
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
    cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   D I V  = "<<fixed<<setprecision(3)<<divit<<"\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
    cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    cout<<"\n\n\n\n\n\n";

    char newInput[1];
    double input;
    int i;
    while(true)
    {
        cout << "\n\t\t\tEnter numbers to divide again or letters to exit: " << endl;
        cout<<"\t\t\t\t\t\t\t\t\t  ";
        cin >> newInput;
        try
        {
            if(newInput[0] == '0')
            {
                divit = divit / 0;
                system("cls");
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
                cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   D I V  = "<<fixed<<setprecision(3)<<divit<<"\t\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
                cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
                cout<<"\n\n\n\n\n\n";
                break;

            }
            if(newInput[0] !='0')
            {
                input = atoi(newInput);
                divit = divit / input;
            }

            if(input !=0)
            {
                system("cls");
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
                cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   D I V  = "<<fixed<<setprecision(3)<<divit<<"\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
                cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
                cout<<"\n\n\n\n\n\n";
            }
            if(input ==0)
            {
                throw (input);
            }
        }
        catch(double input)
        {
            system("cls");
            break;
        }

    }
}

int pow(int a,int b)
{
    int m=1,i;
    for(i=0; i<b; i++)
        m*=a;
    return m;
}
int sqr(float a)
{
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
    cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   "<<a<<"^2 = "<<fixed<<setprecision(3)<<pow(a,2)<<"\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
    cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    cout<<"\n\n\n\n\n\n";

}
int sqrcube(float a)
{
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
    cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   "<<a<<"^3 = "<<fixed<<setprecision(3)<<pow(a,3)<<"\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
    cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    cout<<"\n\n\n\n\n\n";

}
double Inverse()
{
    double a;
    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tEnter the number : ";
    cin>>a;
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
    cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   "<<a<<"^-1 = "<<fixed<<setprecision(3)<<(1/a)<<"\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
    cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    cout<<"\n\n\n\n\n\n";

}
double sqroot()
{
    double a;
    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tInput the number:";
    cin>>a;
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
    cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   Sqrt("<<a<<")= "<<fixed<<setprecision(3)<<sqrt(a)<<"\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
    cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    cout<<"\n\n\n\n\n\n";

}
double Sin()
{
    double degree,radian;
    const double pi= 3.14159;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tI n p u t  D e g r e e : ";
    cin>>degree;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   ";
    if(degree==0||degree==180||degree==360||degree==540||degree==720||degree==900)
    {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
        cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   sin("<<degree<<")= "<<"0\t\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
        cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    }
    else
    {
        radian=degree*(pi/180.0);
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
        cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   sin("<<degree<<")= "<<fixed<<setprecision(3)<<sin(radian)<<"\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
        cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    }

}
double Cos()
{
    double degree,radian;
    const double pi= 3.14159;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tI n p u t  D e g r e e : ";
    cin>>degree;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   ";
    if(degree==90||degree==270||degree==450||degree==630||degree==810)
    {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
        cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   cos("<<degree<<")= "<<"0\t\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
        cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    }
    else
    {
        radian=degree*(pi/180.0);
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
        cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   cos("<<degree<<")= "<<fixed<<setprecision(3)<<cos(radian)<<"\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
        cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    }

}
double Tan()
{
    double degree,radian;
    const double pi= 3.14159;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tI n p u t  D e g r e e : ";
    cin>>degree;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   ";
    if(degree==90||degree==270||degree==450||degree==630||degree==810)
    {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
        cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   tan("<<degree<<")= "<<"1/0\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
        cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    }
    else
    {
        radian=degree*(pi/180.0);
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
        cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   tan("<<degree<<")= "<<fixed<<setprecision(3)<<tan(radian)<<"\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
        cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    }

}
double Sec()
{
    double degree,radian;
    const double pi= 3.14159;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tI n p u t  D e g r e e : ";
    cin>>degree;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   ";
    if(degree==90||degree==270||degree==450||degree==630||degree==810)
    {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
        cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   sec("<<degree<<")= "<<"1/0\t\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
        cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    }
    else
    {
        radian=degree*(pi/180.0);
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
        cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   sec("<<degree<<")= "<<fixed<<setprecision(3)<<1/cos(radian)<<"\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
        cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    }

}
double Cosec()
{
    double degree,radian;
    const double pi= 3.14159;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tI n p u t  D e g r e e : ";
    cin>>degree;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   ";
    if(degree==0||degree==180||degree==360||degree==540||degree==720)
    {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
        cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   cosec("<<degree<<")= "<<"1/0\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
        cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    }
    else
    {
        radian=degree*(pi/180.0);
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
        cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   cosec("<<degree<<")= "<<fixed<<setprecision(3)<<1/sin(radian)<<"\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
        cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    }

}
double Cot()
{
    double degree,radian;
    const double pi= 3.14159;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tI n p u t  D e g r e e : ";
    cin>>degree;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   ";
    if(degree==0||degree==180||degree==360||degree==540||degree==720)
    {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
        cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   cot("<<degree<<")= "<<"1/0\t\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
        cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    }
    else
    {
        radian=degree*(pi/180.0);
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
        cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   cot("<<degree<<")= "<<fixed<<setprecision(3)<<1/tan(radian)<<"\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
        cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    }

}
double Log()
{
    double a;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tI n p u t  a  n u m b e r  : ";
    cin>>a;
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
    cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   Ln("<<a<<")= "<<fixed<<setprecision(3)<<log(a)<<"\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
    cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    cout<<"\n\n\n\n\n\n";

}
double Baselog()
{
    double a;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tI n p u t  a  n u m b e r  : ";
    cin>>a;
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
    cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   L o g("<<a<<")= "<<fixed<<setprecision(3)<<log10(a)<<"\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
    cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
    cout<<"\n\n\n\n\n\n";

}
double Case()
{
    int c;
    float a,b;
    cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tC h o o s e  A n  o p t i o n ....";
    cin>>c;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   ";
    system("cls");
    switch(c)
    {
    case 1:
        sumsub();
        //break;
    case 2:
        mult();
        break;
    case 3:
        Div();
        break;
    case 4:
        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tEnter the number : ";
        cin>>b;

        sqr(b);
        break;
    case 5:
        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tEnter the number : ";
        cin>>a;
        sqrcube(a);
        break;
    case 6:
        double x,y;
        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tEnter the number 1: ";
        cin>>x;
        cout<<"\n\t\t\t\t\t\t\t\t\tEnter the number 2: ";
        cin>>y;
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
        cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   "<<x<<"^"<<y<<" = "<<pow(x,y)<<"\t\t\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
        cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
        cout<<"\n\n\n\n\n\n";

        break;
    case 7:
        Inverse();
        break;
    case 8:
        sqroot();
        break;
    case 9:
        Sin();
        break;
    case 10:
        Cos();
        break;
    case 11:
        Tan();
        break;
    case 12:
        Sec();
        break;
    case 13:
        Cosec();
        break;
    case 14:
        Cot();
        break;
    case 15:
        Log();
        break;
    case 16:
        Baselog();
        break;
    default:
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
        cout<<"\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t   W R O N G  O P T I O N\t\t    |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t|\t\t\t\t\t                            |\n\t\t\t\t\t\t\t\t\t";
        cout<<"|\t\t\t\t\t                            |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------------------";
        cout<<"\n\n\n\n\n\n";

    }
}
void Admin()
{
    cout<<endl<<endl<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<<"C A L C U L A T O R"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t"<<"------------------------------------"<<endl;
    cout<<endl<<endl<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t1.  S U M   +   S U B (+,-)"<<"                                                            2.  M U L T I P L I C A T I O N (*)"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t3.  D I V I S I O N (/)"<<"                                                                4.  S Q U A R E (X^2)"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t5.  S Q U A R E   C U B E (X^3)"<<"                                                        6.  P O W E R (X^y)"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t7.  I N V E R S E (1/X)"<<"                                                                8.  S Q U A R E   R O O T (sqrt(x))"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t9.  S I N"<<"                                                                             10.  C O S"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t11.  T A N"<<"                                                                             12.  S E C"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t13.  C O S E C"<<"                                                                         14.  C O T"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t15.  L N"<<"                                                                               16.  B A S E  L O G "<<endl;
}

class calculator
{
public:
    int num;
    calculator()
    {
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tpress 1 for open calculator...";
        cin>>num;
        system("cls");
        if(num==1)
        {
            Admin();
            Case();
        }
    }

};

int main()
{
    int num,i;
    calculator obj;
    for(i=1; i<50; i++)
    {
        if(i>=1)
        {
            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tpress 1 to continue.\n";
            cout<<"\t\t\t\t\t\t\t\t\tpress 2 for exit...";
            cin>>num;
            system("cls");
            if(num==1)
            {
                Admin();
                Case();
            }
            if(num==2)
            {
                break;
            }
        }


    }

    return 0;
}





