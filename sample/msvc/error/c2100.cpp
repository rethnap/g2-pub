// C2100.cpp
int main() {
   int r = 0, *s = nullptr;
   s = &r;
   *r = 200;   // C2100
   *s = 200;   // OK
}
