#include <iostream>

using namespace std;

int main()
{
    int limit,cycle,height=1;
    cin>>limit;// test case to take
    int i=0;
    while(i<limit){
        cin>>cycle;//number of cycle
        int j=1;//
        while(j<=cycle){
            if(j%2==0){
                height = height+1;// if year is event height will increase by 1m
            }else{
                height = height*2;//if year is odd height will double(2x)
            }
            j++;
        }
        cout<<height<<endl;
        height=1;//returning height to its initial value
        i++;
    }
    return 0;
}
