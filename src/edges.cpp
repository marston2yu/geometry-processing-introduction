#include "edges.h"

Eigen::MatrixXi edges(const Eigen::MatrixXi &F)
{
  Eigen::MatrixXi E;
  // ADD YOUR CODE HERE
  int row_cnt = 0;
  for (int i = 0; i < F.rows(); i++)
  {
    for (int j = 0; j < F.cols(); j++)
    {
      int v1 = F(i, j);
      int v2 = F(i, (j + 1) % 3);
      if (v1 < v2) // avoid duplication for undirected graph.
      {
        E.resize(++row_cnt, 2);
        E.row(row_cnt - 1) = Eigen::Vector2i(v1, v2);
      }
    }
  }

  return E;
}
