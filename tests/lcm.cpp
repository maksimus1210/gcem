/*################################################################################
  ##
  ##   Copyright (C) 2016-2018 Keith O'Hara
  ##
  ##   This file is part of the GCE-Math C++ library.
  ##
  ##   Licensed under the Apache License, Version 2.0 (the "License");
  ##   you may not use this file except in compliance with the License.
  ##   You may obtain a copy of the License at
  ##
  ##       http://www.apache.org/licenses/LICENSE-2.0
  ##
  ##   Unless required by applicable law or agreed to in writing, software
  ##   distributed under the License is distributed on an "AS IS" BASIS,
  ##   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  ##   See the License for the specific language governing permissions and
  ##   limitations under the License.
  ##
  ################################################################################*/

#define TEST_VAL_TYPES int

#include "gcem_tests.hpp"

int main()
{
    std::cout << "\n*** begin lcm test ***\n" << std::endl;

    //

    std::function<int (int, int)> test_fn = gcem::lcm<int,int>;
    std::string test_fn_name = "gcem::lcm";

    //

    static constexpr int test_vals_1[] = { 3, 12, 17 }; // shape
    static constexpr int test_vals_2[] = { 4, 15, 81 }; // x

    static constexpr int expected_vals[] = { 12, 60, 1377 };

    //

    PRINT_TEST_2_EXPECT(test_fn_name,test_vals_1,test_vals_2,0,test_fn,expected_vals[0],true,"",3,18,false,false);
    PRINT_TEST_2_EXPECT(test_fn_name,test_vals_1,test_vals_2,1,test_fn,expected_vals[1],true,"",3,18,false,false);
    PRINT_TEST_2_EXPECT(test_fn_name,test_vals_1,test_vals_2,2,test_fn,expected_vals[2],false,"",3,18,false,false);

    //

    std::cout << "\n*** end lcm test ***\n" << std::endl;

    return 0;
}
