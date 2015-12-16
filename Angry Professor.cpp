#include <iostream>

using namespace std;

int main()
{
    int limit,n,k,a;
    int counter=0;
    // limit=test case,n=number of student,k=number of student must attend the class,a arrival time
    cin>>limit;
    int i=0;
    while(i<limit){
        cin>>n>>k;//input n=number of student,k=number of student must attend
        int j=0;
        while(j<n){
            cin>>a;//arrival time
            if(a<=0){
                counter++;
            }
            j++;
        }
        //condition
        if(counter>=k){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
        counter=0;
        i++;
    }


    return 0;
}
