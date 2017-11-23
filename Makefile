CC=gcc
CFLAGS=-Wall

UTILS=vctrl/utils/
VCOMMANDS=vctrl/vcommands/
ROOT=vctrl/
OUTPUT=vcontrol
CFILES=*.c

all:
	$(CC) $(CFLAGS) $(ROOT)$(CFILES) $(UTILS)$(CFILES) $(VCOMMANDS)$(CFILES) -o $(OUTPUT)

clean:
	clear
	rm $(OUTPUT)
	$(CC) $(CFLAGS) $(ROOT)$(CFILES) $(UTILS)$(CFILES) $(VCOMMANDS)$(CFILES) -o $(OUTPUT)

windows:
	clear
	rm vcontrol.exe vcontrol.exe.stackdump
	$(CC) $(CFLAGS) $(ROOT)$(CFILES) $(UTILS)$(CFILES) $(VCOMMANDS)$(CFILES) -o $(OUTPUT)