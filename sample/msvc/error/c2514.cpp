// C2514.cpp
// compile with: /c
void* operator new(unsigned long count) noexcept;
void* operator new [] (unsigned long count) noexcept;

class f;

class g {
public:
    g (int x) {}
};

class fmaker {
   f *func1() {
      return new f(2);   // C2514
   }

   g *func2() {
      return new g(2);   // OK
   }
};
