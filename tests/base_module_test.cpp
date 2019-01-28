/**
 * @file reg_module.cpp
 * @author Benjamin Barrois <benjamin.barrois@hiventive.com>
 * @date May, 2018
 * @copyright Copyright (C) 2018, Hiventive.
 *
 * @brief Register-style module
 */

#include <iostream>
#include <base_module.h>
#include <gtest/gtest.h>
#include <systemc>

using namespace ::hv::module;

class BaseModuleTest : public ::testing::Test {
protected:
    virtual void SetUp() {
    }

    virtual void TearDown() {
        // Code here will be called immediately after each test
        // (right before the destructor).
    }
};

TEST_F(BaseModuleTest, fooTest){
    BaseModule *fooBM = new BaseModule();
    EXPECT_EQ(1 + 1, 2) << "1 + 1 should be 2";
    delete fooBM;
}
