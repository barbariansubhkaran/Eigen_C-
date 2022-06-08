#include "Eigen_header.h"

int main()
{
   Matrix2d mat;
   mat << 1, 2,
          3, 4;

  Vector2d u(-1,1), v(2,0);

  cout << "Matrix Multiplication =\n" << mat * mat << endl;

  cout << endl;

  cout << "Matrix Vector Multiplication =\n" << mat * u << endl;

  cout << endl;

  cout << u.transpose() * mat << endl;
  cout << endl;
  cout << u.transpose() * v << endl;








  return 0;
}
