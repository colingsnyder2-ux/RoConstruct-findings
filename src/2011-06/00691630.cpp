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

extern "C" void __cdecl Target(S *);

void S::f()
{
    a = 0xaa0f0c;
    b = 0xaa0f04;
    e = 0xaa0ef8;
    value = 0xaa0eec;
    Target(this);
}
