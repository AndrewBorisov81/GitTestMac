#include <string>

class EmployeeImpl {
    public:
        virtual ~EmployeeImpl();
        virtual void driver_doWork();
        virtual void programmer_doWork();
};

class DriverImpl : public EmployeeImpl {
    public:
       virtual void driver_doWork() override;
       virtual void programmer_doWork() override;
};

class ProgrammerImpl : public EmployeeImpl {
    public:
       virtual void driver_doWork() override;
       virtual void programmer_doWork () override;
};
