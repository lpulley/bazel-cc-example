cc_library(
    name = "fooComponent",
    srcs = ["fooComponent.cpp"],
    hdrs = ["fooComponent.h"],
)

cc_binary(
    name = "foo",
    srcs = ["foo.cpp"],
    deps = [
        ":fooComponent",
        "//libbar:barHelper",
    ],
)
