#include "base/flags.h"
#include "base/logging.h"
#include "base/string_util.h"
#include "third_party/gtest/gtest.h"

#include "util/url_parser/url_parser.h"

namespace util {

using namespace std;

TEST(UrlParserTest, result) {
  string url = "http://first.xxx.com/test/index.html";
  UrlParser parser(url.c_str());

  EXPECT_EQ(parser.GetScheme(), "http");
  EXPECT_EQ(parser.GetHost(), "first.xxx.com");
  EXPECT_EQ(parser.GetPort(), "");
  EXPECT_EQ(parser.GetPath(), "/test/index.html");
}
} // namespace util
