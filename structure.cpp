#include<iostream>
#include<conio.h>
struct Student
{
    char name[50];
    int roll;
    double sub1,sub2;
    float total;
};
using namespace std;
int main()
{
    int num;
    cout<<"Enter your student info. number :";
    cin>>num;
    struct Student student[num];
    for( int i = 0 ; i<num ; i++)
    {
        cout<<"Enter student Info : "<< i+1<<endl;
        cout<<"Enter student name is :";
          fflush(stdin);
        cin>>student[i].name;
        cout<<"Enter student roll : ";
        cin>>student[i].roll;
        cout<<"Enter marks for sub1 & sub2 : ";
        cin>>student[i].sub1>>student[i].sub2;
        cout<<endl;


    }
 for(int i = 0 ; i<num ; i++)
 {
     student[i].total = student[i].sub1 + student[i].sub2;
 }
     for(int i = 0 ; i<num ; i++)
     {
         cout<<"Student information for : "<<i+1<<endl;
         cout<<"student name : "<<student[i].name<<endl;
         cout<<"student roll : "<<student[i].roll<<endl;
         cout<<"Total marks : "<<student[i].total<<endl;
     }
    getch();
}
