#ifndef NEW_STRUCTURE_H
#define NEW_STRUCTURE_H
#include "mapping.h" 
#define MAX_PACKAGE 100 // maximum number of packages that the truck can deliver
#define MAX_WEIGHT 2000 // maximum total weight in kg that the truck can delivery
#define MAX_VOLUME 20 // maximum total volume in cubic meter that the truck can delivery
struct Package // represent to a package
{
	int weight;
	int size;
	struct Point dest;
};
struct Truck
{
	int colorID; // (blue-1, 2-green, 3-yellow)
	int tempWeight; // current weight of the truck load
	int tempVolume; // current volume of the truck load
	int numPackage; // number of package on truck
	struct Route route;  // fix the route
	struct Package package[MAX_PACKAGE]; // list the packages on the truck
};
struct Path // represent to a shortest path
{
	struct Point point[MAX_ROUTE]; // point in path
	int length; // length of path
};

void addPackage(struct Truck* tr, struct Package pkg);
double calculateCapacity(const struct Truck* tr);
struct Path calculatePath(const struct Map* m, struct Point begin, struct Point dest);

void testAddPackage();
void testCalculateCapacity();
void testCalculatePath();

#endif // !NEW_STRUCTURE_H
