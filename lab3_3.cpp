#include<iostream>
int main ()
{
    float x,y,z;
    x = 1 ;
    y=6;
    z=0;
    while ( y<= 19)
    {
        z=z+(x/y);
        y=y+1;
    }
    std :: cout << z;
    
}