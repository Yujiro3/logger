PROGRAM = logger
CC = g++
CFLAGS = -Wall
SRCS = main.cpp log_logger.cpp

all:
	$(CC) $(CFLAGS) -o $(PROGRAM) $(SRCS)

clean:
	rm $(PROGRAM)
