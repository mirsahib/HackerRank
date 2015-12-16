#include <iostream>

using namespace std;

int main()
{
    int limit,num,counter=0;
    cin>>limit;
    int i=0;
    while(i<limit){
        int rev=0;
        cin>>num;
        int temp = num;//storing input into temporary variable
        while(temp!=0){
            rev=temp%10;//extracting last digit of the number
            if(rev!=0 && (num%rev==0)){
                counter++;//if digit is not 0 and divide by input increament counter
            }
            temp=temp/10;
        }
        cout<<counter<<endl;
        counter=0;
        i++;
    }

    return 0;
}
