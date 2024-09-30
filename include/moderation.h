#ifndef MODERATION_H
#define MODERATION_H

#include <string>

class BanCommand {
public:
    void execute(const std::string& username);
};

class KickCommand {
public:
    void execute(const std::string& username);
};

class WarnCommand {
public:
    void execute(const std::string& username, const std::string& reason);
};

class RoleManagementCommand {
public:
    void assignRole(const std::string& username, const std::string& role);
    void removeRole(const std::string& username, const std::string& role);
};

class SpamProtectionCommand {
public:
    void checkSpam(const std::string& username);
};

class ReportUserCommand {
public:
    void execute(const std::string& username, const std::string& reason);
};

#endif
