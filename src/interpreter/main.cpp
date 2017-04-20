typedef struct EvaluatorWord {
  char b7;
  char b6;
  char b5;
  char b4;
  char b3;
  char b2;
  char b1;
  char b0;
} EvaluatorWord;

typedef struct Mark {
  char* label;
  size_t mark;
} Mark;

class EvaluationEnvironment{
  EvaluationWord stack[1000000];
  size_t stackHeight;
};

class EvaluatorState{
  Mark marks[1000000];
  size_t currentPosition;
};

class EvaluatorProgram{
  char* bytecode;
  size_t len;
};

class EvaluationFrame {
  
};
  
class Interpreter{
  // singleton
  
};



int main(){
  
}
