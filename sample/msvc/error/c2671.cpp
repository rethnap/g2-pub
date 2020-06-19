// C2671.cpp
struct S {
   static S* const func() { return this; }  // C2671
};
