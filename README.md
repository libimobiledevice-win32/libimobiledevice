# libimobiledevice-win32

[![Build status](https://ci.appveyor.com/api/projects/status/7vu1nua0h44on0xv/branch/msvc-master?svg=true)](https://ci.appveyor.com/project/qmfrederik/libimobiledevice/branch/msvc-master)
[![Build Status](https://travis-ci.org/libimobiledevice-win32/libimobiledevice.svg?branch=msvc-master)](https://travis-ci.org/libimobiledevice-win32/libimobiledevice)

Provides a native Windows build (using the Visual C++ compiler) of [libimobiledevice](http://libimobiledevice.org), as well as continuous integration (CI) builds of libimobiledevice for Ubuntu, CentOS and RedHat Linux and macOS.

## What's up with the branches

* *msvc-master*: Mirrors the upstream libimobiledevice master branch, with fixes which enable compilation with Visual C++
* *msvc-1.2.0*: The latest released version (1.2.0) of libimobiledevice, with fixes which enable compilation with Visual C++
* *gcc-1.2.-msvc-*: Changes which enable Visual C++ compatibility, but without the Visual Studio files. Used for pull requests
	back into the main libimobiledevice repository
* *fixes/*: Various fixes, used for pull requests back into the main libimobiledevice repository

## Where to report issues

For general questions about libimobiledevice, see http://github.com/libimobiledevice/libimobiledevice.
For questions specific to Visual C++, feel free to use the GitHub issue tracker

## How to get the latest binaries
The binaries for libimobiledevice are available as:
* [NuGet CoApp packages](https://www.nuget.org/packages/libimobiledevice/) for Windows,
* [apt-get packages](https://launchpad.net/~quamotion/+archive/ubuntu/ppa) for Ubuntu,
* [yum packages](https://build.opensuse.org/package/show/home:qmfrederik/libimobiledevice) for CentOS and RedHat.

For Ubuntu Linux, run the following commands as root:

```
sudo add-apt-repository ppa:quamotion/ppa
sudo apt-get update
apt-get install libimobiledevice
```

For RedHat Linux, run the following commands as root:

```
cd /etc/yum.repos.d/
wget http://download.opensuse.org/repositories/home:qmfrederik/RHEL_7/home:qmfrederik.repo
yum install libimobiledevice
```

For CentOS Linux, run the following commands as root:

```
cd /etc/yum.repos.d/
wget http://download.opensuse.org/repositories/home:qmfrederik/CentOS_7/home:qmfrederik.repo
yum install libimobiledevice
```

## .NET Bindings
A .NET binding is available as the [imobiledevice-net](https://www.nuget.org/packages/imobiledevice-net/) NuGet package.