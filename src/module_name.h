/**
 * @file module_name.h
 * @author Benjamin Barrois <benjamin.barrois@hiventive.com>
 * @date May, 2018
 * @copyright Copyright (C) 2018, Hiventive.
 *
 * @brief Module name class
 *
 * NB: no operator =() overload because this is not compatible with sc_module_name
 * which has private operator =() for safety.
 */

#ifndef HV_MODULE_NAME_H_
#define HV_MODULE_NAME_H_

#include <HVCommon>
#include <systemc>

namespace hv {
namespace module {

class ModuleName {
public:
	//** Constructors **//
	ModuleName(const std::string& name_) :
			mName(name_.c_str()) {
	}

	ModuleName(const char* name_) :
			mName(name_) {

	}

	ModuleName(const ModuleName& name_) :
			mName(name_.mName) {

	}

	//** Casts **//
	operator ::std::string() const {
		return static_cast<const char*>(mName);
	}

	operator const ::sc_core::sc_module_name&() const {
		return mName;
	}

	virtual ~ModuleName() {
	}

	//** Concatenation **//
	std::string operator +(const std::string &name_) const {
		return this->operator ::std::string() + name_;
	}

	std::string operator +(const char* name_) const {
		return this->operator ::std::string()
				+ static_cast<::std::string>(name_);
	}

	std::string operator +(const char& name_) const {
		return this->operator ::std::string() + name_;
	}

	friend std::ostream& operator <<(std::ostream &strm,
			const ModuleName &name_) {
		return strm << static_cast<std::string>(name_);
	}

	//** Helpers **//
	const char* toConstCharPtr() const {
		return this->operator ::std::string().c_str();
	}

	const char* c_str() const {
		return this->toConstCharPtr();
	}

protected:
	::sc_core::sc_module_name mName;
};

}
}

#endif /* HV_MODULE_NAME_H_ */
