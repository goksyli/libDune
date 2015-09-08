Since we are running it in archlinux and archlinux doesn't export SystemMap or address of syscall_table at all,
we add some util to find out them. Exactly, we just need do_fork and syscall_table so far.

1) Find syscall_table
in the shell, type: 
cd syscalltable
make

after successfully built, we insert the module we just have created.

insmod interceptor.ko
dmesg | tail -40

and we can find the address of syscall_table.

2) Create SystemMap
even if we can retrieve the SystemMap, it is only trimmed version, not all symboll in it.

sudo cp /proc/kallsyms /boot/System.map-`uname -r`
