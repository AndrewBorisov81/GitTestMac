#include <string>

class EmployeeImpl {
    public:
        //EmployeeImpl();
        //EmployeeImpl(std::string name , int id);
        virtual ~EmployeeImpl();
        virtual void driver_doWork();
        virtual void programmer_doWork();
        //void helloEmployee();
    protected:
       //std::string m_name;
       //int m_id;
};

class DriverImpl : public EmployeeImpl {
    public:
       //DriverImpl(std::string name, int id);
       virtual void driver_doWork() override;
       virtual void programmer_doWork() override;
};

class ProgrammerImpl : public EmployeeImpl {
    public:
       //ProgrammerImpl(std::string name, int id);
       virtual void driver_doWork() override;
       virtual void programmer_doWork () override;
};
