#include "EmployeeImpl.h"
#include <iostream>

EmployeeImpl::~EmployeeImpl() {

}

void EmployeeImpl::driver_doWork() {

}

void EmployeeImpl::programmer_doWork() {

}

void DriverImpl::driver_doWork() {
    std::cout << "Driver do Work!" << "\n";
}

void DriverImpl::programmer_doWork() {
    std::cout << "Programmer doWork!" << "\n";
}

void ProgrammerImpl::driver_doWork() {
    std::cout << "Programmer doWork!" << "\n";
}

void ProgrammerImpl::programmer_doWork() {
    std::cout << "Programmer doWork" << "\n";
}

/*void EmployeeImpl::programmer_doWork() {

}

void EmployeeImpl::helloEmployee() {

}*/

/*EmployeeImpl::EmployeeImpl() {

}

EmployeeImpl::EmployeeImpl(std::string, int id) {

}

DriverImpl::DriverImpl() {

}

DriverImpl::DriverImpl(std::string name, int id) {

}*/
