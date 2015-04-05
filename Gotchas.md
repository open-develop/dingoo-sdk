# stdio printf,... #

Code that makes use of printf will build.
However at runtime it appears to be a NOOP, you do not get the expected output. The dingoo SDK appears to make fprintf to the serial port ignoring the FILE argument! printf does the same thing (which sort of makes sense). To read the serial port you need to make a hardware modification! For more information see:

  * http://www.gp32x.com/board/index.php?/topic/47628-dingoo-serial-console-access-mod/
  * http://boards.dingoonity.org/dingoo-hardware-general/an-(old)-dingoo-hardware-mod-to-make-a-serial-connection-possible/
  * http://wakaba.c3.cx/w/dingoo_coding (see under "Accessing the filesystem")

# Improving performance #

A list of performance related URLs:

  * http://www.gp32x.com/board/index.php?/topic/28490-advanced-optimization-via-profiling-with-gcc4/page__st__15