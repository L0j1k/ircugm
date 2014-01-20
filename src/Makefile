#
# Makefile -- ircugm project
# @author L0j1k (l0j1k@l0j1k.com)
# @version 0.0.1a
# @created 23may2013
# @license BSD3
# @modified 17jan2014

CC=gcc
CFLAGS=-I.
ODIR=../build
BDIR=../bin

DEPS = ircugm.h irc.h graphmap.h output.h
OBJ = ircugm.cpp irc.cpp graphmap.cpp output.cpp

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

ircugm: $(OBJ)
	$(CC) -o $(BDIR)/$@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o $(BDIR)/*~
