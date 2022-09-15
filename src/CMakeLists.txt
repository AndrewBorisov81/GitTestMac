add_library(my_lib 
                   Employee.cpp
                   EmployeeImpl.cpp)

target_include_directories(my_lib PUBLIC src)