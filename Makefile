obj-m += avatar.o


INC_DIR := $(PWD)/include

# TO BE ADDED :- src/cpu/vmx.o src/memory/ept.o src/io/io_emulation.o
avatar-objs := src/avatar.o src/cpu/features.o

KDIR := /lib/modules/$(shell uname -r)/build

all:
	$(MAKE) -C $(KDIR) M=$(PWD) EXTRA_CFLAGS=-I$(INC_DIR) modules

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean
