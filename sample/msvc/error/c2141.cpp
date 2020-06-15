// C2141.cpp
// processor: IPF
extern "C++"
{
void* operator new(uint64 count) noexcept;
void* operator new [] (uint64 count) noexcept;

void operator delete(void* ptr);
void operator delete [] (void* ptr);
}

class A {
   short m_n;
};

int main()
{
   A* pA = nullptr;
   pA = new  A[0x8000000000000001];   // C2141

   A* pA2 = nullptr;
   pA2 = new A[0x80000000000000F];   // OK
}
