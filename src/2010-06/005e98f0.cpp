// from server: 93% by atomic.potato
struct S
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int field_f;
    int g;

    void f();
};

void S::f()
{
    a = 0x00a2e9f4;
    b = 0x00a2e9ec;
    e = 0x00a2e9e0;
    field_f = 0x00a2e9d4;
    extern void target();
    target();
}
