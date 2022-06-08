#include  "Eigen_header.h"

int main()
{
   Matrix4d m;

   m.resize(4,4);

   cout << "The matrix m is of size " << m.rows() << "x" << m.cols() << endl; 

  return 0;
}
