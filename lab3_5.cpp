#include<iostream>
#include<string>
int main ()
{
    std ::string  text1,text2;
    int N,count;
    std :: cout << "Enter the first text:";
    std :: cin >> text1;
    std :: cout << "Enter the second text:";
    std :: cin >> text2;
    std :: cout << "Enter N:";
    std :: cin >> N ;
    count = 0;
    while (count <N)
    {
        if (count %2 ==0)
        {
            std :: cout << text1 << " " ;
        }
        else 
        {
            std :: cout << text2<< " " ;
        }
        count=count+1;
    }

}