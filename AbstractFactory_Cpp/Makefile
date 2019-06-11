#############################
CC=gcc
CXX=g++
RM=rm -f

SRCS := $(wildcard *.cpp ./factory/*.cpp ./product/*.cpp)
OBJS := $(SRCS:%.cpp=%.o)


default: out clean	

out: $(OBJS) 
	$(CXX) -o out $(OBJS)

.PHONY : clean
clean:
	$(RM) $(OBJS)
