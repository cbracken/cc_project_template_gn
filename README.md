ProjectTemplate
===============

A [gn](https://gn.googlesource.com/gn),
[ninja](https://github.com/ninja-build/ninja), and
[googletest](https://github.com/google/googletest)-based C++ project template.


Prerequisites
-------------

To build, you'll need [gn](https://gn.googlesource.com/gn),
[ninja](https://github.com/ninja-build/ninja), and a clang build toolchain
installed on your system.


Obtaining the source
--------------------

First, clone the repo. Then, initialise and fetch git submodules:

    # Initialise local configuration file.
    git submodule init

    # Fetch data from the buildroot submodule.
    git submodule update


Updating the gn buildroot
-------------------------

To update the git submodules to a newer commit, simply run:

    git submodule update --remote


Building and running
--------------------

First, generate the ninja build files under the `out` directory:

    gn gen --args=is_debug=true out/debug
    gn gen --args=is_debug=false out/release


### Unit tests

To build and run the unit tests, run:

    ninja -C out/debug src:foo_tests
    ./out/debug/foo_tests


### Executable binary

To build and run the binary:

    ninja -C out/debug src:foo
    ./out/debug/main
