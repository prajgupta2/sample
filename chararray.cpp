#include<iostream>
#include<string>
using namespace std;

char toLowercase(char ch)
{
    if (ch>='a' && ch<='z')
    {
        return ch;
    }
    else
    {     
        char temp=  ch - 'A' + 'a';
        return temp;
     }
}

bool checkpalindrome(char a[], int size)
{
    int i=0, n=size-1;
   
    while(i<n)
    {
        if(toLowercase( a[i] ) != toLowercase( a[n] ))
        {
            return false;
            break;
        }
        else{

            i++;
            n--;
        }
    }
    return true;
}

int charlen( char arr[])
{
    int count=0;

    for(int i=0; arr[i]!= '\0'; i++){
        count++;
    }
    return count;
}
void reverse(char arr[], int count)
{
    int i=0, j=count-1;

    while(i<j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
  

int main()
{
    char arr[9];
    cin>>arr;
   //cout<<arr[2]<<endl;

   //arr[3]='r';
    cout<<"String is -> "<<arr;
    int n=charlen(arr);
    cout<<endl<<n;
    if(checkpalindrome(arr,n)){
        cout<<"True";
    }
    else{ cout<<"false";}
    reverse(arr,n);

    cout<<endl<<"Reverse is -> "<<arr;
 
   /*  string str="prajjwal";
    str[3]= 's';
    
    cout<<endl<<"str is-> "<< str[3];
 */

  
    return 0;
}