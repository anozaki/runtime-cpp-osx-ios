# Runtime Compiled C++ for Apple

Runtime Compiled C++ reloading for SDL based application for macOS and iOS Simulator to speed up development time by
treating C++ code like a script to hot reload while the application is running.

Resource Reference: [Runtime Compiled C++](https://github.com/RuntimeCompiledCPlusPlus/RuntimeCompiledCPlusPlus)

## Goal

Goal of this repository is to investigate if Runtime Compiled C++ is feasible on iOS simulator/device. On the actual
device we will need to investigate if this technique will work under iOS sandboxing.

For macOS, the goal is to have a similar setup to allow the code to be tested under macOS in a similar manner.

## Difference from [Runtime Compiled C++](https://github.com/RuntimeCompiledCPlusPlus/RuntimeCompiledCPlusPlus)

The main difference is that the file monitor/compilation process is externalized from the application. This is done
in this way to allow us to integrate this technique for iOS and possibly Android. Because on a mobile device the source
that is getting modified does not reside on the actual device, integrated solution wuld not make since. There for the
decision was to use a tooling style implementation.

## Components

### RuntimeCompiler

Runtime compiler watches the file system and compiles the cpp files for the specified architecture.

### TestAppIOS

### TestAppMac

## Other Uses

Besides development, you could use this technique to implement c/c++ based plugin system described by Stefan Reinalter
at his (blog)[https://blog.molecular-matters.com/2014/05/10/using-runtime-compiled-c-code-as-a-scripting-language-under-the-hood/]

