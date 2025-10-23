# include<iostream>
# include<cmath>

using namespace std;

class complex{
    double re, im;

    complex(double r, double i){
        re = r;
        im = i;
    }
};// complex type data structure for complex roots

double d_calcu(double a, double b, double c)
{
    return sqrt(abs(pow(b,2) - 4*a*c));
}

bool type_of_roots(double a, double b, double c)
{
    // return true if root is real
    // return false if root is complex

    bool type = true;
    if (pow(b,2) < 4*a*c)
    {
        type = false;
    }

    return type;
}

int main()
{
    return 0;
}