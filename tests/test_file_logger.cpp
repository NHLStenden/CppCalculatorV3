#include <gtest/gtest.h>
#include <fstream>
#include "../Calculator.h"
#include "../FileLogger.h"

TEST(CalculatorTest, RealFileLoggerTest) {
    FileLogger logger( "./test-file-logger.txt");
    Calculator calc(logger);
    EXPECT_EQ(calc.calculate(2, 3, '+'), 5);
}

TEST(FileLoggerTest, LogToFile) {
    std::string filename = "test_log.txt";
    std::remove(filename.c_str());

    FileLogger fileLogger(filename);
    fileLogger.log("Test log entry");

    std::ifstream logFile(filename);
    ASSERT_TRUE(logFile.is_open());

    std::string line;
    std::getline(logFile, line);
    logFile.close();

    EXPECT_EQ(line, "Test log entry");
    std::remove(filename.c_str());
}