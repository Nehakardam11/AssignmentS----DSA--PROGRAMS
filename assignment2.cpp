
#include"arraydatastr.cpp"
#include<iostream>
using namespace std;
int main()
{

    Array obj(5);
    obj.append(30);
    obj.append(60);
    obj.append(40);
    obj.append(70);
    for(int i=0;i<obj.cont(); i++)
        cout<<obj.get(i)<<" ";

    obj.del(2);
    cout<<endl;

    for(int i=0;i<obj.cont(); i++)
        cout<<obj.get(i)<<" ";

        return 0;
}

