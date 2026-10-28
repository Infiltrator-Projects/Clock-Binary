// SPDX-License-Identifier: GPL-3.0-or-later
// Provider terminology adapter; both calculations belong to Common.
#ifndef INFILTRATR_RESOURCE_CLOCK_CIVIL_H
#define INFILTRATR_RESOURCE_CLOCK_CIVIL_H
#include <infiltratr/arithmetic.h>
#include <infiltratr/temporal.h>
#include <stdint.h>
#define CLOCK_CIVIL_DAY_US INT64_C(86400000000)
#define CLOCK_CIVIL_SECOND_US INT64_C(1000000)
static inline int64_t clock_civil_modulo(int64_t value, int64_t modulus)
{
    int64_t remainder = 0;
    return infiltratr_i64_floor_divmod(value, modulus, NULL, &remainder) ? remainder : 0;
}
static inline uint64_t clock_civil_local_phase(int64_t instant, int32_t offset_seconds)
{
    return (uint64_t)infiltratr_temporal_local_microseconds_of_day(instant, offset_seconds);
}
#endif
