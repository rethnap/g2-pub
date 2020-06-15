// C2190.c
// compile with: /Za /c
extern "C" {
void func( int, float );
void func( int  );   // C2190, different parameter list
void func2( int  );   // OK
}
