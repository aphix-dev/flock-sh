# $@ => name of the file to be made
# $? => names of the changed dependents
# $< => names of the file that caused the action
# $* the prefix shared by target and dependent files
# CC => program used to compile c programs, default is cc
# CXX => program used to compile c++ programs, default is C++
# CXXFLAGS => extra flags for the c compiler
# CPPFLAGS => extra flags for c preprocessor/programs

build: main.cpp init.cpp init.h shell.cpp shell.h lexer.cpp lexer.h
	$(CXX) $(CXXFLAGS) $? $(LDFLAGS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) -c $<