obj-m:=module_test.o

CURRENT_PATH:=$(shell pwd)
KERNEL_VERSION:=$(shell uname -r)
KERNEL_PATH:=/usr/src/linux-headers-$(KERNEL_VERSION)

all:
	make -C $(KERNEL_PATH) M=$(CURRENT_PATH) modules
clean:
	make -C $(KERNEL_PATH) M=$(CURRENT_PATH) clean
