/**
 * @file module.h
 * @author Benjamin Barrois <benjamin.barrois@hiventive.com>
 * @date May, 2018
 * @copyright Copyright (C) 2018, Hiventive.
 *
 * @brief General-purpose module
 *
 * This module inherits of all kinds of module and from sc_module
 */

#ifndef HV_MODULE_H
#define HV_MODULE_H

#include <systemc>
#include <string>
#include "module_name.h"
#include "base_module.h"

namespace hv {
namespace module {

class Module : public ::sc_core::sc_module, public BaseModule {
public:
	Module(ModuleName name_);
	virtual ~Module();
};

} // namespace module
} // namespace hv

#endif // HV_MODULE_H
