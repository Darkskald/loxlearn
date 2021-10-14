CC=gcc
BUILDDIR=build
TARGET=loxlearn
SOURCES := $(wildcard *.c */*.c)

$(TARGET): entry.c hashmap/hashmap.c
	echo Build using $(SOURCES) as sources.
	$(CC) -o $(BUILDDIR)/$(TARGET) $(SOURCES)

clean:
	rm $(BUILDDIR)/$(TARGET)