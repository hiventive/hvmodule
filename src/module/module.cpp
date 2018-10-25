/**
 * @file module.cpp
 * @author Benjamin Barrois <benjamin.barrois@hiventive.com>
 * @date May, 2018
 * @copyright Copyright (C) 2018, Hiventive.
 *
 * @brief General-purpose module
 *
 * This module inherits from sc_module
 */

#include "module.h"

namespace hv {
namespace module {

Module::Module(ModuleName name_) :
		::sc_core::sc_module(static_cast<::sc_core::sc_module_name>(name_)), BaseModule() {

}

Module::~Module() {
}

} // namespace module
} // namespace hv
