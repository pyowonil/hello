cc_library(
        name = "libhello",
        srcs = ["hello.cc"],
        hdrs = ["hello.h"],
        visibility = ["//visibility:public"],
)

cc_test(
        name = "test",
        srcs = ["hello_test.cc"],
        deps = [
             "//:libhello",
             "@googletest//:gtest",
             "@googletest//:gtest_main",
        ],
)