// C2317.cpp
// compile with: /EHsc
// #include <eh.h>
int main() {
   try {
      throw "throw an exception";
   }
   // C2317, no catch handler
}
