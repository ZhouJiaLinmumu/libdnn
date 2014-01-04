#ifndef __RBM_H_
#define __RBM_H_

#include <pbar.h>
#include <dnn-utility.h>
#include <dataset.h>

std::vector<mat> rbminit(DataSet& data, const std::vector<size_t> &dims, float slopeThres);

__global__ void turnOnWithProbabilityKernel(float* const data, const float* const prob, unsigned int rows, unsigned int cols);

void turnOnWithProbability(mat &y);

mat RBMinit(mat& data, size_t nHiddenUnits, float threshold);
void fast_rand(mat& x);

std::vector<size_t> getDimensionsForRBM(const DataSet& data, const string& structure);

#endif