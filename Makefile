WORKING_DIR = $(shell pwd)

CC= gcc
CFLAG = -Wall -std=99

OBJS = \
	   $(WORKING_DIR)/gtanm/gtanm.o \
	   $(WORKING_DIR)/totype/totype.o

deps := $(OBJS:%.o=%.o.d)

gtanm/%.o: gtanm/%.c
	$(CC) $(CFLAGE) -o $@ -MMD -MF $@.d -c $<

totype/%.o: totype/%.c
	$(CC) $(CFLAGE) -o $@ -MMD -MF $@.d -c $<

$(EXEC): $(OBJS)
	@ar -cvq libspiral.a $@

build: $(EXEC)
	@echo "Spiral"
