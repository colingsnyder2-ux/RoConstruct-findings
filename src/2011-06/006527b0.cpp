// from server: 85% by atomic.potato
struct S
{
    void f();
    int a;
    int b;
    int c;
    int d;
    int e[32];
};

void S::f()
{
    a = 0xa9a2dc;
    b = 0xa9a2d4;
    c = 0xa9a2c8;
    d = 0xa9a2bc;
    e[28] = 0xa9a294;
}
