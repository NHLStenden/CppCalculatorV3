#ifndef MOCKLOGGER_H
#define MOCKLOGGER_H
#include "ILogger.h"
class MockLogger : public ILogger {
public:
    void log(const std::string& message) override {}
};
#endif // MOCKLOGGER_H