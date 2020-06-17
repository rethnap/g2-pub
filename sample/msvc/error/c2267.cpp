// C2267.cpp
static int func2();   // OK
int main() {
    static int func1();   // C2267
}
