/**
 * @file module_name_test.cpp
 * @author Benjamin Barrois <benjamin.barrois@hiventive.com>
 * @date May, 2018
 * @copyright Copyright (C) 2018, Hiventive.
 *
 * @brief ModuleName tests
 */

#include <iostream>
#include <module.h>
#include <gtest/gtest.h>
#include <systemc>
#include "module_name.h"

using namespace ::hv::common;
using namespace ::hv::module;

class ModuleNameTest: public ::testing::Test {
protected:
	virtual void SetUp() {
	}

	virtual void TearDown() {
	}
};

class MyModule1: public Module {
public:
	MyModule1(ModuleName name_) :
			Module(name_) {
	}

};

class MyModule2: public Module {
public:
	MyModule2(ModuleName name_) :
			Module(name_), mod1(std::string(this->name()) + '_' + "Mod1") {

	}

	MyModule1 mod1;
};

TEST_F(ModuleNameTest, ModuleNamingTest) {
	HV_SYSTEMC_RESET_CONTEXT
	MyModule2 mMod0("MyModule0"), mMod1("MyModule1");
	ASSERT_STREQ(mMod0.mod1.name(),
			std::string("MyModule0.MyModule0_Mod1").c_str());
	ASSERT_STREQ(mMod1.mod1.name(),
			std::string("MyModule1.MyModule1_Mod1").c_str());
}
