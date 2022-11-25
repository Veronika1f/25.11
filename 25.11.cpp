#include <iostream>
using namespace std;
int main ()
{
    double oil_cost = 8.5f ;
    double sourCream_cost = 2.4f ;
    double cream_cost = 4.1f ;
    double oil = 1.0f ;
    double sourCream = 2.0f ;
    double cream = 3.0f ;
    double total = oil * oil_cost + sourCream * sourCream_cost + cream * cream_cost ;
    std::cout << "oil sum :"<<oil*oil_cost << std::endl;
    std::cout << "sour cream sum :" <<sourCream * sourCream_cost << std::endl;
    std::cout << "cream sum : " <<cream * cream_cost << std::endl;
    std::cout << "total sum : " <<total << std::endl:
    return 0 ;


}

