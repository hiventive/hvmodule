/**
 * @file gtest_runner.h
 * @author Benjamin Barrois <benjamin.barrois@hiventive.com>
 * @date May, 2018
 * @copyright Copyright (C) 2018, Hiventive.
 *
 * @brief Test runner for Module project
 */
#include "gtest/gtest.h"
#include <systemc>
#include <ctime>

int sc_main(int argc, char* argv[]) {
	::std::srand(std::time(NULL));
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
