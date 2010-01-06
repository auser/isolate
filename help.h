/**
 * $Id: help.h 12 2010-01-05 11:19:02Z ioerror $
 */

const string HELP_MESSAGE =
"Usage: isolate [-hTvMS] [-D path] [-a bytes] [-c bytes] [-d bytes] [-f files]\n"
"               [-m bytes] [-n bytes] [-p processes] [-r bytes] [-s bytes]\n"
"               [-C path] [-i img] [-e env_string]\n"
"               [-t seconds] [-z bytes] program [program-arguments...]\n"
"  OPTIONS\n"
" -h            show this message"
" -T            set the cookie as trusted for X11 authentication"
" -v            turn on verbose printing"
" -M            use mdmfs utility to mount an in-memory filesystem using the md(4) driver"
" -S            save the isolation path (do not remove it after the isolation has ended)"
" -D [path]     append paths to copy and load files"
" -a [bytes]    limit the address space to [bytes]"
" -c [bytes]    limit the maximum size core file the process can create to [bytes]"
" -d [bytes]    limit the maximum size of data memory for the process to [bytes]"
" -f [num]      limit the number of open files the process can have open to [num]"
" -m [bytes]    limit the maximum amount of memory that can be in physical memory to [bytes]"
" -n [bytes]    limit the maximum size in bytes of a socket buffer this process can create to [bytes]"
" -p [num]      limit the process to a maximum of [num] process at once"
" -r [bytes]    limit the maximum resident set size to [bytes]"
" -s [bytes]    limit the maximum size of the stack to [bytes]"
" -C [path]     store the confinement path to [path]"
" -i [img]      mount the loopback [img] file to /home"
" -e [str]      set an environment variable using a string of the format PARAM=value"
" -t [seconds]  set the maximum amount of CPU time the process can consume"
" -z [bytes]    limit the maximum size in bytes of a file that may be created"
;

