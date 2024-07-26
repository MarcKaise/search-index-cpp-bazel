package(default_visibility = ["//visibility:public"])

cc_library(
    name = "libsi",
    srcs = ["search_index.cc"],
    hdrs = ["search_index.h"],
    deps = [],
)

cc_test(
    name = "libsi_test",
    size = "small",
    srcs = ["search_index_unittest.cc"],
    deps = [
        ":libsi",
        "@googletest//:gtest",
        "@googletest//:gtest_main",
    ],
)