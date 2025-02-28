#include <iostream>
using namespace std;

class Stack
{
    int size;
    int *st;
    int tos;

public:
    Stack(int n = 10)
    {
        tos = 0;
        size = n;
        st = new int[size];
        cout << "The array is constructed with the size of " << n << endl;
    }
    ~Stack()
    {
        delete[] st;
        cout << "The array has been destructed" << endl;
    }
    void push(int);
    int pop();
    void displayStack();
};

void Stack::push(int n)
{
    if (tos == size)
    {
        cout << "Stack is full" << endl;
    }
    else
    {
        st[tos] = n;
        tos++;
    }
};

int Stack::pop()
{
    int retrieveVal;
    if (tos == 0)
    {
        cout << "Stack is empty" << endl;
        retrieveVal = -1;
    }
    else
    {
        tos--;
        retrieveVal = st[tos];
    }
    return retrieveVal;
};

void Stack::displayStack()
{
    if (tos == 0)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "The stack contains ";
        for (int i = 0; i < tos; i++)
        {
            cout << st[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    Stack s1(5);
    s1.push(1);
    s1.push(4);
    s1.push(5);
    s1.push(6);
    s1.push(7);
    s1.push(0);
    s1.displayStack();
    Stack s2(2);
    s2.pop();
}