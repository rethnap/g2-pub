// C2619.cpp
int main() {
   union { static int j; };  // C2619
   union { int j; };  // OK
}
