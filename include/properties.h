#ifndef PROPERTIES_H_INCLUDED
#define PROPERTIES_H_INCLUDED
#include "omp.h"
#include "qm_residue.h"

#include <pthread.h>
#include <random>
#include <chrono>
#include <algorithm>
#include <cstdio>
#include <thread>

void qd_calc (const std::vector<libint2::Shell>& obs, Square_Matrix& dm);
std::vector<double> v_calc (const std::vector<std::array<double,3>> points, const std::vector<libint2::Shell>& obs, Square_Matrix& dm);

#endif
