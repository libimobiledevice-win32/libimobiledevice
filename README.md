# libimobiledevice-win32

[![Build status](https://ci.appveyor.com/api/projects/status/7vu1nua0h44on0xv/branch/msvc-master?svg=true)](https://ci.appveyor.com/project/qmfrederik/libimobiledevice/branch/msvc-master)

Provides a native Windows build (using the Visual C++ compiler) of [libimobiledevice](http://libimobiledevice.org).

## What's up with the branches

* *msvc-1.2.0*: The latest released version (1.2.0) of libimobiledevice, with fixes which enable compilation with Visual C++
* *msvc-master*: Mirrors the upstream libimobiledevice master branch, with fixes which enable compilation with Visual C++
* *gcc-1.2.-msvc-*: Changes which enable Visual C++ compatibility, but without the Visual Studio files. Used for pull requests
	back into the main libimobiledevice repository
* *fixes/*: Various fixes, used for pull requests back into the main libimobiledevice repository

## Where to report issues

For general questions about libimobiledevice, see http://github.com/libimobiledevice/libimobiledevice.
For questions specific to Visual C++, feel free to use the GitHub issue tracker

## How to get the latest binaries

The binaries for libimobiledevice and its dependencies (libplist and libusbmuxd) are available as 
[NuGet CoApp packages](https://www.nuget.org/packages?q=Tags%3A%22libimobiledevice%22).

A .NET binding is available as the [imobiledevice-net](https://www.nuget.org/packages/imobiledevice-net/) NuGet package.