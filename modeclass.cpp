#include<iostream>
using namespace std;
int main() 
{
   int n, i,max,g,larr[50],uarr[50],farr[50],h[50];
   float p1,p2,mode;
   cout<<"Enter Total No. of Elements = ";
   cin>>n;
   cout<<"\nEnter "<<n<<" Number of Lower Limit Elements: \n";  
     cout<<endl;
    for(i=0; i<n; i++)
    {
        cin>>larr[i];  
    }
    cout<<"\nEnter "<<n<<" Number of Upper Limit Elements: \n"; 
     cout<<endl;
    for(i=0; i<n; i++)
    {
        cin>>uarr[i];  
    }
    
   cout<<"Enter "<<n<<" Number of Frequency Elements:\n";   
   for(i=0; i<n; i++)
   {
      cin>>farr[i];
      max=farr[0];
   }
   for (i = 0; i < n; i++)
   {
      if (max < farr[i])
      max = farr[i];
   }
   cout<<endl;
   cout<<"Largest Frequency is found to be: "<<max;
   for(i=0;i<n;i++)
   {
      if (farr[i]>=max)
      {
        g=i;
        break;
      }
   }
   cout<<endl;
   cout<<"\nModel Class is found to be: "<<larr[g]<<" - "<<uarr[g];
   for(i=0; i<n; i++)
    {
      h[i]=(uarr[i]-larr[i]);
    }
   for(i=0; i<n; i++)                  
    {
      p1=h[g]*(farr[g]-farr[g-1]);
      p2=((2*farr[g])-farr[g-1]-farr[g+1]);
      mode=larr[g]+(p1/p2);  
    }
    cout<<"\nMode is Found to be = "<<mode<<"\n";
   return 0;
}