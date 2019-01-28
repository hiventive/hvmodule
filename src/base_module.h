/**
 * @file base_module.h
 * @author Benjamin Barrois <benjamin.barrois@hiventive.com>
 * @date May, 2018
 * @copyright Copyright (C) 2018, Hiventive.
 *
 * @brief Base module
 */

#ifndef HV_BASEMODULE_H
#define HV_BASEMODULE_H

#include <cstdlib>
#include <iostream>
#include <systemc>

namespace hv {
namespace module {

class BaseModule {
public:
    BaseModule();
    virtual ~BaseModule();
    
};

} // namespace module
} // namespace hv

#endif // HV_BASEMODULE_H
