// from server: 77% by atomic.potato
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

extern "C" void __cdecl target(S *);

void S::f()
{
    a = 0xB4473C;
    b = 0xB44730;
    e = 0xB44724;
    value = 0xB44718;
    target(this);
}
