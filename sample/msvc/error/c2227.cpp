// C2227.cpp
int *pInt;
struct S {
public:
    int member;
} s;
S* pS =&s;

int main() {
   pInt->member = 0;   // C2227 pInt points to an int
   pS->member = 0;   // OK
}
