// The original file was reference to Url Parser (c)
// See Also(c version): http://draft.scyphus.co.jp/lang/c/url_parser.html

#ifndef UTIL_URL_PARSER_
#define UTIL_URL_PARSER_

#include <string>

namespace util {
class UrlParser {
 public:
  explicit UrlParser(const char* url);
  std::string GetScheme() const { return scheme_; }
  std::string GetHost() const { return host_; }
  std::string GetPort() const { return port_; }
  std::string GetPath() const { return path_; }
  std::string GetQuery() const { return query_; }
  std::string GetFragment() const { return fragment_; }
  std::string GetUserName() const { return username_; }
  std::string GetPassword() const { return password_; }

 private:
  bool Init(const char* url);

  // Check whether the character is permitted in scheme string
  bool IsSchemeChar(int c);

 private:
  // mandatory
  std::string scheme_;
  std::string host_;

  // optional
  std::string port_;
  std::string path_;
  std::string query_;
  std::string fragment_;
  std::string username_;
  std::string password_;
};
} // namespace util
#endif // UTIL_URL_PARSER_
