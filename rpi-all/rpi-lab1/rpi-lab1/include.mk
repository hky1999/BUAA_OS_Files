CROSS_COMPILE   := /usr/local/gcc-linaro-7.2.1-2017.11-x86_64_aarch64-elf/bin/aarch64-elf-
CC              := $(CROSS_COMPILE)gcc
CFLAGS          := -Wall -ffreestanding
LD              := $(CROSS_COMPILE)ld
