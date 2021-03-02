#include "shell.h"
#include "lexer.h"

ModuleRegistry GModuleRegistry;

void loop() {
  for(;;)
  {
    std::cout << PROMPT << ' ';

    readln();
  }
}

void readln() {
  std::string t;
  std::cin >> t;
  lexer::parseln(t);
}