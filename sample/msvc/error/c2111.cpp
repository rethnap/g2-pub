// C2111.cpp
int main() {
   int *a = nullptr, *pa = nullptr, b = 0;
   double d = 0.00;

   a = pa + d;   // C2111
   a = pa + b;   // OK
}
