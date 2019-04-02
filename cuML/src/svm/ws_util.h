/*
 * Copyright (c) 2019, NVIDIA CORPORATION.
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

#pragma once

/**
 * \todo Should this go to ml-prims?
 * 
 * \param [out] f_idx
 * \param [in] n length of the array
 */
__global__ void range(int *f_idx, int n);

/**
 * Mark elements as available if they are not in the the idx list.
 * \param [out] available flag whether an idx is available, size [n_rows]
 * \param [in] n_rows number of training vectors
 * \param [in] idx list of indices already selected, size [n_selected]
 * \param [in] n_selected number of elements in the idx list
 */
__global__ void set_available(bool *available, int n_rows, int *idx, int n_selected);
