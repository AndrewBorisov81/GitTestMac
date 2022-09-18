#pragma once

#include <string>

 class EmployeeImpl;

class Employee {
    public:
      Employee(EmployeeImpl * p);
      //Employee(EmployeeImpl * p, std::string name, int id);
      virtual ~Employee();

      virtual void doWork() = 0;

      //std::string getName() const;
      //int getId() const;

      //void helloEmployee();

      //std::string m_name;
      //int m_id;

    protected:
       EmployeeImpl * pimpl;
       //std::unique_ptr<EmployeeImpl> pimpl;
};

class Driver : public Employee {
    public:
       Driver();
       //Driver(std::string name, int id);
       //virtual void driver_doWork();
       //virtual void programmer_doWork();
       void doWork() override;
};

/*class Programmer : public Employee {
    public:
        Programmer();

};*/
