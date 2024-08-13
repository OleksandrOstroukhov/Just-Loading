#ifndef LOGGER_H
#define LOGGER_H

#include <string>

class Logger {
public:
    enum class LogLevel {
        Info,
        Warning,
        Error
    };

    static void initialize(const std::string& logFilePath);
    static void log(const std::string& message, LogLevel level = LogLevel::Info);

private:
    static std::string logFile;
    static void writeToFile(const std::string& message);
};

#endif
