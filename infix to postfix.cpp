//WAP TO CONVERT INFIX TO POSTFIX.......
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
char pop();
void push();
int getprec(char);
char infix[20],postfix[20],stack[20],val;
int i=0,j=0,k=0;
int main()
{
 char a;
 int pre,pre1;
 cout<<"enter the expression "<<endl;	
 cin.getline(infix,20);
 for(i=0;infix[i]!=NULL;i++)
 {
   val=infix[i];
   switch(val)
   {
   	case '(':
   		 push();
   		 break;
   	case ')':
   		 while((a=pop())!='(');
   		 postfix[j++]=a;
   		 break;
   	case '+':case '-':case '*':case '/':case '^':case '%':
   		 pre=getprec(val);
   		 pre1=getprec(stack[k-1]);
   		 while(pre1>=pre)
   		 {
   		   a=pop();
		   postfix[j++]=a;	  
		   pre1=getprec(stack[k-1]);	
   		 }
   		 push();
   		 break;
	default :
	     postfix[j++]=val;			 
   }	
 }
while((a=pop())!=NULL);
  postfix[j++]=a;
  puts(postfix);
getch();
return 0;   		
}
char pop()
{
 char a;
 a=stack[k-1];
 k--;
 return a;	
}
void push()
{
 stack[k]=val;
 k++;	
}
int getprec(char item)
{
 if(item=='+'||item=='-')
 return (1);
 else if(item=='*'||item=='/'||item=='%')
 return (2);
 else if(item=='^')
 return (3);
 else
 return (0);	
}






















