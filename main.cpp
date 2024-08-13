#include <iostream>
#include <thread>
#include <vector>
#include "database.h"
#include "logger.h"
#include "data_processor.h"

void processData(int threadID) {
    Logger::log("Thread " + std::to_string(threadID) + " started.");
    DataProcessor processor;
    processor.loadData();
    processor.processData();
    processor.saveData();
    Logger::log("Thread " + std::to_string(threadID) + " finished.");
}

int main() {
    Logger::initialize("logfile.txt");

    Logger::log("Just Loading: Starting program...");

    Database db;
    if (!db.connect("config.json")) {
        Logger::log("Database connection failed!", Logger::LogLevel::Error);
        return -1;
    }

    const int numThreads = 4;
    std::vector<std::thread> threads;

    for (int i = 0; i < numThreads; ++i) {
        threads.push_back(std::thread(processData, i));
    }

    for (auto& thread : threads) {
        thread.join();
    }

    db.disconnect();
    Logger::log("Just Loading: Program finished.");
    return 0;
}
