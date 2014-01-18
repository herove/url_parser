cc_library(
  name = 'url_parser',
  srcs = [
    'url_parser.cc',
  ],
)

cc_test(
  name = 'url_parser_test',
  srcs = [
    'url_parser_test.cc',
  ],
  deps = [
    '//base:base',
    ':url_parser',
  ],
  # dynamic_link = False
)