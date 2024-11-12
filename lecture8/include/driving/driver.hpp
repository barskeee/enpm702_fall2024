#pragma once

#include <iostream>
#include <string>
#include <memory>
#include "date.hpp"

namespace driving {
class Date; // class forewording keeps compile error from happening when a class is compiled before a class used within it
class Vehicle;

class Driver {
   public:
    Driver(const std::string& name, driving::Date dob) : name_{name}, date_of_birth_{dob} {
        /*body*/
    }
    void drive_vehicle(double distance) const;

    driving::Date get_birthdate() const {
        return date_of_birth_;
    }

    std::string get_name() const {
        return name_;
    }
    
   private:
    std::string name_;
    driving::Date date_of_birth_; // no guarantee that Date will be compiled first so could have compile error
    // std::weak_ptr<driving::Vehicle> vehicle_; // weak to break cyclic reference - not working idk what's up
};  // class Driver
}  // namespace driving
