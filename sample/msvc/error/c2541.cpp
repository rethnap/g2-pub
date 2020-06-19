// C2541.cpp
void* operator new(unsigned long count) noexcept;

void operator delete(void* ptr);

int main() {
   int i;
   delete i;   // C2541 i not a pointer

   // OK
   int *ip = new int;
   delete ip;
}
