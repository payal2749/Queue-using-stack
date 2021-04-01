#include <bits/stdc++.h>
using namespace std;

stack<int> s1,s2;

void enqueue(int l)
{
     while(!s1.empty())
     {
        s2.push(s1.top());
        s1.pop();    
         
     }
     s1.push(l);
     while(!s2.empty())
     {
        s1.push(s2.top());
        s2.pop();    
         
         
     }  
    
}
int dequeuee()
{
    int t1=s1.top();
    s1.pop();
    return t1;
    
}



int main()
{
   int arr[5]={1,2,3,4,5};
   for(int i=0;i<5;i++)
   {
      enqueue(arr[i]);    
        
   }
   cout<<dequeuee();
}