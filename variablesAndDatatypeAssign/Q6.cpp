#include <iostream>
using namespace std;

int main()
{

    int num1 =5 ;
    int num2 =4;

    int temp =num1;

    cout << "Number before swapping are num1: " <<num1<<" num2: "<<num2<<endl;

    num1 = num2;
    num2 = temp;

     cout << "Number after swapping are num1: " <<num1<<" num2: "<<num2<<endl;
     return 0;

}