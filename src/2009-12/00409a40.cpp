// from server: 93% by atomic.potato
struct S
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int value_f;
    int g;

    void f();
};

extern "C" void __cdecl Next();

void S::f()
{
    a = 0x99fdfc;
    b = 0x99fdf4;
    e = 0x99fde8;
    value_f = 0x99fde0;
    Next();
}
