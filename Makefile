CC=gcc
CFLAGS=-Wall

UTILS=vctrl/utils/
VCOMMANDS=vctrl/vcommands/
ROOT=vctrl/
OUTPUT=vctrl

all:
	$(CC) $(CFLAGS) $(ROOT)*.c $(UTILS)*.c -o $(OUTPUT)