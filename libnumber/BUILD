cc_library(
    name = "containers/numberContainer",
    hdrs = ["containers/numberContainer.h"],
)

cc_library(
    name = "numberCreator",
    srcs = ["numberCreator.cpp"],
    hdrs = ["numberCreator.h"],
    deps = [
        "containers/numberContainer",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "numberHelper",
    srcs = ["numberHelper.cpp"],
    hdrs = ["numberHelper.h"],
    deps = [
        "containers/numberContainer",
    ],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "test_numberCreator",
    size = "small",
    srcs = ["test_numberCreator.cpp"],
    deps = [
        ":numberCreator",
        "@googletest//:gtest_main",
    ],
)

cc_test(
    name = "test_numberHelper",
    size = "small",
    srcs = ["test_numberHelper.cpp"],
    deps = [
        ":numberHelper",
        "@googletest//:gtest_main",
    ],
)
