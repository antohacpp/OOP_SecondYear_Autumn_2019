#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>


int main()
{
    int f1, f2, la1, la2, d, L, R;
     std:: cout << "dolg 1 = ";
    std:: cin>>f1;
    std:: cout << "dolg 2 = ";
    std:: cin >> f2;
    std:: cout << "shir 1 = ";
    std:: cin >> la1;
    std:: cout << "shir 2 = ";
    std:: cin >> la2;
    d=40000;
    R=d/(2*3.14);
    L=2*R*asin(sqrt((sin((f1-f2)*3.14/360))*(sin((f1-f2)*3.14/360))+cos(f1*3.14/180)*cos(f2*3.14/180)*(sin((la1-la2)*3.14/360))*(sin((la1-la2)*3.14/360))));
    std::cout << "rasstoyanie = " << L;
    return 0;
}
