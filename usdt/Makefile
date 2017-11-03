# Build variables
INCDIRS = -I${BUILDDIR}
SRCDIR = src
BUILDDIR = build
DTRACE = /usr/sbin/dtrace

CC=clang
XFLAGS=-Wall -Werror
CFLAGS = ${INCDIRS} ${OFLAGS} ${XFLAGS}


PROVIDER=usdt

PROG = usdt_ex

all:$(BUILDDIR)/$(PROG) | $(BUILD_DIR)

$(BUILDDIR)/$(PROG): $(PROVIDER)_provider.o
	$(CC) $(CFLAGS) $(XFLAGS) -o $(BUILDDIR)/$(PROG) $(BUILDDIR)/$(PROVIDER)_provider.o $(BUILDDIR)/$(PROG).o

$(PROVIDER)_provider.o: $(PROG).o
	$(DTRACE) -xnolibs -G -o $(BUILDDIR)/$(PROVIDER)_provider.o -s $(SRCDIR)/$(PROVIDER)_provider.d $(BUILDDIR)/$(PROG).o

$(PROG).o: header
	$(CC) $(CFLAGS) $(XFLAGS) -o $(BUILDDIR)/$(PROG).o $(SRCDIR)/$(PROG).c

header: dirs
	$(DTRACE) -xnolibs -h -o $(BUILDDIR)/$(PROVIDER)_provider.h -s $(SRCDIR)/$(PROVIDER)_provider.d

clean:
	-rm -rf $(BUILDDIR)

dirs:
	mkdir -p $(BUILDDIR)
