#include <iostream>
#include <vector>
#include "Operation.h"

struct incision {
	coordinate incision_start, incision_end;
	bool sutured = 0;
};

std::vector <incision> incisions;

coordinate coordinate_enter(coordinate& coordinate)
{
	std::cout << "Enter x: ";
	std::cin >> coordinate.x;
	std::cout << "Enter y: ";
	std::cin >> coordinate.y;
	return coordinate;
}

void scalpel()
{
	coordinate incision_start, incision_end;
	coordinate_enter(incision_start);
	coordinate_enter(incision_end);
	std::cout << "An incision was made from point " << incision_start.x << "." << incision_start.y << " to point " << incision_end.x << "." << incision_end.y << " ." << std::endl;
	incision incision_strust;
	incision_strust.incision_start = incision_start;
	incision_strust.incision_end = incision_end;
	incisions.push_back(incision_strust);
}
void hemostat()
{
	coordinate hemostat_coordinate;
	coordinate_enter(hemostat_coordinate);
	std::cout << "A hemostat was made at the point " << hemostat_coordinate.x << "." << hemostat_coordinate.y << std::endl;
}
void tweezers()
{
	coordinate tweezers_coordinate;
	coordinate_enter(tweezers_coordinate);
	std::cout << "A tweezers was made at the point " << tweezers_coordinate.x << "." << tweezers_coordinate.y << std::endl;
}
void suture()
{
	coordinate seam_start, seam_end;
	coordinate_enter(seam_start);
	coordinate_enter(seam_end);
	std::cout << "An seam was made from point " << seam_start.x << "." << seam_start.y << " to point " << seam_end.x << "." << seam_end.y << std::endl;
	for (int i = 0; i < incisions.size(); i++)
	{
		if (incisions[i].incision_start.x == seam_start.x and incisions[i].incision_start.y == seam_start.y and incisions[i].incision_end.x == seam_end.x and incisions[i].incision_end.y == seam_end.y)
		{
			incisions[i].sutured = 1;
		}
	}
}

bool checking_operation_status()
{
	for (int i = 0; i < incisions.size(); i++)
	{
		if (incisions[i].sutured != 1)
		{
			return 0;
		}
	}

	return 1;
}

