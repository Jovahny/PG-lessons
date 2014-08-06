#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
				float a, b, h;
				int i, N;
				cout << "Input a: ";
				cin >> a;
				cout << "b: ";
				cin >> b;
				cout << "N: ";
				cin >> N;
				float *x = new float[N];
	  	float *y = new float[N];
				
				h = 2.0/N;
				x[0] = 0.0;
				y[0] = 1.0;
				y[1] = (1+b*x[0])/(1-a*h);
				
				for (i=1; i<N; i++)
				{
					x[i]=x[i-1]+h;
					y[i+1]=y[i-1]+2*h*(a*y[i]+b*x[i]);
				}	
				x[N] = x[N-1]+h;
				
				for (i=0; i<=N; i++))
				{
    cout<<i<<": "<<x[i]<<" - "<<y[i];
    cout<<"\n";
    }
}