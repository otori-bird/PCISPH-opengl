#ifndef _PARTICLE_H
#define _PARTICLE_H

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

using namespace glm;

class Particle
{
public:
	Particle()
	{
		pos = vec3();
		velocity = vec3();
		force = vec3();
		radius = mass = density = presure = 0;
	};
	Particle(vec3 pos)
	{
		this->pos = pos;
		velocity = vec3();
		force = vec3();
		radius = mass = density = presure = 0;
	}

	int id;
	vec3 pos;
	vec3 velocity;
	vec3 force;
	
	double radius;
	double mass;
	double density;
	double presure;

};



#endif // !_PARTICLE_H
