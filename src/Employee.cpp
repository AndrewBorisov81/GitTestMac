#include <iostream>

#include "Employee.h"
#include "EmployeeImpl.h"

Employee::Employee() {

}

Employee::Employee(std::string name, int id): pimpl(new EmployeeImpl(name, id))
{

}

Employee::~Employee() {
    
}

void Employee::doWork() {

}

void Employee::helloEmployee() {
    //std::cout << "Hello employee " << pimpl->m_name << "\n";
}

/*std::string Employee::getName() const {
    std::cout << m_name << "\n";
}

int Employee::getId() const {
    std::cout << std::to_string(m_id) << "\n";
}*/
