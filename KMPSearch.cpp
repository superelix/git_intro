#include<bits/stdc++.h>
using namespace std;
void Preprocess(int *reset,string pat)
{
int j=-1,i=0;
reset[0]=-1;
while(i<pat.length())
{
while(j>=0 && pat[i]!=pat[j]){
    j=reset[j];
}
i++;
j++;
reset[i]=j;
}
}
void KMPSearch(int *reset,string str,string pat){
    Preprocess(reset,pat);
    int i=0,j=0;
    while(i<str.length()){
        while(j>=0 && str[i]!=pat[j])j=reset[j];
    i++;
    j++;
    if(j==pat.length())
    {
        cout<<"Pattern found at:"<<i-j+1<<endl;
        j=reset[j];
    }
    }
}
int main(){
    string str,pat;
    cin>>str>>pat;
    int reset[pat.length()+2];
    KMPSearch(reset,str,pat);
    return 0;
}