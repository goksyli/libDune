CC	= gcc
CFLAGS	= -Wall -g -MD -O2 -I ../

all: hello test timetest test_sandbox vcpu_run

hello: hello.o ../libdune/libdune.a
	$(CC) $(CFLAGS) $(<) -o hello -L ../libdune -ldune -lpthread

timetest: timetest.o ../libdune/libdune.a
	$(CC) $(CFLAGS) $(<) -o $(@) -L ../libdune -ldune -lpthread

test: test.o ../libdune/libdune.a
	$(CC) $(CFLAGS) $(<) -o test -L ../libdune -ldune -lpthread

test_sandbox: test_sandbox.o
	$(CC) $(CFLAGS) -o $(@) $(<) -lpthread

vcpu_run: vcpu_run.o ../libdune/libdune.a
	$(CC) $(CFLAGS) $(<) -o $(@) -L ../libdune -ldune -lpthread

clean:
	rm -f *.o test *.d hello test test_sandbox vcpu_run

-include *.d
