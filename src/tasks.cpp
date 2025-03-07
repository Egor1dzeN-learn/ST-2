#include <tasks.h>
#include <circle.h>
double taskEarthAndRope() {
	double earthRadius = 6378100;//meters
	Circle earth(earthRadius);
	earth.setFerence(earth.getFerence() + 1);
	return earth.getRadius() - earthRadius;
};
double taskPool() {
	double poolRadius = 3;
	double pathWidth = 1;
	Circle pool(poolRadius);
	Circle poolWithPath(poolRadius + pathWidth);
	return (poolWithPath.getArea() - pool.getArea()) * 1000 + poolWithPath.getFerence() * 2000;
};