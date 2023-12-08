#ifndef OOP_EXCEPTIONCLASA_H
#define OOP_EXCEPTIONCLASA_H
#include <stdexcept>

class ExceptionClass : public std::exception {
public:
    ExceptionClass()=default;
    ~ExceptionClass()=default;
    const char* what() const noexcept override;
};
#endif
