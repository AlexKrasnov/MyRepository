#pragma once

#define MemSize 50

template <typename T>
class Stack
{
private:
    T *array;                      
    const int size;                   
    int top;                          
public:
    Stack(int s=15);                     
    ~Stack();                         
    void push(const T & );     
    T pop();       
    const T &look() const;  
	int getSize() const;
    int getTop() const;  
};
 
template <typename T>
Stack<T>::Stack(int s):size(s), top(-1)
{
	if (size>MemSize) throw "very big size";
	if (size<0) throw "negative size";
    array = new T[size]; 
}

template <typename T>
Stack<T>::~Stack()
{
    delete [] array; 
}
template <typename T>
void Stack<T>::push(const T &val)
{
	if (top+1>=size) throw "Stack is full";
	array[++top] = val; 
}
template <typename T>
T Stack<T>::pop()
{ 
	if (top<0) throw "Stack is empty"; 
	return array[top--];
}
template <class T>
const T &Stack<T>::look() const
{
	return array[top]; 
}

template <typename T>
int Stack<T>::getSize() const
{
    return size;
}

template <typename T>
int Stack<T>::getTop() const
{
    return top;
}
