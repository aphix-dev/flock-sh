# $@ => name of the file to be made
# $? => names of the changed dependents
# $< => names of the file that caused the action
# $* the prefix shared by target and dependent files
# CC => program used to compile c programs, default is cc
# CXX => program used to compile c++ programs, default is C++
# CXXFLAGS => extra flags for the c compiler
# CPPFLAGS => extra flags for c preprocessor/programs

build: main.cpp init.cpp shell.cpp lexer.cpp utils.cpp parser.cpp modules/module.cpp modules/module_registry.cpp modules/custom/fsh.cpp
	$(CXX) $(CXXFLAGS) $? $(LDFLAGS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) -c $<