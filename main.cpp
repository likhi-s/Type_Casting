
//int main()
//{
// int egg;
// printf("Number of eggs used is \n");
//scanf("%d",&egg);
//double dozen = (double) egg/12;//type casting
//printf("%f number of dozens",dozen);
//return 0;
//}

#include<iostream>
using namespace std;

int main()
{
    int egg;
    cout<<"number of eggs used"<<endl;
    cin>>egg;
    double dozen = (double)egg/12;//type casting
    cout<<"number of dozens:"<<dozen<<endl;
    return 0;
}
