# Mobile Cross Platform Library

### Motivation
When building a modern product, it is common to have a client for the web, iOS and Android. This is a repository to experiment with developing a cross-platform library (single codebase) that could be used by apps written for iOS, Android and possible web clients. This will eliminate business rules and logic that needs to be implemented across multiple clients.

## Initial Research

#### Android
Android has the JNI and NDK for integrating C++ code into an Android application. The JNI helps bridge Java and C++ while the NDK provides a `ndk-build` script, which builds the app's native code dependencies and contains information about the target architectures, compiler flags, source files, etc.

![Android Diagram](https://github.com/MattMorgis/CrossPlatformLibTest/blob/master/docs/screenshots/android_cpp_diagram.png?raw=true)


#### iOS
iOS compiles native C code by default. There is an `Objective-C-C++` bridge that allows Objective-C and C++ to co-exist in the same file by simply changing the extension from `.m` to `.mm` (wow!).
![iOS Diagram](https://github.com/MattMorgis/CrossPlatformLibTest/blob/master/docs/screenshots/ios_cpp_diagram.png?raw=true)

## Resources
* [djinni](https://github.com/dropbox/djinni) - tool for generating cross-language type declarations and interface bindings and is designed to connect C++ with either Java or Objective-C.
