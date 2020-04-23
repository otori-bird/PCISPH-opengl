#include "SPH.h"



SPH::SPH(vec3 numbers, double radius)
{
	this->numbers = numbers;
	this->radius = radius;
	particles.empty();
	//mass
	
	// 分块，将每个粒子划分到指定位置里
	locations = new int **[numbers.x];

	for (int i = 0; i < numbers.x; i++)
	{
		locations[i] = new int *[numbers.y];
		for (int j = 0; j < numbers.y; j++)
		{
			locations[i][j] = new int [numbers.z];
			for (int k = 0; k < numbers.z; k++)
			{
				vec3 pos(i / numbers.x, j / numbers.y, k / numbers.z);
				Particle tmp(pos);
				tmp.radius = radius;
				tmp.id = numbers.z * (numbers.y * i + j) + k;
				particles.push_back(tmp);
			}
		}
	}





	


}


SPH::~SPH()
{
}
