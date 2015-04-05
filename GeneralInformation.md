The wiki page list can be found [here](http://code.google.com/p/dingoo-sdk/wiki).

# Introduction #

Dingoo\_SDK is meant to serve as a multi-platform SDK for the [Dingoo](http://en.wikipedia.org/wiki/Dingoo) A320's native operating system which is a variant of [µC/OS-II](http://en.wikipedia.org/wiki/MicroC/OS-II) (uCOS II). The SDK can also be used  to build for [Gemei X760+](http://boards.dingoonity.org/dingoo-development/how-to-make-a-gemei-x760-version-of-your-game/) too.

For a list of games and applications built using some variant of the SDK, see the [DevelopedApplications](DevelopedApplications.md) wiki page.

## Requirements ##

### Linux ###
  * [Ingenic toolchain](http://code.google.com/p/dingoo-sdk/downloads/detail?name=mipsel-4.1.2-nopic.tar.bz2&can=2&q=) [mirror1](http://flatmush.juliusparishy.com/a320/toolchain/mipsel-4.1.2-nopic.tar.bz2) ([mirror](http://www.mediafire.com/download.php?9121dr9s0rqzcq5))
  * [Doxygen 1.5.8](http://www.stack.nl/~dimitri/doxygen/) (for building the documentation)
  * GNU make
  * cc (i.e. native compiler, ideally gcc) needed to build elf2app and bin2h. NOTE not needed if you extract http://code.google.com/p/dingoo-sdk/downloads/detail?name=linux_x86_elf2app.tar.bz2 after installation

Linux mips compiler and dingoo native SDK need ~205Mb of disk space.

### Windows ###
  * [CYGWIN (Latest version, though any version should work)](http://www.cygwin.com/setup.exe)
    * GNU make
  * [Doxygen 1.5.8](http://www.stack.nl/~dimitri/doxygen/) (for building the documentation)
  * [Windows MIPSEL Compiler](http://code.google.com/p/dingoo-sdk/downloads/detail?name=mipsel-gcc4.1-cygwin-nopic.tar.bz2&can=2&q=) [mirror1](http://flatmush.juliusparishy.com/a320/toolchain/mipsel-gcc4.1-cygwin-nopic.tar.bz2) ([mirror2](http://www.mediafire.com/download.php?zznd5ijlyiz))

## Getting Help ##

### Read Me ###
The [ReadMe.txt](http://code.google.com/p/dingoo-sdk/source/browse/trunk/dingoo_sdk/ReadMe.txt) file included in the highest level of the $DINGOO\_SDK directory is the first place you should check for help. There are step-by-step installation instructions there for both Windows and Linux/UNIX build environments.
### Wiki ###
The wiki is currently a work-in-progress and may not contain much helpful information at the moment, but we are actively working on it.

### Documentation ###
Use Doxygen to build HTML documentation in the $DINGOO\_SDK/doc directory. See the [ReadMe.txt](http://code.google.com/p/dingoo-sdk/source/browse/trunk/dingoo_sdk/ReadMe.txt) for instructions.

Also see http://wakaba.c3.cx/w/dingoo_coding

### Issues ###
The issues tracker is the best place to post bugs or other unusual errors that aren't the result of a failed or incorrect installation (see the [ReadMe.txt](http://code.google.com/p/dingoo-sdk/source/browse/trunk/dingoo_sdk/ReadMe.txt) file). We are also open to feature requests and suggestions as time allows.

### Chat ###
  * IRC:
    * #dingoo-a320 on irc.freenode.net [web based IRC client to  #dingoo-a320](http://webchat.freenode.net/?channels=dingoo-a320)
    * #dingoonity on irc.freenode.net [web based IRC client to  #dingoonity](http://webchat.freenode.net/?channels=dingoonity)
  * Forums:
    * [Dingoonity](http://boards.dingoonity.org/index.php)
    * [gp32x](http://www.gp32x.com/board/index.php?/forum/73-dingoo-a320/)
  * Email:
    * Developers emails can be found in the project owners/contributors list [here](http://code.google.com/p/dingoo-sdk/people/list).