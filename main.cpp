#include <iostream>

using namespace std;

int main()
{
    int n, rev=0; //rev to store reverse of  n
    cout<<"Enter any binary  number: ";
    cin>>n;
    int temp;
    int len;
    len=0;
    temp=n;
    temp=temp/10;
    while(temp!=0)
    {
     rev=(rev*10)+(temp%10);
     temp/=10;
     len++;
    }
    int j=0;
    int one;    //to store last bit of  n
    one =n%10;
    int deci=0; // to store decimal value of n
    int llen;
    llen=0;
    while(rev>0)
    {
        llen++;
        int f;
        f=rev%10;
        if(f!=0&&f!=1)
        {
            j=1;
            break;
        }
        deci=(deci+f)*2;
        rev/=10;
    }
  while(llen<len)
  {
      deci=deci*2;
      llen++;
  }
    if(j==1)
    {
        cout<<"Entered no is not a binary number ";
    }
    else{
        if(one!=0)
            deci=deci+1;
        cout<<"Decimal value of "<<n<<" is "<<deci;
    }
}
