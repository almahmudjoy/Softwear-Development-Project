#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
void sum()
{
  int a,b,c;
    cout<<"\t\t\t\t\tS U M M A T I O N"<<endl;
    cout<<"\t\t\t\t\tEnter First Number :";
    cin>>a;
    cout<<endl;
    cout<<"\t\t\t\t\tEnter Second Number :";
    cin>>b;
    cout<<endl;
    c = a+b;
    cout<<"\t\t\t\t\tResult :"<<c<<"\t\t\t\t\t"<<endl;
    }

void sub()
{

  int a,b,c;
    cout<<"\t\t\t\t\tS U B T R A C T I O N"<<endl;
    cout<<"\t\t\t\t\tEnter First Number :";
    cin>>a;
    cout<<endl;
    cout<<"\t\t\t\t\tEnter Second Number :";
    cin>>b;
    cout<<endl;
    c = a-b;
    cout<<"\t\t\t\t\tResult :"<<c<<"\t\t\t\t\t"<<endl;

    }

void mult()
{

  int a,b,c;
    cout<<"\t\t\t\t\tM U L T I P L I C A T I O N"<<endl;
    cout<<"\t\t\t\t\tEnter First Number :";
    cin>>a;
    cout<<endl;
    cout<<"\t\t\t\t\tEnter Second Number :";
    cin>>b;
    cout<<endl;
    c = a*b;
    cout<<"\t\t\t\t\tResult :"<<c<<"\t\t\t\t\t"<<endl;
    }
void Div(){

  int a,b;
  float c;
    cout<<"\t\t\t\t\tD I V I S I O N"<<endl;
    cout<<"\t\t\t\t\tEnter First Number :";
    cin>>a;
    cout<<endl;
    cout<<"\t\t\t\t\tEnter Second Number :";
    cin>>b;
    cout<<endl;
    c = (float)a/b;
    cout<<"\t\t\t\t\tResult :"<<c<<"\t\t\t\t\t"<<endl;

    }
void Pow(){
    int a,b;
  float c;
    cout<<"\t\t\t\t\tS Q U A R E"<<endl;
    cout<<"\t\t\t\t\tEnter Number :";
    cin>>a;
    cout<<endl;
    c = pow(a,2);
    cout<<"\t\t\t\t\tResult :"<<c<<"\t\t\t\t\t"<<endl;
    }
void Power(){
    int a,b;
  int c;
    cout<<"\t\t\t\t\tP O W E R"<<endl;
    cout<<"\t\t\t\t\tEnter Number :";
    cin>>a;
    cout<<"\t\t\t\t\tEnter Power :";
    cin>>b;
    cout<<endl;
    c = pow(a,b);
    cout<<"\t\t\t\t\tResult :"<<c<<"\t\t\t\t\t"<<endl;
    }
void squareroot(){
    int a,b;
  float c;
    cout<<"\t\t\t\t\tS Q U A R E R O O T"<<endl;
    cout<<"\t\t\t\t\tEnter Number :";
    cin>>a;
    cout<<endl;
    c = sqrt(a);
    cout<<"\t\t\t\t\tResult :"<<c<<"\t\t\t\t\t"<<endl;
    }

void squarecube(){
    int a;
  float c;
    cout<<"\t\t\t\t\tS Q U A R E C U B E"<<endl;
    cout<<"\t\t\t\t\tEnter Number :";
    cin>>a;
    cout<<endl;
    c = pow(a,3);
    cout<<"\t\t\t\t\tResult :"<<c<<"\t\t\t\t\t"<<endl;
    }
void invarse(){
    int a;
  float c;
    cout<<"\t\t\t\t\tI N V A R S E"<<endl;
    cout<<"\t\t\t\t\tEnter Number :";
    cin>>a;
    cout<<endl;
    c = pow(a,-1);
    cout<<"\t\t\t\t\tResult :"<<c<<"\t\t\t\t\t"<<endl;
    }
