// from server: 93% by atomic.potato
struct S
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;

    void f0();
};

extern "C" void __cdecl target_tail();

void S::f0()
{
    a = 0x9d0464;
    b = 0x9d0458;
    e = 0x9d044c;
    f = 0x9d0444;
    target_tail();
}
