Repro for Issue #4698
=======================

Issue link: [Issue #4698](https://github.com/microsoft/vscode-cmake-tools/issues/4698)

Problem
-------

This project:

 * Has a CMakePresets.json
 
 * Builds using the Ninja generator
 
 * Compiles using the `clang-cl` compiler from Visual Studio 2022
 
I would like to be able to configure it so that it always uses the version of
`clang-cl` from Visual Studio 2022. However when Visual Studio 2026 is
installed, it picks up that version and uses it instead. This is problematic for
code that does not yet compile with the newer compiler and for reproducing older
builds.