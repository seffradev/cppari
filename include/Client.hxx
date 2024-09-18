#pragma once

#include <string>

namespace cppari {

using namespace std;

#define ARI_URL_ENDPOINT "/ari"

class Client {
public:
  Client(string url, string application, string username, string password);

protected:
private:
  const string &getUrl() const;
  const string &getApplication() const;
  const string &getUsername() const;
  const string &getPassword() const;
  const string getAuthenticationString() const;
  const string getWebsocketUrl() const;

  string url;
  string application;
  string username;
  string password;
};

} // namespace cppari
