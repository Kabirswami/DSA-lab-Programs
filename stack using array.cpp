#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int stack[10];
int top=-1;
void push(int);
int pop();
void display();
int main()
{
 int ch,item;
 while(1)
 {
 cout<<"1.push , 2.pop ,3.display , 4.exit "<<endl;
 cout<<"enter your choice"<<endl;
 cin>>ch;
 switch(ch)
 {
  case 1:
  	cout<<"enter the item "<<endl;
  	cin>>item;
  	push(item);
  	break;
  case 2:
  	cout<<"popped item is"<<pop()<<endl;
  	break;
  case 3:
  	display();
  	break;
  case 4:
    exit(0); 
   break;	
   default :
   	cout<<"please enter valid choice"<<endl;
 }	
 }	
  getch();
  return 0;	
}
void push(int item)
{
 if(top==10)
 {
  cout<<"stack overflow "<<endl;	
 }	
 else
 {
 	top++;
 	stack[top]=item;
 	cout<<"element is entered "<<endl;
 }
}
int pop()
{
 int x;	
  if(top<0)
  {
   cout<<"stack underflow" <<endl;
   return 0;	
  }
  else
  {
  	x=stack[top];
  	top--;
  	return x;
  }
}
void display()
{
 int i;
 cout<<"stack is"<<endl;	
 for(i=top;i>=0;i--)
 cout<<stack[i]<<endl;
}






















