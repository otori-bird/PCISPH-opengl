#ifndef _SPH_H
#define _SPH_H

#include"Particle.h"
#include<vector>
using namespace std;

class SPH
{
public:
	SPH(vec3 numbers, double radius);
	~SPH();

private:
	vec3 numbers;
	double radius;
	vector<Particle> particles;
	int ***locations;

	

};



#endif // !_SPH_H
