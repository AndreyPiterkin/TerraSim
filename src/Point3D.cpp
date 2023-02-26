//
// Created by Andrey Piterkin on 2/25/23.
//

#include "Point3D.h"

Point3D::Point3D(double x, double y, double z)  {
    m_coords[0] = x;
    m_coords[1] = y;
    m_coords[2] = z;
}

const std::array<double, 3>& Point3D::as_array() {
    return this->m_coords;
}

double Point3D::get_x() {
    return this->m_coords[0];
}

double Point3D::get_y() {
    return this->m_coords[1];
}

double Point3D::get_z() {
    return this->m_coords[2];
}