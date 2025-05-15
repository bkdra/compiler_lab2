LEX = flex
CC = gcc
TARGET = B113040047
LEX_SRC = $(TARGET).l
C_SRC = lex.yy.c
CFLAGS = -lfl

all: $(TARGET)

$(TARGET): $(LEX_SRC)
	$(LEX) $(LEX_SRC)
	$(CC) $(C_SRC) -o $(TARGET) $(CFLAGS)

clean:
	rm -f $(TARGET) $(C_SRC)
