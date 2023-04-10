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
