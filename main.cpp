#include <iostream>

using namespace std;
int sum(int a, int b);
double sum(double a, double b);
int sum(int a, double b);



int main()
{
   cout<< sum(5,2)<<endl<<sum(6.66,8.2)<<endl<<sum(5,8.1);

    return 0;
}



int sum(int a, int b){

    return a+b;
}

double sum(double a, double b)
{
    return a+b;
}
int sum(int a, double b){

    return a+b;
}
