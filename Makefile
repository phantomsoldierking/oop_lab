# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -std=c++11

# List of source files
SRCS = main.cpp device.cpp sensor.cpp user.cpp shms.cpp mode.cpp alertsystem.cpp auth.cpp

# List of object files
OBJS = $(SRCS:.cpp=.o)

# Output executable
TARGET = shms

# Default target to build the program
all: $(TARGET)

# Rule to build the target
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Rule to compile source files into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJS) $(TARGET)
