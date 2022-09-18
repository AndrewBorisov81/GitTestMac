#include <iostream>

#include "Employee.h"
#include "EmployeeImpl.h"

Employee::Employee(std::unique_ptr<EmployeeImpl> p) : pimpl{std::move(p)} {

}

Employee::~Employee() {
    
}

Driver::Driver(std::string name, int id) 
    : Employee(std::make_unique<DriverImpl>()),
      m_name{name},
      m_id{id} {
}

void Driver::doWork() {
    pimpl->driver_doWork();
}

std::string Driver::getName() const {
    return m_name;
}

int Driver::getId() const {
    return m_id;
}

Programmer::Programmer() : Employee(std::make_unique<ProgrammerImpl>()) {

}

void Programmer::doWork() {
    pimpl->programmer_doWork();
}
