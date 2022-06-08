#include "Eigen_header.h"

int main()
{
   Vector3d v(1, 2, 3);
   Vector3d w(0, 1, 2);

   cout << "Dot product: " << v.dot(w) << endl;

   double dp = v.adjoint()*w;

   cout << dp << endl;

   cout << "Cross product: \n" << v.cross(w) << endl;

  return 0;
}
