/*
 * Copyright (C) 2020 ETH Zurich and University of Bologna
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdio.h>
#include "pulp.h"

int main()
{
    printf("Hello World!\n");

    uint32_t pattern;
    uint8_t mask_type;
    uint8_t result;

    //memset(pattern, 0, sizeof (pattern));
    //memset(mask_type, 0, sizeof (mask_type));
    //memset(result, 0, sizeof (result));
    //result = new uint32_t;
    result = (uint8_t)17;
    //pattern = 0xBBBBBBBB;
    //mask_type = 2;
    //write_pattern(pattern);
    //write_mask_type(mask_type);
    //for(int i =0;i<100;i++);
    //set_dout(36);
    //result = read_dout();
    uint8_t volatile * dout_reg = (uint8_t*)(0x1A700000);
    *dout_reg = (uint8_t)2;
    result = *dout_reg;
    printf("Result [0]: %d\n", result);

    return 0;
}
