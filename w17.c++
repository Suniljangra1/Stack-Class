// create a stack  class 
#include<iostream>
using namespace std;
class Stack
{
    int aray[100];
    int top;
    int size;
    public: 
        Stack()
        {
            top = -1;
            size = 0;
        }
        ~Stack()
        {
            top = -1;
        }
        void Push_Data(int value)
        {
            if(top<100)
            {
                top++;
                aray[top]=value;
            }
            else 
            cout<<"Array out of bound : ";
        }
        int Pop_Data()
        {
            if(!Full_stack())
            {
                top--;   // first decrese the top value like 3-- is 2  t
                return aray[top+1];  // top+1  like 2+1 is 3 top is normal but value is delete
            }
            else {
            cout<<"Under flow : ";
            return -1;
            }
        }
        int Empty_stack()
        {
            if(top == -1)
                return 1;
            else 
                return 0;
        }
        int Full_stack()
        {
            if(top==99)
            return 1;
            else 
            return 0;
        }
        int Top_Stack()
        {
            if(!Empty_stack())
            {
             return aray[top];
            }
            else
            {
             cout<<"under flow : ";
             return 0 ;
            }
        }
        int Size_stack()
        {
            return top+1;
        }
};
int main()
{
    //system("cls");
    Stack s1;
    s1.Push_Data(10);
    s1.Push_Data(20);
    s1.Push_Data(60);
    s1.Push_Data(70);
    s1.Push_Data(80);
    cout<<"Size of the stack is "<<s1.Size_stack()<<endl;
    while(!s1.Empty_stack())
    {
        cout<<s1.Top_Stack()<<" ";
        s1.Pop_Data();
    }
   
}