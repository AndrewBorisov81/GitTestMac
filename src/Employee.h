#pragma once

#include <string>

class Employee {
    public:
      Employee();
      Employee(std::string name, int id);
      virtual ~Employee();

      virtual void doWork() = 0;

      std::string getName() const;
      int getId() const;

      void helloEmployee();

    protected:
       class EmployeeImpl;
       EmployeeImpl * pimpl;
       //std::unique_ptr<EmployeeImpl> pimpl;
};

class DriverEmployee : public Employee {
    public:
        DriverEmployee(std::string, int id);
        virtual void doWork() override;
    private:
        std::string m_name;
        int m_id;
};


/*class ProgrammerEmployee : public Employee {
      public:
          ProgrammerEmployee(std::string, int id);
          virtual void programmer_doWork();
      private:
          std::string m_name;
          int m_id;      
};*/

