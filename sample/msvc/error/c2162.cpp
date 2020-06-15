// C2162.cpp
// compile with: /c
extern "C" int printf(const char* format, ...);
#define UNUS
#define print(a) printf(b)   // OK
#define print(a) printf(#b)    // C2162
