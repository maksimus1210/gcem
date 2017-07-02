/*################################################################################
  ##
  ##   Copyright (C) 2016-2017 Keith O'Hara
  ##
  ##   This file is part of the GCE-Math C++ library.
  ##
  ##   GCE-Math is free software: you can redistribute it and/or modify
  ##   it under the terms of the GNU General Public License as published by
  ##   the Free Software Foundation, either version 2 of the License, or
  ##   (at your option) any later version.
  ##
  ##   GCE-Math is distributed in the hope that it will be useful,
  ##   but WITHOUT ANY WARRANTY; without even the implied warranty of
  ##   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  ##   GNU General Public License for more details.
  ##
  ################################################################################*/

// g++-mp-7 -O2 -Wall -std=c++11 -I./../include incomplete_beta_inv_test.cpp -o incomplete_beta_inv.test -framework Accelerate

#include <cmath>
#include <iostream>
#include <iomanip>
#include "gcem.hpp"

int main()
{
    double ret_val;
    double x = 0.8;
    double p = 0.9;
    double q = 0.9;
    gcem::incomplete_beta_inv(p,q,x,ret_val);
    gcem::incomplete_beta_inv(1.0,1.0,x,ret_val); // for coverage
    gcem::incomplete_beta_inv(2.0,2.0,x,ret_val); // for coverage

    std::cout << "\nbegin incomplete_beta_inv test\n" << std::endl;

    std::cout << "incomplete_beta_inv: " << ret_val << std::endl;

    return 0;
}
