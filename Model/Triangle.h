#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <memory>
#include "../Vector/Float3.h"

class Triangle {
   std::unique_ptr<Float3[]> points;

public:
   Triangle(Float3& p0, Float3& p1, Float3& p2);

   const Float3& getPoint(float u, float v) const;

   const Float3& getPoint0() const;
   const Float3& getPoint1() const;
   const Float3& getPoint2() const;
};

#endif //TRIANGLE_H