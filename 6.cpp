#include<iostream>
using namespace std;

int myFunc(k,m,sum){
cin>>k;
cin>>m;
sum=myFunc(k,m);
cout<<sum;
system("pause");
return 0;
}
