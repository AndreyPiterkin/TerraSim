//
// Created by Andrey Piterkin on 2/25/23.
//

#include "../include/Planet.h"
#include <cmath>

Planet Planet::from_fibonacci_sphere(long samples) {
    std::vector<Point3D> points;
    double phi = M_PI * (3.0 - sqrt(5.0));

    for (int i = 0; i < samples; ++i) {
        double y = 1.0 - ((double)i / (double)(samples - 1)) * 2;
        double radius = sqrt(1.0 - y * y);
        double theta = phi * i;

        double x = cos(theta);
        double z = sin(theta);
        points.push_back(Point3D(x,y,z));
    }

    return Planet(points);
}

Planet::Planet(std::vector<Point3D> points) {
    this->m_points = std::move(points);
}

const std::vector<Point3D> &Planet::get_points() {
    return this->m_points;
}

Planet::~Planet() = default;
