# Makefile
CXX = g++
CXXFLAGS = -I./include -std=c++17 -Wall
GTEST_LIBS = -lgtest -lgtest_main -pthread

TEST_SRC = tests/test_student_code.cpp
TEST_BIN = bin/test_student_code

all: $(TEST_BIN)

$(TEST_BIN): $(TEST_SRC)
	mkdir -p bin
	$(CXX) $(CXXFLAGS) $(TEST_SRC) $(GTEST_LIBS) -o $(TEST_BIN)

test: $(TEST_BIN)
	./$(TEST_BIN)
