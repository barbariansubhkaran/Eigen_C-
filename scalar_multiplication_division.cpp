#include "Eigen_header.h"

int main()
{
   Matrix2d a;

   a << 1, 2,
        3, 4;

  Vector3d v(1, 2, 3);

  cout << "a * 2.5 =\n" << a * 2.5 << endl;
  cout << endl;
  
  cout << "0.1 * v =\n" << 0.1 * v << endl;

   cout << endl;

   v *= 2;
  cout << v<< endl;


  return 0;
}
