#include "euler_characteristic.h"
#include "edges.h"
using namespace std;
int euler_characteristic(const Eigen::MatrixXi &F)
{
  int Chi = 0;
  // ADD YOUR CODE HERE
  Eigen::MatrixXi E = edges(F);
  // face element is vertices counting from 0, so the total vertices is max(F) + 1.
  Chi = (F.maxCoeff() + 1) - E.rows() + F.rows();
  return Chi;
}
