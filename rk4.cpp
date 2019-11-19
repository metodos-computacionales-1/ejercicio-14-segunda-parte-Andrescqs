#include <iostream>
#include <cmath>
using namespace std;

const double K = 100;
const double M = 2;
const double Lmd = 1;
const double Dt = 0.01;


double f0(double t, double x, double v); 
double f1(double t, double x, double v);
void rk4( double & x, double & v, double t, double Dt);

int main()
{
  double x, v;
  x = 1;
  v = 0;
  for(double i = 0; i <= 10; i += Dt) {
    cout << i << "\t" << x << "\t" << v << endl;
    rk4(x, v, i, Dt);
  }

  return 0;
}


void rk4( double & x, double & v, double t, double Dt) 
{
  double k10, k11, k20, k21, k30, k31, k40, k41;
  k10 = Dt*f0(t, x, v);
  k11 = Dt*f1(t, x, v);
  k20 = Dt*f0(t + Dt/2, x + k10/2, v + k11/2);
  k21 = Dt*f1(t + Dt/2, x + k10/2, v + k11/2);
  k30 = Dt*f0(t + Dt/2, x + k20/2, v + k21/2);
  k31 = Dt*f1(t + Dt/2, x + k20/2, v + k21/2);
  k40 = Dt*f0(t + Dt, x + k30, v + k31);
  k41 = Dt*f1(t + Dt, x + k30, v + k31);

  x = x + (1.0/6.0)*(k10 + 2*k20 + 2*k30 + k40);
  v = v + (1.0/6.0)*(k11 + 2*k21 + 2*k31 + k41);
}

double f0(double t, double x, double v)
{
  return v;
}

double f1(double t, double x, double v)
{
  return (-K/M)* pow(v, Lmd);
    
}