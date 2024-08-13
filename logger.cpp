#include "logger.h"
#include <fstream>
#include <iostream>
#include <ctime>

std::string Logger::logFile = "";

void Logger::initialize(const std::string& logFilePath) {
    logFile = logFilePath;
    log("Logger initialized.");
}

void Logger::log(const std::string& message, LogLevel level) {
    std::string prefix;
    switch (level) {
    case LogLevel::Info:
        prefix = "[INFO] ";
        break;
    case LogLevel::Warning:
        prefix = "[WARNING] ";
        break;
    case LogLevel::Error:
        prefix = "[ERROR] ";
        break;
    }
    std::string logMessage = prefix + message;
    std::cout << logMessage << std::endl;
    writeToFile(logMessage);
}

void Logger::writeToFile(const std::string& message) {
    if (logFile.empty()) return;
    std::ofstream outFile(logFile, std::ios::app);
    if (!outFile.is_open()) return;
    std::time_t now = std::time(nullptr);
    outFile << std::ctime(&now) << " " << message << std::endl;
    outFile.close();
}
