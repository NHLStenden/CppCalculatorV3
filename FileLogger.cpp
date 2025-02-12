#include "FileLogger.h"
FileLogger::FileLogger(const std::string& filename) {
    logFile.open(filename, std::ios::app);
}
FileLogger::~FileLogger() {
    if (logFile.is_open()) {
        logFile.close();
    }
}
void FileLogger::log(const std::string& message) {
    if (logFile.is_open()) {
        logFile << message << std::endl;
    }
}
