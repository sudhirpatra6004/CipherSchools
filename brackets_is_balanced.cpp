#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;        //test cases
     while(t--)
     {
         string s;
         cin>>s;    //Input String
         int n=s.size();
       
         stack<int>st;
         int flag=1,i=0;
         while(s[i]!='\0')
         {
             if( s[i]=='{' || s[i]=='[' || s[i]=='(' )
             st.push(s[i]);
             else if(!st.empty()&&(  ( st.top()=='{' && s[i]=='}' ) || (st.top()=='['&&s[i]==']')
             || (st.top()=='('&&s[i]==')')))
             {
                 st.pop();
             }
             else
             {
                 flag=0;
                 break;
             }
             i++;
         }
        
         if(st.empty()&&flag)
         cout<<"balanced"<<endl;
         else
         cout<<"not balanced"<<endl;
     }
	
	return 0;
}