void Sin()
{
    double degree,radian;
    const double pi= 3.14159;
    cout<<"\n\n\n\t\t\t\t\t\t\t\t\tI n p u t  D e g r e e : ";
    cin>>degree;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   ";
    if(degree==0||degree==180||degree==360||degree==540||degree==720||degree==900)
    {
       cout<<"\n\t\t\t\t\tS I N E "<<endl;
       cout<<"\n\t\t\t\t\tResult :"<<endl;
       cout<<"\n\t\t\t\t\tsin("<<degree<<")= "<<"0\n";
    }

    else
    {
        radian=degree*(pi/180.0);
        cout<<"\n\t\t\t\tS I N E "<<endl;
        cout<<"\n\t\t\t\tResult :"<<endl;
        cout<<"\n\t\t\t\tsin("<<degree<<")= "<<fixed<<setprecision(3)<<sin(radian);
    }

}
void Cos()
{
    double degree,radian;
    const double pi= 3.14159;
    cout<<"\n\n\n\t\t\t\t\t\t\t\t\tI n p u t  D e g r e e : ";
    cin>>degree;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   ";
    if(degree==90||degree==270||degree==450||degree==630||degree==810)
    {
        cout<<"\n\t\t\t\tC O S I N E "<<endl;
        cout<<"\n\t\t\t\tResult :"<<endl;
        cout<<"\n\t\t\t\tcos("<<degree<<")= "<<"0\n";
    }
    else
    {
        radian=degree*(pi/180.0);
        cout<<"\n\t\t\t\tC O S I N E "<<endl;
        cout<<"\n\t\t\t\tResult :"<<endl;
        cout<<"\n\t\t\t\tcos("<<degree<<")= "<<fixed<<setprecision(3)<<cos(radian);
    }

}

void Case()
{
    double c;
    //float a,b;
    cout<<"\n\n\n\t\t\t\t\t\t\t\t\tChoose   An   Option  : ";
    cin>>c;
    int cint = c;
    if(cint != c)
    cout<<"\n\n\n\t\t\t\t\t\t\t\t\tWrong Option!\n";
    else{
    switch(cint)
    {
    case 1:
        sum();
        break;
    case 2:
        sub();
        break;
    case 3:
        mult();
        break;
    case 4:
        Div();
        break;
    case 5:
       Pow();
        break;
    case 6:
        Power();
        break;
    case 7:
        squareroot();
         break;
    case 8:
        squarecube();
        break;
    case 9:
        invarse();
        break;
    case 10:
        Sin();
        break;
    case 11:
        Cos();
        break;
    default:
        cout<<"\n\n\n\t\t\t\t\t\t\t\t\tWorng Option!"<<endl;
    }
    }
}
void Admin()
{
    cout<<endl<<endl<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t"<<"C A L C U L A T O R"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t"<<"------------------------------------"<<"\t\t\t\t\t\t"<<endl;
    cout<<endl<<endl<<endl<<endl<<endl;
    cout<<"\t\t\t\t1.  S U M M A T I O N (+)  "<<"                                                            2.  S U B S T R A C T I O N (-)\t\t\t\t"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"\t\t\t\t3.  M U L T I P L I C A T I O N (*)"<<"                                                    4.  D I V I S I O N (/)\t\t\t\t"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"\t\t\t\t5. S Q U A R E (X^2) "<<"                                                                  6.  P O W E R (X ^ x)\t\t\t\t"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"\t\t\t\t7. S Q U A R E R O O T (sqrt(X))"<<"                                                       8.  S Q U A R E C U B E(X^3)\t\t\t\t"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"\t\t\t\t9.  I N V A R S E (X^-1) "<<"                                                              10. S I N \t\t\t\t"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"\t\t\t\t11.  C O S "<<"                                                                           "<<endl;
    cout<<endl<<endl<<endl;
}
class calculator
{
public:
    int num;
    calculator()
    {
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tpress 1 for open calculator...";
        cin>>num;
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
            cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\tpress 1 to continue....";
            cout<<"\n\t\t\t\t\t\t\t\t\tpress 2 for exit...";
            cin>>num;
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



