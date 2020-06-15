// C2142.c
// compile with: /Za /c
extern "C" {
void func();
void func( int, ... );   // C2142
void func2( int, ... );   // OK
}
