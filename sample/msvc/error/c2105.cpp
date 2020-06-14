// C2105.cpp
int main() {
   unsigned char * p1 = nullptr;
   unsigned int * p2 = (unsigned int *)p1;
   p2++;

   unsigned int * p = nullptr;
   p++;   // ok

   p2 = (unsigned int *)p1;
   ((unsigned int *)p1)++;   // C2105
}
