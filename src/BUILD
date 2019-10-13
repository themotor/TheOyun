licenses(["notice"])

package(default_visibility = ["//visibility:private"])

cc_binary(
    name = "theoyun",
    srcs = ["main.cpp"],
    deps = [
        "@TheMotor//motor:engine",
        "@glog//:glog",
        "@com_github_gflags_gflags//:gflags",
    ],
    linkopts = select({
        "//:windows": [
            "-DEFAULTLIB:user32",
            "-DEFAULTLIB:gdi32",
            "-DEFAULTLIB:winmm",
            "-DEFAULTLIB:imm32",
            "-DEFAULTLIB:ole32",
            "-DEFAULTLIB:oleaut32",
            "-DEFAULTLIB:version",
            "-DEFAULTLIB:uuid",
            "-DEFAULTLIB:shell32",
            "-DEFAULTLIB:advapi32",
            "-DEFAULTLIB:hid",
            "-DEFAULTLIB:setupapi",
            "-DEFAULTLIB:opengl32",
        ],
        "//:linux": [
            "-lX11",
            "-pthread",
            "-ldl",
            "-lGL",
        ],
    }),
    data = glob(["shaders/**"])
)
