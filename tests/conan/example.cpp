#include <systemc>
#include <iostream>
#include <hv/module.h>

using namespace hv::module;

int sc_main(int argc, char* argv[]) {
	BaseModule* baseModuleInst = new BaseModule();	
	std::cout << "Hello BaseModule" << std::endl;
		
	Module* moduleInst = new Module("testmodule");
	std::cout << "Hello Module" << std::endl;
	
	delete baseModuleInst;
	delete moduleInst;
	return 0;
}
