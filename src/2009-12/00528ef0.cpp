// from server: 93% by atomic.potato
struct S
{
    int a;
    int b;
    int c;
    int d;
    void f();
};

extern "C" void __cdecl sub_637b00();

void S::f()
{
    a = 0x9bc094;
    b = 0x9bc088;
    c = 0x9bc07c;
    d = 0x9bc074;
    sub_637b00();
}
