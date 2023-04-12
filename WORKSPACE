load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
  name = "googletest",
  strip_prefix = "googletest-12a5852e451baabc79c63a86c634912c563d57bc",
  urls = ["https://github.com/google/googletest/archive/12a5852e451baabc79c63a86c634912c563d57bc.zip"],
)

http_archive(
    name = "hedron_compile_commands",
    sha256 = "be914b31eaf772ad99455b749e88b2326b45b4337d803c85fd211be001c951d6",
    strip_prefix = "bazel-compile-commands-extractor-26cf0a8a2d117ec2f92e01ed1b7ece4dd8940fcd",
    url = "https://github.com/hedronvision/bazel-compile-commands-extractor/archive/26cf0a8a2d117ec2f92e01ed1b7ece4dd8940fcd.tar.gz",
)

load("@hedron_compile_commands//:workspace_setup.bzl", "hedron_compile_commands_setup")

hedron_compile_commands_setup()
