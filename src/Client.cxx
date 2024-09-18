#include <Client.hxx>

using namespace cppari;

Client::Client(string url, string application, string username, string password)
    : url(url), application(application), username(username),
      password(password) {}

const string &Client::getUrl() const { return url; }

const string &Client::getApplication() const { return application; }

const string &Client::getUsername() const { return username; }

const string &Client::getPassword() const { return password; }

const string Client::getAuthenticationString() const {
  return getUsername() + ":" + getPassword();
}

const string Client::getWebsocketUrl() const { return url + "/ari"; }
