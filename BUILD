package(default_visibility = ["__subpackages__"])

config_setting(
    name = "osx",
    constraint_values = [
        "@bazel_tools//platforms:osx",
    ],
)

config_setting(
    name = "windows",
    values = {"cpu": "x64_windows"},
)

config_setting(
    name = "linux",
    constraint_values = ["@bazel_tools//platforms:linux"],
)
