#ifndef FILELOGGER_H
#define FILELOGGER_H
#include "ILogger.h"
#include <fstream>
class FileLogger : public ILogger {
private:
    std::ofstream logFile;
public:
    explicit FileLogger(const std::string& filename);
    ~FileLogger();
    void log(const std::string& message) override;
};
#endif // FILELOGGER_H