/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int badTable[26];
void computeBadTable(string s1){
    for(int i=0;i<26;i++)
        badTable[i]=s1.length();
    for(int i=0;i<s1.length();i++)
        badTable[s1[i]-'A']=s1.length()-i+1;
}
int main()
{
    string s1="ANSHSHAHIAMABCDSHAH";
    string s2="SHAH";
    computeBadTable(s1);
    for(int i=0;i<=s1.length()-s2.length();){
        int j=s2.length()-1;
        while(j>=0 && s2[j]==s1[j+i])
            j--;
        if(j<0){
            cout<<"Pattern Found at:"<<i<<" "<<i+s2.length()<<endl;
        }
        i+=max(1,j-badTable[i+j]);
    }
    // cout<<"Pattern Not FOund";
    return 0;
}
