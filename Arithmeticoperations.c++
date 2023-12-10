/***********************************************************************************************************************************************
 ***********************************************Priyanka's Arithmetic Calculator****************************************************************
************************************************************************************************************************************************/
#include<iostream>
using namespace std;
int manipulation(int num);
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
int manipulation(int num)
{
    switch(num)
    {
        case 1:
        {
            addition();
            return 0;
            break;
        }
        case 2:
        {
            subtraction();
            return 0;
            break;

        }
        case 3:
        {
             multiplication();
            return 0;
            break;
        }
        case 4:
        {
             division();
            return 0;
            break;
        }
        case 5:
        {
             void modulus();
            return 0;
            break;
        }
        default:
        { 
            return -1; 
        }
        

    }
}
void addition()
{
    int n,sum=0;
    cout<<"Enter the number of operands:";
    cin>>n;
    cout<<endl<<"Enter the operands:"<<endl;
    
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        sum=sum+x;

    }
    cout<<"The result is:"<<sum<<endl;
}
void subtraction()
{
    int n,sum=0;
    cout<<"Enter the number of operands:";
    cin>>n;
    cout<<endl<<"Enter the operands:"<<endl;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        sum=x-sum;

    }
    cout<<"The result is:"<<sum;
}
void multiplication()
{
    int n,sum=1;
    cout<<"Enter the number of operands:";
    cin>>n;
    cout<<endl<<"Enter the operands:"<<endl;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        sum=sum*x;

    }
     cout<<"The result is:"<<sum;
}
void division()
{
    cout<<endl<<"Enter the operands:"<<endl;
    int a,b;
    cin>>a>>b;
    if (b != 0) {
        cout << "The result is:" << a / b;
    } else {
        cout << "Error: Division by zero.";
    }
    

}
void modulus(){
    cout<<endl<<"Enter the operands:"<<endl;
    int a,b;
    cin>>a>>b;
   if (b != 0) {
        cout << "The result is:" << a % b;
    } else {
        cout << "Error: Modulus by zero.";
    }

}
int main()
{
    while(true)
    {

    
    cout<<"Select one of he following operations:"<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cout<<"5.Modulus"<<endl;
    cout<<"Press the number to perform the operation:";
    int num;
    cin>>num;
    int result=manipulation(num);
    if(result==-1)
    {
        cout<<"Invalid number"<<endl;
    }
    
    cout<<"If you want to continue press yes:"<<endl;
    string str;
    cin>>str;
    if(str=="yes")
    {
        continue;
    }
    else{
        break;
    }
    
    }

}