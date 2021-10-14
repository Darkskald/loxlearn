CC=gcc
BUILDDIR=build
TARGET=loxlearn

$(TARGET): entry.c hashmap/hashmap.c
	$(CC) -o $(BUILDDIR)/$(TARGET) entry.c hashmap/hashmap.c