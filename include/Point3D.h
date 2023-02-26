//
// Created by Andrey Piterkin on 2/25/23.
//

#ifndef TERRASIM_POINT3D_H
#define TERRASIM_POINT3D_H
#include <array>

class Point3D {
public:
    Point3D(double x, double y, double z);
    const std::array<double, 3>& as_array();
    double get_x();
    double get_y();
    double get_z();
private:
    std::array<double, 3> m_coords{};
};


#endif //TERRASIM_POINT3D_H
