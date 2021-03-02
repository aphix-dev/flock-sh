#include "shell.h"
#include "lexer.h"

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