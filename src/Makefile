SRC = string.c test.c
OBJ = $(SRC:.c=.o)
BINDIR = /usr/local/bin
CC = cc
STRIP = strip
EXE = tester
CFLAGS = -pedantic -Wall -O2


.PHONY: all help strip install clean

default: all

all: $(EXE)

help:
	@echo "To compile, type:"
	@echo ""
	@echo "make [target]"
	@echo ""
	@echo "Where target is one of the following:"
	@echo ""
	@echo "all:                  Builds from scratch."
	@echo "edit:                 Recompiles each outdated object file."
	@echo "[An object file]:     Recompiles the object file if it's outdated."
	@echo "help:                 Prints this message."
	@echo ""
	@echo "If no target is given, it will use \"all\"."

strip:
	$(STRIP) $(EXE)

install: strip
	-mkdir -p -m 755 $(BINDIR)
	-cp $(EXE) $(BINDIR)

clean:
	rm -f $(EXE) $(OBJ)

$(EXE): $(OBJ)
	+$(CC) $(CFLAGS) -o $@ $(OBJ)
