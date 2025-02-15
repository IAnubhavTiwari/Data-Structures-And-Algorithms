//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    long long int fibSum(long long int N){
        //code here
        if(N == 0){ // if N = 0
           return 0;
       }
       if(N == 1){
           return 1;
       } 
       long long a = 0; //first wala number
       long long b = 1; // second wala no.
       long long c = 0; //third no. jo a and b ki madat se nikalenge
       long long sum = 1; // sum already 1 qki N==2 se chalu kr rhe hai and waha tak ka sum already 1 hai
       for(int i=2; i<=N; i++){
           c = (a % 1000000007) + (b % 1000000007);
           sum += c;
           a = b; // updating the values of a and b jaise age age badhenge
           b = c;
       }
       return sum % 1000000007; //we have to do modulo with the sum also 
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        Solution ob;
        cout << ob.fibSum(N) << endl;
    
cout << "~" << "\n";
}
    return 0; 
}
// } Driver Code Ends