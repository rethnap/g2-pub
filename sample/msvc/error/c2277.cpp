// C2277.cpp
class A {
public:
   A();
};
(*pctor)() = &A::A;   // C2277
