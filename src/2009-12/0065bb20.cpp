// from server: 93% by atomic.potato
struct S
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int value;
    int g;
    void f();
};

extern "C" void __cdecl target();

void S::f()
{
    a = 0x9cdb1c;
    b = 0x9cdb14;
    e = 0x9cdb08;
    value = 0x9cdb00;
    target();
}
