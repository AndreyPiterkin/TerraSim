//
// Created by Andrey Piterkin on 2/25/23.
//

#ifndef TERRASIM_PLANET_H
#define TERRASIM_PLANET_H

#include <vector>
#include "Point3D.h"

class Planet {
public:
    static Planet from_fibonacci_sphere(long samples);
    ~Planet();
    const std::vector<Point3D>& get_points();

private:
    Planet(std::vector<Point3D> points);

    std::vector<Point3D> m_points;
};


#endif //TERRASIM_PLANET_H
