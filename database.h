#ifndef DATABASE_H
#define DATABASE_H

#include <string>
#include <json/json.h>

class Database {
public:
    bool connect(const std::string& configFilePath);
    void disconnect();
    bool executeQuery(const std::string& query);

private:
    std::string dbType;
    std::string host;
    std::string user;
    std::string password;
    std::string database;
    // Additional fields for storing connection information might be added
};

#endif
