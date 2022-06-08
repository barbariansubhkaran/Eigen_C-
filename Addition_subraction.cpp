#include "Eigen_header.h"

int main()
{
   Matrix2d a;
   a << 1, 2,
        3, 4;

  MatrixXd b(2,2);
  b << 2, 3,
       1, 4;

       cout << "Addition =\n" << a + b << endl;
       cout << "Subraction =\n" << a - b << endl;

       cout << endl;

       a += b;
       cout << a  << endl;

       Vector3d v(1,2,3);
       Vector3d w(1,0,0);

       cout << -v + w -v << endl;


  return 0;
}
