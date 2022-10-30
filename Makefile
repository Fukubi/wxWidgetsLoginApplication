CC = g++
LD_FLAGS = -o loginApplicationWxWidgets
CXX_FLAGS = -Wall `wx-config --cxxflags`
LD_LIBS = `wx-config --libs` -I./includes/
SOURCES = *.cpp

all: $(SOURCES)
	$(CC) $(LD_FLAGS) $^ $(CXX_FLAGS) $(LD_LIBS)

clean:
	rm *.o loginApplicationWxWidgets*