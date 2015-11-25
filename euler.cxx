/*
author: markus
  date: 2015-11-25
*/

#include <cmath>
#include <iostream>

using namespace std;

int main(){

	int N = 1000;
	double y = 1;
	double thl=1.3863;
	const double lambda=-0.5;
	double dt=5*thl/N;
	double f = 1;
	double b = 1;
	double u = 1;

	cout << 0 << "\t" << y << "\t" << f << "\t" << b << "\t" << u << endl;

	for(int i=0; i<N; i++){

		y = exp(lambda*dt*(i+1));
		f += dt*lambda*f;
		b /= (1-(dt*lambda));
		u *= (1+dt*lambda*0.5)/(1-dt*lambda*0.5);

		cout << i*dt << "\t" << y << "\t" << f << "\t" << b << "\t" << u << endl;
	}

	return 0;
}
