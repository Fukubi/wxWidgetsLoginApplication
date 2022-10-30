CC = g++
LD_FLAGS = -o loginApplicationWxWidgets
CXX_FLAGS = -Wall `wx-config --cxxflags`
LD_LIBS = `wx-config --libs` -I./includes/

CXX_FLAGS_WINDOWS = -Wall `wx-config-static --cxxflags`
LD_LIBS_WINDOWS = `wx-config-static --libs` -I./includes/

SOURCES = *.cpp

all: $(SOURCES)
	$(CC) $(LD_FLAGS) $^ $(CXX_FLAGS) $(LD_LIBS)

windows: $(SOURCES)
	$(CC) $(LD_FLAGS) $^ -static $(CXX_FLAGS_WINDOWS) $(LD_LIBS_WINDOWS)

clean:
	rm *.o loginApplicationWxWidgets*