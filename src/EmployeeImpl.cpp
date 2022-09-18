#include "EmployeeImpl.h"
#include <iostream>

EmployeeImpl::~EmployeeImpl() {

}

void EmployeeImpl::driver_doWork() {
    std::cout << "Driver do Work!" << "\n";
}

void EmployeeImpl::programmer_doWork() {
    std::cout << "Programmer do Work!" << '\n';
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
