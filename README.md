# Login Application

A login application created with wxWidgets and C++ for testing purposes, on Linux it is, by default, dinamically compiled and on Windows is statically compiled

# Compilation Instructions

## Linux
First install the needed wxWidgets libraries for your distribution, on Arch you can use:

```
pacman -Syu
pacman -S wxwidgets-common wxwidgets-gtk3 base-devel
```

And after that, just compile using
```
make
```

## Windows
On Windows it is recommended to use the MSys2 for compilation, you can see how to install the msys2 [clicking here](https://www.msys2.org/), after following the installation steps open the msys2 terminal and install the dependencies for wxWidgets, you can use the GTK3 ou the MSW one, here we will show only the MSW way:

### For the MSW compilation
```
pacman -S mingw-w64-toolchain base-devel mingw-w64-x86_64-wxwidgets3.2-msw-libs mingw-w64-x86_64-wxwidgets3.2-msw
```

And after that just compile it using
```
make windows
```