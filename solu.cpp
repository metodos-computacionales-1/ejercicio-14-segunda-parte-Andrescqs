#include <iostream>
#include <cmath>
using namespace std;

void Euler(double & x, double & v, double t0, double t, double Dt);
double f0(double t, double x, double v); 
double f1(double t, double x, double v); 

const double K = 100;
const double M = 2;
const double Lmd = 1;
const double Dt = 0.01;

int main(void)
    
    
{
    const double t0 = 0;
	const double t = 15;
    double x=1;
    double v=0;
    
	Euler(x, v, t0, t, Dt);
	return 0;
}


double f0(double t, double x, double v)
{
  return v;
}

double f1(double t, double x, double v)
{
  return (-K/M)* pow(v, Lmd);
    
}


void Euler(double & x, double & v, double t0, double t, double Dt)
{
  const int n = (t - t0)/Dt;
  
  for(int i = 0 ;i < n; ++i)
    {
      double T = t0 + Dt*i;
      double xa = x;
      double va = v;
	  
      x = x + Dt * f0(t, xa, va);
      v = v + Dt * f1(t, xa , va);
	  
      cout<< t << "\t" << x << "\t" << v <<endl;
    }
}
      






