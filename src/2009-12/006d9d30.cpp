// from server: 85% by atomic.potato
struct S
{
    int a;
    int b;
    int c;
    int d;
    int e[32];

    void f();
};

void S::f()
{
    a = 0x9d972c;
    b = 0x9d9724;
    c = 0x9d9718;
    d = 0x9d9710;
    e[28] = 0x9d9704;
}
