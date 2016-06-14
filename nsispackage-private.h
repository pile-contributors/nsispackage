/**
 * @file nsispackage-private.h
 * @brief Declarations for NsisPackage class
 * @author Nicu Tofan <nicu.tofan@gmail.com>
 * @copyright Copyright 2014 piles contributors. All rights reserved.
 * This file is released under the
 * [MIT License](http://opensource.org/licenses/mit-license.html)
 */

#ifndef GUARD_NSISPACKAGE_PRIVATE_H_INCLUDE
#define GUARD_NSISPACKAGE_PRIVATE_H_INCLUDE

#include <nsispackage/nsispackage-config.h>

#if 0
#    define NSISPACKAGE_DEBUGM printf
#else
#    define NSISPACKAGE_DEBUGM black_hole
#endif

#if 0
#    define NSISPACKAGE_TRACE_ENTRY printf("NSISPACKAGE ENTRY %s in %s[%d]\n", __func__, __FILE__, __LINE__)
#else
#    define NSISPACKAGE_TRACE_ENTRY
#endif

#if 0
#    define NSISPACKAGE_TRACE_EXIT printf("NSISPACKAGE EXIT %s in %s[%d]\n", __func__, __FILE__, __LINE__)
#else
#    define NSISPACKAGE_TRACE_EXIT
#endif


static inline void black_hole (...)
{}

#endif // GUARD_NSISPACKAGE_PRIVATE_H_INCLUDE
