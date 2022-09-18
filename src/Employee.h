#pragma once

#include <string>
#include <memory>

 class EmployeeImpl;

class Employee {
    public:
      Employee(std::unique_ptr<EmployeeImpl> p);
      virtual ~Employee();
      virtual void doWork() = 0;
    protected:
       std::unique_ptr<EmployeeImpl> pimpl;
};

class Driver : public Employee {
    public:
       Driver(std::string name, int id);
       void doWork() override;

       std::string getName() const;
       int getId() const;
    private:
       std::string m_name;
       int m_id;
};

class Programmer : public Employee {
    public:
        Programmer();
        void doWork() override;
};
