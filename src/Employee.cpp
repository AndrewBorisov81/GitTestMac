#include <iostream>

#include "Employee.h"
#include "EmployeeImpl.h"

Employee::Employee(EmployeeImpl * p) : pimpl{p} {

}

Employee::~Employee() {
    delete pimpl;
}

Driver::Driver() : Employee(new DriverImpl()) {

}

void Driver::doWork() {
    pimpl->driver_doWork();
}

/*Employee::Employee(EmployeeImpl * p, std::string name, int id): pimpl{p} {

}*/

/*void Employee::doWork() {

}*/

/*void Employee::helloEmployee() {
    std::cout << "Hello employee " << pimpl->m_name << "\n";
}

std::string Employee::getName() const {
    std::cout << pimpl->m_name << "\n";
    return pimpl->m_name;
}

int Employee::getId() const {
    std::cout << std::to_string(pimpl->m_id) << "\n";
    return pimpl->m_id;
}*/

/*Employee::Driver(std::string name, int id) : pimpl(new DriverImpl(std::string name, int id)) {
    
}*/

/*void Driver::doWork() {
    std::cout << "Driver do Work!" << "\n";
}*/

/*void Driver::driver_doWork() {

}

void Driver::programmer_doWork() {

}*/
