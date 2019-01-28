/**
 * @file reg_module.cpp
 * @author Benjamin Barrois <benjamin.barrois@hiventive.com>
 * @date May, 2018
 * @copyright Copyright (C) 2018, Hiventive.
 *
 * @brief Register-style module
 */
#include <iostream>
#include <module.h>
#include <gtest/gtest.h>
#include <systemc>

using namespace ::hv::common;
using namespace ::hv::module;

class ModuleTest: public ::testing::Test {
protected:
	virtual void SetUp() {
	}

	virtual void TearDown() {
		// Code here will be called immediately after each test
		// (right before the destructor).
	}
};

TEST_F(ModuleTest, InstantiationTest) {
	HV_SYSTEMC_RESET_CONTEXT
	class myModule: public Module {
	public:
		myModule() :
				Module("MyModule") {

		}
	};

	myModule rm;
	sc_core::sc_start();

}

